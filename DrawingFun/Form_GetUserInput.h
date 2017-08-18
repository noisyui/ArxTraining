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
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(135, 43);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(85, 22);
            this->textBox1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(41, 46);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(75, 17);
            this->label1->TabIndex = 1;
            this->label1->Text = L"First Point:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(20, 88);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(96, 17);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Second Point:";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(255, 85);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(85, 22);
            this->textBox2->TabIndex = 3;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(378, 43);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(85, 22);
            this->textBox3->TabIndex = 4;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(255, 43);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(85, 22);
            this->textBox4->TabIndex = 5;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(378, 85);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(85, 22);
            this->textBox5->TabIndex = 6;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(135, 85);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(85, 22);
            this->textBox6->TabIndex = 7;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(172, 23);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(14, 17);
            this->label3->TabIndex = 8;
            this->label3->Text = L"x";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(415, 23);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(15, 17);
            this->label4->TabIndex = 9;
            this->label4->Text = L"z";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(289, 23);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(15, 17);
            this->label5->TabIndex = 10;
            this->label5->Text = L"y";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(355, 128);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(108, 31);
            this->button1->TabIndex = 11;
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
            this->groupBox1->Location = System::Drawing::Point(12, 11);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(487, 170);
            this->groupBox1->TabIndex = 12;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"draw line";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(135, 39);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(85, 22);
            this->textBox7->TabIndex = 12;
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
            this->groupBox2->Location = System::Drawing::Point(12, 201);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(487, 161);
            this->groupBox2->TabIndex = 13;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"draw circle";
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(378, 39);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(85, 22);
            this->textBox10->TabIndex = 15;
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(255, 39);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(85, 22);
            this->textBox9->TabIndex = 12;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(355, 117);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(108, 31);
            this->button2->TabIndex = 12;
            this->button2->Text = L"Draw Circle";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(135, 81);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(85, 22);
            this->textBox8->TabIndex = 14;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(60, 84);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(56, 17);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Radius:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(26, 42);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(90, 17);
            this->label6->TabIndex = 12;
            this->label6->Text = L"Center Point:";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(172, 19);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(14, 17);
            this->label8->TabIndex = 12;
            this->label8->Text = L"x";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(289, 19);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(15, 17);
            this->label9->TabIndex = 12;
            this->label9->Text = L"y";
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
            // GetInputDialog
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(510, 373);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Name = L"GetInputDialog";
            this->Text = L"GetInputDialog";
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    };
}
