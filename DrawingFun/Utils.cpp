#include "StdAfx.h"
#include <regex>
#include "Utils.h"

using namespace System::Text::RegularExpressions;

void postToModelSpace(AcDbEntity* pEnt)
{
    acDocManager->lockDocument(curDoc());

    AcDbBlockTable *pBlockTable;
    acdbHostApplicationServices()->workingDatabase()->getBlockTable(pBlockTable, AcDb::kForRead);
    AcDbBlockTableRecord *pBlockTableRecord;
    pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord, AcDb::kForWrite);
    pBlockTable->close();

    AcDbObjectId entId;
    pBlockTableRecord->appendAcDbEntity(entId, pEnt);
    pBlockTableRecord->close();

    pEnt->close();

    //actrTransactionManager->queueForGraphicsFlush();
    actrTransactionManager->flushGraphics();
    acedUpdateDisplay();

    acDocManager->unlockDocument(curDoc());
}

void setFormDisplayAtCenter(System::Windows::Forms::Form^ form)
{
    // Get primary screens.
    System::Windows::Forms::Screen^ primaryScreen = System::Windows::Forms::Screen::PrimaryScreen;
    // Enable to set form position manually.
    form->StartPosition = System::Windows::Forms::FormStartPosition::Manual;

    form->Left = primaryScreen->WorkingArea.Location.X + (primaryScreen->Bounds.Width - form->Width) / 2;
    form->Top = primaryScreen->WorkingArea.Location.Y + (primaryScreen->Bounds.Height - form->Height) / 2;
}

void logToFile(char *str)
{
    std::ofstream out;
    out.open("out.txt", std::ios::app);
    if (out.is_open())
    {
        out << str;
        out.close();
    }
}

bool validateDouble(System::String^ str)
{
    System::String^ pattern = "^[0-9]*([.][0-9]*)?$";
    Regex^ r = gcnew Regex(pattern);
    bool retVal = r->IsMatch(str);
    return retVal;
}

bool validateDouble(System::Windows::Forms::TextBox^ textBox)
{
    bool retVal = validateDouble(textBox->Text);
    return retVal;
}
