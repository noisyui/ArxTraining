#include "dbents.h"

#pragma once

namespace DrawingFun {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for GetInputDialog
    /// </summary>
    public ref class GetInputDialog : public System::Windows::Forms::Form
    {
    public:
        GetInputDialog(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~GetInputDialog()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^  tbFirstX;
    protected:

    protected:

    protected:

    protected:
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  tbSecondY;

    private: System::Windows::Forms::TextBox^  tbFirstZ;




    private: System::Windows::Forms::TextBox^  tbFirstY;
    private: System::Windows::Forms::TextBox^  tbSecondZ;



    private: System::Windows::Forms::TextBox^  tbSecondX;




    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Button^  btnDrawLine;

    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::TextBox^  tbCenterX;


    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::TextBox^  tbCenterZ;

    private: System::Windows::Forms::TextBox^  tbCenterY;
    private: System::Windows::Forms::Button^  btnDrawCircle;


    private: System::Windows::Forms::TextBox^  tbRadius;

    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::Label^  label10;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Label^  label8;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->tbFirstX = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->tbSecondY = (gcnew System::Windows::Forms::TextBox());
            this->tbFirstZ = (gcnew System::Windows::Forms::TextBox());
            this->tbFirstY = (gcnew System::Windows::Forms::TextBox());
            this->tbSecondZ = (gcnew System::Windows::Forms::TextBox());
            this->tbSecondX = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->btnDrawLine = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->tbCenterX = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->tbCenterZ = (gcnew System::Windows::Forms::TextBox());
            this->tbCenterY = (gcnew System::Windows::Forms::TextBox());
            this->btnDrawCircle = (gcnew System::Windows::Forms::Button());
            this->tbRadius = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // tbFirstX
            // 
            this->tbFirstX->Location = System::Drawing::Point(101, 35);
            this->tbFirstX->Margin = System::Windows::Forms::Padding(2);
            this->tbFirstX->Name = L"tbFirstX";
            this->tbFirstX->Size = System::Drawing::Size(65, 21);
            this->tbFirstX->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(15, 38);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(77, 12);
            this->label1->TabIndex = 1;
            this->label1->Text = L"First Point:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(9, 70);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(83, 12);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Second Point:";
            // 
            // tbSecondY
            // 
            this->tbSecondY->Location = System::Drawing::Point(191, 67);
            this->tbSecondY->Margin = System::Windows::Forms::Padding(2);
            this->tbSecondY->Name = L"tbSecondY";
            this->tbSecondY->Size = System::Drawing::Size(65, 21);
            this->tbSecondY->TabIndex = 4;
            // 
            // tbFirstZ
            // 
            this->tbFirstZ->Location = System::Drawing::Point(284, 35);
            this->tbFirstZ->Margin = System::Windows::Forms::Padding(2);
            this->tbFirstZ->Name = L"tbFirstZ";
            this->tbFirstZ->Size = System::Drawing::Size(65, 21);
            this->tbFirstZ->TabIndex = 2;
            // 
            // tbFirstY
            // 
            this->tbFirstY->Location = System::Drawing::Point(191, 35);
            this->tbFirstY->Margin = System::Windows::Forms::Padding(2);
            this->tbFirstY->Name = L"tbFirstY";
            this->tbFirstY->Size = System::Drawing::Size(65, 21);
            this->tbFirstY->TabIndex = 1;
            // 
            // tbSecondZ
            // 
            this->tbSecondZ->Location = System::Drawing::Point(284, 67);
            this->tbSecondZ->Margin = System::Windows::Forms::Padding(2);
            this->tbSecondZ->Name = L"tbSecondZ";
            this->tbSecondZ->Size = System::Drawing::Size(65, 21);
            this->tbSecondZ->TabIndex = 5;
            // 
            // tbSecondX
            // 
            this->tbSecondX->Location = System::Drawing::Point(101, 67);
            this->tbSecondX->Margin = System::Windows::Forms::Padding(2);
            this->tbSecondX->Name = L"tbSecondX";
            this->tbSecondX->Size = System::Drawing::Size(65, 21);
            this->tbSecondX->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(129, 16);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(11, 12);
            this->label3->TabIndex = 8;
            this->label3->Text = L"x";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(311, 16);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(11, 12);
            this->label4->TabIndex = 9;
            this->label4->Text = L"z";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(217, 16);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(11, 12);
            this->label5->TabIndex = 10;
            this->label5->Text = L"y";
            // 
            // btnDrawLine
            // 
            this->btnDrawLine->Location = System::Drawing::Point(266, 99);
            this->btnDrawLine->Margin = System::Windows::Forms::Padding(2);
            this->btnDrawLine->Name = L"btnDrawLine";
            this->btnDrawLine->Size = System::Drawing::Size(81, 23);
            this->btnDrawLine->TabIndex = 6;
            this->btnDrawLine->Text = L"Draw Line";
            this->btnDrawLine->UseVisualStyleBackColor = true;
            this->btnDrawLine->Click += gcnew System::EventHandler(this, &GetInputDialog::button1_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->tbFirstX);
            this->groupBox1->Controls->Add(this->btnDrawLine);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->label5);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label4);
            this->groupBox1->Controls->Add(this->tbSecondY);
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Controls->Add(this->tbFirstZ);
            this->groupBox1->Controls->Add(this->tbSecondX);
            this->groupBox1->Controls->Add(this->tbFirstY);
            this->groupBox1->Controls->Add(this->tbSecondZ);
            this->groupBox1->Location = System::Drawing::Point(9, 8);
            this->groupBox1->Margin = System::Windows::Forms::Padding(2);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Padding = System::Windows::Forms::Padding(2);
            this->groupBox1->Size = System::Drawing::Size(365, 131);
            this->groupBox1->TabIndex = 12;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"draw line";
            // 
            // tbCenterX
            // 
            this->tbCenterX->Location = System::Drawing::Point(101, 31);
            this->tbCenterX->Margin = System::Windows::Forms::Padding(2);
            this->tbCenterX->Name = L"tbCenterX";
            this->tbCenterX->Size = System::Drawing::Size(65, 21);
            this->tbCenterX->TabIndex = 7;
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->label10);
            this->groupBox2->Controls->Add(this->label9);
            this->groupBox2->Controls->Add(this->label8);
            this->groupBox2->Controls->Add(this->tbCenterZ);
            this->groupBox2->Controls->Add(this->tbCenterY);
            this->groupBox2->Controls->Add(this->btnDrawCircle);
            this->groupBox2->Controls->Add(this->tbRadius);
            this->groupBox2->Controls->Add(this->label7);
            this->groupBox2->Controls->Add(this->label6);
            this->groupBox2->Controls->Add(this->tbCenterX);
            this->groupBox2->Location = System::Drawing::Point(9, 151);
            this->groupBox2->Margin = System::Windows::Forms::Padding(2);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Padding = System::Windows::Forms::Padding(2);
            this->groupBox2->Size = System::Drawing::Size(365, 121);
            this->groupBox2->TabIndex = 13;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"draw circle";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(311, 14);
            this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(11, 12);
            this->label10->TabIndex = 12;
            this->label10->Text = L"z";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(217, 13);
            this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(11, 12);
            this->label9->TabIndex = 12;
            this->label9->Text = L"y";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(129, 13);
            this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(11, 12);
            this->label8->TabIndex = 12;
            this->label8->Text = L"x";
            // 
            // tbCenterZ
            // 
            this->tbCenterZ->Location = System::Drawing::Point(284, 31);
            this->tbCenterZ->Margin = System::Windows::Forms::Padding(2);
            this->tbCenterZ->Name = L"tbCenterZ";
            this->tbCenterZ->Size = System::Drawing::Size(65, 21);
            this->tbCenterZ->TabIndex = 9;
            // 
            // tbCenterY
            // 
            this->tbCenterY->Location = System::Drawing::Point(191, 31);
            this->tbCenterY->Margin = System::Windows::Forms::Padding(2);
            this->tbCenterY->Name = L"tbCenterY";
            this->tbCenterY->Size = System::Drawing::Size(65, 21);
            this->tbCenterY->TabIndex = 8;
            // 
            // btnDrawCircle
            // 
            this->btnDrawCircle->Location = System::Drawing::Point(266, 90);
            this->btnDrawCircle->Margin = System::Windows::Forms::Padding(2);
            this->btnDrawCircle->Name = L"btnDrawCircle";
            this->btnDrawCircle->Size = System::Drawing::Size(81, 23);
            this->btnDrawCircle->TabIndex = 11;
            this->btnDrawCircle->Text = L"Draw Circle";
            this->btnDrawCircle->UseVisualStyleBackColor = true;
            this->btnDrawCircle->Click += gcnew System::EventHandler(this, &GetInputDialog::btnDrawCircle_Click);
            // 
            // tbRadius
            // 
            this->tbRadius->Location = System::Drawing::Point(101, 63);
            this->tbRadius->Margin = System::Windows::Forms::Padding(2);
            this->tbRadius->Name = L"tbRadius";
            this->tbRadius->Size = System::Drawing::Size(65, 21);
            this->tbRadius->TabIndex = 10;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(45, 66);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(47, 12);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Radius:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(9, 34);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(83, 12);
            this->label6->TabIndex = 12;
            this->label6->Text = L"Center Point:";
            // 
            // GetInputDialog
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(384, 281);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Margin = System::Windows::Forms::Padding(2);
            this->MaximumSize = System::Drawing::Size(400, 320);
            this->MinimumSize = System::Drawing::Size(400, 320);
            this->Name = L"GetInputDialog";
            this->Text = L"Input Parameters";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private:

        System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
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

            postToModelSpace(pLine);
        }

        System::Void btnDrawCircle_Click(System::Object^  sender, System::EventArgs^  e) 
        {
            double ptCenterX = Convert::ToDouble(tbCenterX->Text);
            double ptCenterY = Convert::ToDouble(tbCenterY->Text);
            double ptCenterZ = Convert::ToDouble(tbCenterZ->Text);
            AcGePoint3d ptCenter(ptCenterX, ptCenterY, ptCenterZ);

            AcGeVector3d vec(0, 0, 1);

            double radius = Convert::ToDouble(tbRadius->Text);

            AcDbCircle *pCircle = new AcDbCircle(ptCenter, vec, radius);

            postToModelSpace(pCircle);
        }

        System::Void postToModelSpace(AcDbEntity* pEnt)
        {
            AcDbBlockTable *pBlockTable;
            acdbHostApplicationServices()->workingDatabase()->getBlockTable(pBlockTable, AcDb::kForRead);
            AcDbBlockTableRecord *pBlockTableRecord;
            pBlockTable->getAt(ACDB_MODEL_SPACE, pBlockTableRecord, AcDb::kForWrite);
            AcDbObjectId entId;
            pBlockTableRecord->appendAcDbEntity(entId, pEnt);

            pBlockTable->close();
            pBlockTableRecord->close();
            pEnt->close();
        }

    };
}
