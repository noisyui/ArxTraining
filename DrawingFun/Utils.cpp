#include "StdAfx.h"
#include <regex>
#include <tchar.h>
#include <iomanip>
#include <sstream>
#include "Utils.h"

using namespace System::Text::RegularExpressions;
using namespace System::Text;

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
    bool retVal = false;

    if (str != nullptr && str->Length > 0) {
        System::String^ pattern = "^-?[0-9]*([.][0-9]*)?$";
        Regex^ r = gcnew Regex(pattern);
        retVal = r->IsMatch(str);
    }

    return retVal;
}

bool validateDouble(System::Windows::Forms::TextBox^ textBox)
{
    bool retVal = validateDouble(textBox->Text);
    return retVal;
}

std::string format(double d)
{
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << d;
    std::string retValue = stream.str();
    return retValue;
}

std::string format(double d, std::streamsize precision)
{
    std::stringstream stream;
    stream << std::fixed << std::setprecision(precision) << d;
    std::string retValue = stream.str();
    return retValue;
}

System::String^ format(double d, short precision)
{
    StringBuilder^ builder = gcnew StringBuilder();
    builder->Append(2);
    acutPrintf(_T("%s\n"), builder->ToString());
    builder->Clear();
    acutPrintf(_T("%s\n"), builder->ToString());
    builder->Append("N");
    acutPrintf(_T("%s\n"), builder->ToString());
    builder->Append(precision);
    acutPrintf(_T("%s\n"), builder->ToString());
    System::String^ retValue = d.ToString(builder->ToString());
    return retValue;
}
