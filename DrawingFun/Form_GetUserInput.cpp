#include "stdafx.h"
#include <tchar.h>
#include "Utils.h"
#include "Form_GetUserInput.h"

System::Void DrawingFun::GetInputDialog::GetInputDialog_Load(System::Object^  sender, System::EventArgs^  e)
{
    //logToFile("setFormDisplayAtCenter Begin!\n");
    setFormDisplayAtCenter(this);
}

System::Void DrawingFun::GetInputDialog::btnPickPoint1_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (acedSetOLELock(5) == Adesk::kTrue) // arbitrary handle value
    {
        this->Hide();
        ads_point result;
        if (acedGetPoint(NULL, _T("Pick a point: "), result) == RTNORM)
        {
            tbFirstX->Text = Convert::ToString(result[X]);
            tbFirstY->Text = Convert::ToString(result[Y]);
            tbFirstZ->Text = Convert::ToString(result[Z]);
        }
        this->Show();
        acedClearOLELock(5);
    }
}

System::Void DrawingFun::GetInputDialog::btnPickPoint2_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (acedSetOLELock(5) == Adesk::kTrue) // arbitrary handle value
    {
        this->Hide();
        ads_point result;
        if (acedGetPoint(NULL, _T("Pick a point: "), result) == RTNORM)
        {
            tbSecondX->Text = Convert::ToString(result[X]);
            tbSecondY->Text = Convert::ToString(result[Y]);
            tbSecondZ->Text = Convert::ToString(result[Z]);
        }
        this->Show();
        acedClearOLELock(5);
    }
}

System::Void DrawingFun::GetInputDialog::btnPickCenterPnt_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (acedSetOLELock(5) == Adesk::kTrue) // arbitrary handle value
    {
        this->SetVisibleCore(false);
        ads_point result;
        if (acedGetPoint(NULL, _T("Pick a point: "), result) == RTNORM)
        {
            this->SetVisibleCore(true);
            tbCenterX->Text = Convert::ToString(result[X]);
            tbCenterY->Text = Convert::ToString(result[Y]);
            tbCenterZ->Text = Convert::ToString(result[Z]);
        }
        this->SetVisibleCore(true);
        acedClearOLELock(5);
    }
}

System::Void DrawingFun::GetInputDialog::btnDrawLine_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (validateDouble(tbFirstX) && validateDouble(tbFirstY) && validateDouble(tbFirstZ)
        && validateDouble(tbSecondX) && validateDouble(tbSecondY) && validateDouble(tbSecondZ))
    {
        double ptFirstX = Convert::ToDouble(tbFirstX->Text);
        double ptFirstY = Convert::ToDouble(tbFirstY->Text);
        double ptFirstZ = Convert::ToDouble(tbFirstZ->Text);
        AcGePoint3d ptStart(ptFirstX, ptFirstY, ptFirstZ);

        double ptSecondX = Convert::ToDouble(tbSecondX->Text);
        double ptSecondY = Convert::ToDouble(tbSecondY->Text);
        double ptSecondZ = Convert::ToDouble(tbSecondZ->Text);
        AcGePoint3d ptEnd(ptSecondX, ptSecondY, ptSecondZ);

        AcDbLine *pLine = new AcDbLine(ptStart, ptEnd);
        pLine->setColorIndex(5);

        postToModelSpace(pLine);
    }
}

System::Void DrawingFun::GetInputDialog::btnDrawCircle_Click(System::Object^  sender, System::EventArgs^  e)
{
    if (validateDouble(tbCenterX) && validateDouble(tbCenterY) && validateDouble(tbCenterZ)
        && validateDouble(tbRadius))
    {
        //logToFile("btnDrawCircle_Click Begin!\n");

        acutPrintf(_T("btnDrawCircle_Click Begin!"));

        double ptCenterX = Convert::ToDouble(tbCenterX->Text);
        //logToFile("ptCenterX:%.2f\n");
        acutPrintf(_T("ptCenterX:%.2f"), ptCenterX);
        double ptCenterY = Convert::ToDouble(tbCenterY->Text);
        double ptCenterZ = Convert::ToDouble(tbCenterZ->Text);
        AcGePoint3d ptCenter(ptCenterX, ptCenterY, ptCenterZ);

        AcGeVector3d vec(0, 0, 1);

        double radius = Convert::ToDouble(tbRadius->Text);

        AcDbCircle *pCircle = new AcDbCircle(ptCenter, vec, radius);
        pCircle->setColorIndex(1);

        postToModelSpace(pCircle);

        //logToFile("btnDrawCircle_Click End!\n");
        acutPrintf(_T("btnDrawCircle_Click End!"));
    }
}
