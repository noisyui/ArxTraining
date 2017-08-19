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
    private: System::Windows::Forms::TextBox^  textBox1;
    protected:
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::TextBox^  textBox4;
    private: System::Windows::Forms::TextBox^  textBox5;
    private: System::Windows::Forms::TextBox^  textBox6;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::GroupBox^  groupBox1;
    private: System::Windows::Forms::TextBox^  textBox7;
    private: System::Windows::Forms::GroupBox^  groupBox2;
    private: System::Windows::Forms::TextBox^  textBox10;
    private: System::Windows::Forms::TextBox^  textBox9;
    private: System::Windows::Forms::Button^  button2;
    private: System::Windows::Forms::TextBox^  textBox8;
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
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(101, 35);
            this->textBox1->Margin = System::Windows::Forms::Padding(2);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(65, 21);
            this->textBox1->TabIndex = 0;
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
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(191, 67);
            this->textBox2->Margin = System::Windows::Forms::Padding(2);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(65, 21);
            this->textBox2->TabIndex = 4;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(284, 35);
            this->textBox3->Margin = System::Windows::Forms::Padding(2);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(65, 21);
            this->textBox3->TabIndex = 2;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(191, 35);
            this->textBox4->Margin = System::Windows::Forms::Padding(2);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(65, 21);
            this->textBox4->TabIndex = 1;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(284, 67);
            this->textBox5->Margin = System::Windows::Forms::Padding(2);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(65, 21);
            this->textBox5->TabIndex = 5;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(101, 67);
            this->textBox6->Margin = System::Windows::Forms::Padding(2);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(65, 21);
            this->textBox6->TabIndex = 3;
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
            // button1
            // 
            this->button1->Location = System::Drawing::Point(266, 99);
            this->button1->Margin = System::Windows::Forms::Padding(2);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(81, 23);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Draw Line";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->textBox1);
            this->groupBox1->Controls->Add(this->button1);
            this->groupBox1->Controls->Add(this->label1);
            this->groupBox1->Controls->Add(this->label5);
            this->groupBox1->Controls->Add(this->label2);
            this->groupBox1->Controls->Add(this->label4);
            this->groupBox1->Controls->Add(this->textBox2);
            this->groupBox1->Controls->Add(this->label3);
            this->groupBox1->Controls->Add(this->textBox3);
            this->groupBox1->Controls->Add(this->textBox6);
            this->groupBox1->Controls->Add(this->textBox4);
            this->groupBox1->Controls->Add(this->textBox5);
            this->groupBox1->Location = System::Drawing::Point(9, 8);
            this->groupBox1->Margin = System::Windows::Forms::Padding(2);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Padding = System::Windows::Forms::Padding(2);
            this->groupBox1->Size = System::Drawing::Size(365, 131);
            this->groupBox1->TabIndex = 12;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"draw line";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(101, 31);
            this->textBox7->Margin = System::Windows::Forms::Padding(2);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(65, 21);
            this->textBox7->TabIndex = 7;
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->label10);
            this->groupBox2->Controls->Add(this->label9);
            this->groupBox2->Controls->Add(this->label8);
            this->groupBox2->Controls->Add(this->textBox10);
            this->groupBox2->Controls->Add(this->textBox9);
            this->groupBox2->Controls->Add(this->button2);
            this->groupBox2->Controls->Add(this->textBox8);
            this->groupBox2->Controls->Add(this->label7);
            this->groupBox2->Controls->Add(this->label6);
            this->groupBox2->Controls->Add(this->textBox7);
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
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(284, 31);
            this->textBox10->Margin = System::Windows::Forms::Padding(2);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(65, 21);
            this->textBox10->TabIndex = 9;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(191, 31);
            this->textBox9->Margin = System::Windows::Forms::Padding(2);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(65, 21);
            this->textBox9->TabIndex = 8;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(266, 90);
            this->button2->Margin = System::Windows::Forms::Padding(2);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(81, 23);
            this->button2->TabIndex = 11;
            this->button2->Text = L"Draw Circle";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(101, 63);
            this->textBox8->Margin = System::Windows::Forms::Padding(2);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(65, 21);
            this->textBox8->TabIndex = 10;
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
    };
}
