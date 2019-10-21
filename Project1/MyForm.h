#pragma once
#include <cctype>
#include <string>
#include <iostream>

namespace Project1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	bool b[9] = { false };
	int box[9], i, j, s=0, m=0;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label9;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(64, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 44);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(158, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 44);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(64, 170);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(53, 44);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(158, 170);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 44);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(257, 170);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 44);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(64, 243);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(53, 44);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(158, 243);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(53, 44);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(257, 243);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 44);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(82, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"s1";
			this->label1->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(178, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"s2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(276, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"s3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(315, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"s4";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(315, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"s5";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(315, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"s6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(319, 70);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"s7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(319, 299);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"s8";
			this->label8->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(257, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(53, 44);
			this->textBox3->TabIndex = 18;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(187, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Hint";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(12, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(356, 25);
			this->label9->TabIndex = 20;
			this->label9->Text = L"00:00";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(397, 451);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"Magic Square Game by Ron B.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool notSameCheck()
		{
			for (i = 0; i < 8; i++)
				for (j = i + 1; j <= 8; j++)
					if (box[i] == box[j])
						return false;

					else
						return true;
		}

		void solver()
		{
			if (b[0] && b[1] && b[2] && b[3] && b[4] && b[5] && b[6] && b[7] && b[8] &&
				box[0] + box[1] + box[2] == 15 && box[3] + box[4] + box[5] == 15 &&
				box[6] + box[7] + box[8] == 15 && box[0] + box[3] + box[6] == 15 &&
				box[1] + box[4] + box[7] == 15 && box[2] + box[5] + box[8] == 15 &&
				box[0] + box[4] + box[8] == 15 && box[2] + box[4] + box[6] == 15 &&
				notSameCheck())
			{

				timer1->Stop();
				if (MessageBox::Show("You've solved the magic square! " + "\n" + "It took you " + label9->Text + "\nExit?", "congratulations", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
					Application::Exit();

			}
		}

		//Different from notSameCheck. notSameCheck checks only if no variables are the same of all the boxes. singleCheck
		//compares a newly entered value with all other values and only plays a sound if it finds another box with the same value. If you
		//were to use notSameCheck instead, program would play a beep for unique numbers you put if you already have any numbers
		//on the board that are the same which is not intended. A sound should play only when the same number is entered.
		bool singleCheck(int x)
		{
			for (i = 0; i <= 8; i++)
				if (b[i] && x == box[i])
					return true;
		}

/************** functions that check each row/col/diag for numbers and then add/show sum ************/
		void row1()
		{
			if (b[0] && b[1] && b[2])
			{
				this->label4->Text = Convert::ToString(box[0] + box[1] + box[2]);
				this->label4->Visible = true;
			}
		}

		void row2()
		{
			if (b[3] && b[4] && b[5])
			{
				this->label5->Text = Convert::ToString(box[3] + box[4] + box[5]);
				this->label5->Visible = true;
			}
		}

		void row3()
		{
			if (b[6] && b[7] && b[8])
			{
				this->label6->Text = Convert::ToString(box[6] + box[7] + box[8]);
				this->label6->Visible = true;
			}
		}

		void diag1()
		{
			if (b[0] && b[4] && b[8])
			{
				this->label8->Text = Convert::ToString(box[0] + box[4] + box[8]);
				this->label8->Visible = true;
			}
		}

		void diag2()
		{
			if (b[2] && b[4] && b[6])
			{
				this->label7->Text = Convert::ToString(box[2] + box[4] + box[6]);
				this->label7->Visible = true;
			}
		}

		void col1()
		{
			if (b[0] && b[3] && b[6])
			{
				this->label1->Text = Convert::ToString(box[0] + box[3] + box[6]);
				this->label1->Visible = true;
			}
		}

		void col2()
		{
			if (b[1] && b[4] && b[7])
			{
				this->label2->Text = Convert::ToString(box[1] + box[4] + box[7]);
				this->label2->Visible = true;
			}
		}

		void col3()
		{
			if (b[2] && b[5] && b[8])
			{
				this->label3->Text = Convert::ToString(box[2] + box[5] + box[8]);
				this->label3->Visible = true;
			}
		}

/**************************************row 1**********************************/

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[0] = false;
		this->label4->Visible = false;
		this->label1->Visible = false;
		this->label8->Visible = false;
		timer1->Start();
		if (this->textBox1->Text->Length == 1)
		{
			String^ s = this->textBox1->Text;
			if (isdigit(s[0]))
			{	
				if(singleCheck(Convert::ToInt32(this->textBox1->Text)))
					SystemSounds::Beep->Play();

				box[0] = Convert::ToInt32(this->textBox1->Text);
				b[0] = true;
			}
			else
				box[0] = 0;

			row1();
			col1();
			diag1();
			solver();
		}
		else
			box[0] = 0;
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[1] = false;
		this->label4->Visible = false;
		this->label2->Visible = false;
		timer1->Start();
		if (this->textBox2->Text->Length == 1)
		{
			String^ s = this->textBox2->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox2->Text)))
					SystemSounds::Beep->Play();

				box[1] = Convert::ToInt32(this->textBox2->Text);
				b[1] = true;
			}
			else
				box[1] = 0;

			row1();
			col2();
			solver();
		}
		else
			box[1] = 0;
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[2] = false;
		this->label4->Visible = false;
		this->label3->Visible = false;
		this->label7->Visible = false;
		timer1->Start();
		if (this->textBox3->Text->Length == 1)
		{
			String^ s = this->textBox3->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox3->Text)))
					SystemSounds::Beep->Play();

				box[2] = Convert::ToInt32(this->textBox3->Text);
				b[2] = true;
			}
			else
				box[2] = 0;

			row1();
			col3();
			diag2();
			solver();
		}
		else
			box[2] = 0;
	}
/*************************************row 2**********************************/

	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[3] = false;
		this->label5->Visible = false;
		this->label1->Visible = false;
		timer1->Start();
		if (this->textBox4->Text->Length == 1)
		{
			String^ s = this->textBox4->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox4->Text)))
					SystemSounds::Beep->Play();

				box[3] = Convert::ToInt32(this->textBox4->Text);
				b[3] = true;
			}
			else
				box[3] = 0;

			row2();
			col1();
			solver();
		}
		else
			box[3] = 0;
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[4] = false;
		this->label5->Visible = false;
		this->label2->Visible = false;
		this->label8->Visible = false;
		this->label7->Visible = false;
		timer1->Start();
		if (this->textBox5->Text->Length == 1)
		{
			String^ s = this->textBox5->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox5->Text)))
					SystemSounds::Beep->Play();

				box[4] = Convert::ToInt32(this->textBox5->Text);
				b[4] = true;
			}
			else
				box[4] = 0;

			row2();
			col2();
			diag1();
			diag2();
			solver();
		}
		else
			box[4] = 0;
	}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[5] = false;
		this->label5->Visible = false;
		this->label3->Visible = false;
		timer1->Start();
		if (this->textBox6->Text->Length == 1)
		{
			String^ s = this->textBox6->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox6->Text)))
					SystemSounds::Beep->Play();

				box[5] = Convert::ToInt32(this->textBox6->Text);
				b[5] = true;
			}
			else
				box[5] = 0;

			row2();
			col3();
			solver();
		}
		else
			box[5] = 0;
	}

/***********************************row 3*****************************************/


	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[6] = false;
		this->label6->Visible = false;
		this->label1->Visible = false;
		this->label7->Visible = false;
		timer1->Start();
		if (this->textBox7->Text->Length == 1)
		{
			String^ s = this->textBox7->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox7->Text)))
					SystemSounds::Beep->Play();

				box[6] = Convert::ToInt32(this->textBox7->Text);
				b[6] = true;
			}
			else
				box[6] = 0;

			row3();
			col1();
			diag2();
			solver();
		}
		else
			box[6] = 0;
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[7] = false;
		this->label6->Visible = false;
		this->label2->Visible = false;
		timer1->Start();
		if (this->textBox8->Text->Length == 1)
		{
			String^ s = this->textBox8->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox8->Text)))
					SystemSounds::Beep->Play();

				box[7] = Convert::ToInt32(this->textBox8->Text);
				b[7] = true;
			}
			else
				box[7] = 0;

			row3();
			col2();
			solver();
		}
		else
			box[7] = 0;
	}
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		b[8] = false;
		this->label6->Visible = false;
		this->label3->Visible = false;
		this->label8->Visible = false;
		timer1->Start();
		if (this->textBox9->Text->Length == 1)
		{
			String^ s = this->textBox9->Text;
			if (isdigit(s[0]))
			{
				if (singleCheck(Convert::ToInt32(this->textBox9->Text)))
					SystemSounds::Beep->Play();

				box[8] = Convert::ToInt32(this->textBox9->Text);
				b[8] = true;
			}
			else
				box[8] = 0;

			row3();
			diag1();
			col3();
			solver();
		}
		else
			box[8] = 0;
	}

/***********************************************************************************************************/

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->textBox4->Text = "";
		this->textBox5->Text = "";
		this->textBox6->Text = "";
		this->textBox7->Text = "";
		this->textBox8->Text = "";
		this->textBox9->Text = "";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if(box[0] != 4)
			this->textBox1->Text = "4";
		else if(box[1] != 9)
			this->textBox2->Text = "9";
		else if (box[2] != 2)
			this->textBox3->Text = "2";
		else if (box[3] != 3)
			this->textBox4->Text = "3";
		else if (box[4] != 5)
			this->textBox5->Text = "5";
		else if (box[5] != 7)
			this->textBox6->Text = "7";
		else if (box[6] != 8)
			this->textBox7->Text = "8";
		else if (box[7] != 1)
			this->textBox8->Text = "1";
		else if (box[8] != 6)
			this->textBox9->Text = "6";
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		s += 1;
			if (s == 60) 
			{
				s = 0;
				m += 1;

				if (m >= 99)
					label9->Text = "Over 100 minutes";
			}

		label9->Text = m.ToString("D2") + ":" + s.ToString("D2");
	}
};
}
