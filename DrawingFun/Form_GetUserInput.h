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
            this->tbFirstX->Location = System::Drawing::Point(135, 47);
            this->tbFirstX->Name = L"tbFirstX";
            this->tbFirstX->Size = System::Drawing::Size(85, 22);
            this->tbFirstX->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(20, 51);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(75, 17);
            this->label1->TabIndex = 1;
            this->label1->Text = L"First Point:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(12, 93);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(96, 17);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Second Point:";
            // 
            // tbSecondY
            // 
            this->tbSecondY->Location = System::Drawing::Point(255, 89);
            this->tbSecondY->Name = L"tbSecondY";
            this->tbSecondY->Size = System::Drawing::Size(85, 22);
            this->tbSecondY->TabIndex = 4;
            // 
            // tbFirstZ
            // 
            this->tbFirstZ->Location = System::Drawing::Point(379, 47);
            this->tbFirstZ->Name = L"tbFirstZ";
            this->tbFirstZ->Size = System::Drawing::Size(85, 22);
            this->tbFirstZ->TabIndex = 2;
            // 
            // tbFirstY
            // 
            this->tbFirstY->Location = System::Drawing::Point(255, 47);
            this->tbFirstY->Name = L"tbFirstY";
            this->tbFirstY->Size = System::Drawing::Size(85, 22);
            this->tbFirstY->TabIndex = 1;
            // 
            // tbSecondZ
            // 
            this->tbSecondZ->Location = System::Drawing::Point(379, 89);
            this->tbSecondZ->Name = L"tbSecondZ";
            this->tbSecondZ->Size = System::Drawing::Size(85, 22);
            this->tbSecondZ->TabIndex = 5;
            // 
            // tbSecondX
            // 
            this->tbSecondX->Location = System::Drawing::Point(135, 89);
            this->tbSecondX->Name = L"tbSecondX";
            this->tbSecondX->Size = System::Drawing::Size(85, 22);
            this->tbSecondX->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(172, 21);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(14, 17);
            this->label3->TabIndex = 8;
            this->label3->Text = L"x";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(415, 21);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(15, 17);
            this->label4->TabIndex = 9;
            this->label4->Text = L"z";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(289, 21);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(15, 17);
            this->label5->TabIndex = 10;
            this->label5->Text = L"y";
            // 
            // btnDrawLine
            // 
            this->btnDrawLine->Location = System::Drawing::Point(355, 132);
            this->btnDrawLine->Name = L"btnDrawLine";
            this->btnDrawLine->Size = System::Drawing::Size(108, 31);
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
            this->groupBox1->Location = System::Drawing::Point(12, 11);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(487, 175);
            this->groupBox1->TabIndex = 12;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"draw line";
            // 
            // tbCenterX
            // 
            this->tbCenterX->Location = System::Drawing::Point(135, 41);
            this->tbCenterX->Name = L"tbCenterX";
            this->tbCenterX->Size = System::Drawing::Size(85, 22);
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
            this->groupBox2->Location = System::Drawing::Point(12, 201);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(487, 161);
            this->groupBox2->TabIndex = 13;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"draw circle";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(415, 19);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(15, 17);
            this->label10->TabIndex = 12;
            this->label10->Text = L"z";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(289, 17);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(15, 17);
            this->label9->TabIndex = 12;
            this->label9->Text = L"y";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(172, 17);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(14, 17);
            this->label8->TabIndex = 12;
            this->label8->Text = L"x";
            // 
            // tbCenterZ
            // 
            this->tbCenterZ->Location = System::Drawing::Point(379, 41);
            this->tbCenterZ->Name = L"tbCenterZ";
            this->tbCenterZ->Size = System::Drawing::Size(85, 22);
            this->tbCenterZ->TabIndex = 9;
            // 
            // tbCenterY
            // 
            this->tbCenterY->Location = System::Drawing::Point(255, 41);
            this->tbCenterY->Name = L"tbCenterY";
            this->tbCenterY->Size = System::Drawing::Size(85, 22);
            this->tbCenterY->TabIndex = 8;
            // 
            // btnDrawCircle
            // 
            this->btnDrawCircle->Location = System::Drawing::Point(355, 120);
            this->btnDrawCircle->Name = L"btnDrawCircle";
            this->btnDrawCircle->Size = System::Drawing::Size(108, 31);
            this->btnDrawCircle->TabIndex = 11;
            this->btnDrawCircle->Text = L"Draw Circle";
            this->btnDrawCircle->UseVisualStyleBackColor = true;
            this->btnDrawCircle->Click += gcnew System::EventHandler(this, &GetInputDialog::btnDrawCircle_Click);
            // 
            // tbRadius
            // 
            this->tbRadius->Location = System::Drawing::Point(135, 84);
            this->tbRadius->Name = L"tbRadius";
            this->tbRadius->Size = System::Drawing::Size(85, 22);
            this->tbRadius->TabIndex = 10;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(60, 88);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(56, 17);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Radius:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(12, 45);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(90, 17);
            this->label6->TabIndex = 12;
            this->label6->Text = L"Center Point:";
            // 
            // GetInputDialog
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(509, 367);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->MaximumSize = System::Drawing::Size(527, 412);
            this->MinimumSize = System::Drawing::Size(527, 412);
            this->Name = L"GetInputDialog";
            this->Text = L"Input Parameters";
            this->Load += gcnew System::EventHandler(this, &GetInputDialog::GetInputDialog_Load);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
        System::Void btnDrawCircle_Click(System::Object^  sender, System::EventArgs^  e);
        System::Void GetInputDialog_Load(System::Object^  sender, System::EventArgs^  e);
    };
}
