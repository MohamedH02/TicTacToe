#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(71, 14);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1283, 117);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(982, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"by MohamedHM";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(325, -22);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(631, 162);
			this->label5->TabIndex = 0;
			this->label5->Text = L"TicTacToe";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Location = System::Drawing::Point(15, 137);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1420, 665);
			this->panel2->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::SaddleBrown;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->button9);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->button4);
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Location = System::Drawing::Point(20, 31);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(860, 611);
			this->panel5->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(577, 418);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(281, 202);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(289, 418);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(281, 202);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(0, 418);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(281, 202);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(577, 209);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(281, 202);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(289, 209);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(281, 202);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(0, 209);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(281, 202);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(577, 0);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(281, 202);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(289, 0);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 202);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 202);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold));
			this->panel3->Location = System::Drawing::Point(916, 31);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(469, 299);
			this->panel3->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(281, 227);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 47);
			this->label3->TabIndex = 3;
			this->label3->Text = L"0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(283, 42);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 47);
			this->label4->TabIndex = 2;
			this->label4->Text = L"0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(67, 225);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 51);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PlayerO :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Maroon;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(71, 38);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 51);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PlayerX :";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Location = System::Drawing::Point(916, 369);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(469, 272);
			this->panel4->TabIndex = 0;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 26.25F, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button11->Location = System::Drawing::Point(48, 155);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(371, 80);
			this->button11->TabIndex = 1;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button10->Location = System::Drawing::Point(48, 30);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(371, 80);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(70, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 35);
			this->label7->TabIndex = 4;
			this->label7->Text = L"PlayerX turn...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(1451, 826);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}

				


		Boolean checker;
		int plusone;

#pragma endregion

		void Enable_false()		//makes all the buttons not interactive
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
		}
											/*====EACH WINNING SITUATION\/====*/

													/*====THE X \/====*/
		void score()
		{
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::Red;		//high lights the winning row red color for x
				button2->BackColor = System::Drawing::Color::Red;		//high lights the winning row red color for x
				button3->BackColor = System::Drawing::Color::Red;		//high lights the winning row red color for x

				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);	//displays the pop up msg
				plusone = int::Parse(label4->Text); 
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();		//makes all the buttons not interactive
			}

			else if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
			{
				button4->BackColor = System::Drawing::Color::Red;
				button5->BackColor = System::Drawing::Color::Red;
				button6->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
			{
				button7->BackColor = System::Drawing::Color::Red;
				button8->BackColor = System::Drawing::Color::Red;
				button9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::Red;
				button4->BackColor = System::Drawing::Color::Red;
				button7->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
			{
				button2->BackColor = System::Drawing::Color::Red;
				button5->BackColor = System::Drawing::Color::Red;
				button8->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X")
			{
				button3->BackColor = System::Drawing::Color::Red;
				button6->BackColor = System::Drawing::Color::Red;
				button9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
			{
				button1->BackColor = System::Drawing::Color::Red;
				button5->BackColor = System::Drawing::Color::Red;
				button9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
			{
				button3->BackColor = System::Drawing::Color::Red;
				button5->BackColor = System::Drawing::Color::Red;
				button7->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("PlayerX WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label4->Text);
				label4->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

														/*===== THE O \/=====*/



			else if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Green;		//high lights the winning row green color for o
				button2->BackColor = System::Drawing::Color::Green;		//high lights the winning row green color for o
				button3->BackColor = System::Drawing::Color::Green;		//high lights the winning row green color for o
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
			{
				button4->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button6->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
			{
				button7->BackColor = System::Drawing::Color::Green;
				button8->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button4->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
			{
				button2->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button8->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O")
			{
				button3->BackColor = System::Drawing::Color::Green;
				button6->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
			{
				button1->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
			{
				button3->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Green;
				MessageBox::Show("PlayerO WON!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(label3->Text);
				label3->Text = Convert::ToString(plusone + 1);
				Enable_false();
			}

			else if (button1->Enabled == false && button2->Enabled == false && button3->Enabled == false
			&& button4->Enabled == false && button5->Enabled == false && button6->Enabled == false
			&& button7->Enabled == false && button8->Enabled == false && button9->Enabled == false)
{
				button1->BackColor = System::Drawing::Color::Red;
				button2->BackColor = System::Drawing::Color::Green;
				button3->BackColor = System::Drawing::Color::Red;
				button4->BackColor = System::Drawing::Color::Green;
				button5->BackColor = System::Drawing::Color::Red;
				button6->BackColor = System::Drawing::Color::Green;
				button7->BackColor = System::Drawing::Color::Red;
				button8->BackColor = System::Drawing::Color::Green;
				button9->BackColor = System::Drawing::Color::Red;

				MessageBox::Show("IT IS A TIE", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_false();

				}



		}

										/*===== the end of function score====*/



		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		}

			  
										/*====WHAT EACH BUTTON DO\/====*/

	//BUTTON 1===========

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {		//if checker false -> displays "x" on the button
                                //if checker true -> displays "o" on the button

		label7->Text = "PlayerO turn...";		//to indicate the turn of each player
		label7->ForeColor = System::Drawing::Color::Green;		//change the color of the turn indicator


		label2->BackColor = System::Drawing::Color::DarkGreen;    //highlighte the player's name who is going to play
		label1->BackColor = System::Drawing::Color::NavajoWhite;		//remove the highlight on he other player


		button1->Text = "X";		//displays the "x" as a text on the button


		checker = true;			//changes the checker to make the next click on a button "o" (toggle betwen "x" and "o")
		button1->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button1->Text = "O";
		checker = false;
		button1->Enabled = false;
		}
		if (button1->Text == "X") {
			button1->ForeColor = System::Drawing::Color::Red;		//makes the color of the text "x" red
		}
		else {
			button1->ForeColor = System::Drawing::Color::Green;		//makes the color of the text "o" green
		}
	score();
	button1->Enabled;

}
	//BUTTON 2===========

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button2->Text = "X";
		checker = true;
		button2->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button2->Text = "O";
		checker = false;
		button2->Enabled = false;
	}
	if (button2->Text == "X") {
		button2->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button2->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button2->Enabled;

}
	//BUTTON 3===========

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button3->Text = "X";
		checker = true;
		button3->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button3->Text = "O";
		checker = false;
		button3->Enabled = false;
	}
	if (button3->Text == "X") {
		button3->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button3->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button3->Enabled;
}
	//BUTTON 4===========

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button4->Text = "X";
		checker = true;
		button4->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button4->Text = "O";
		checker = false;
		button4->Enabled = false;
	}
	if (button4->Text == "X") {
		button4->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button4->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button4->Enabled;
}
	//BUTTON 5===========

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button5->Text = "X";
		checker = true;
		button5->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button5->Text = "O";
		checker = false;
		button5->Enabled = false;
	}
	if (button5->Text == "X") {
		button5->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button5->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button5->Enabled;
}
	//BUTTON 6===========

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false) {
			label7->Text = "PlayerO turn...";
			label7->ForeColor = System::Drawing::Color::Green;
			label2->BackColor = System::Drawing::Color::DarkGreen;
			label1->BackColor = System::Drawing::Color::NavajoWhite;
			button6->Text = "X";
			checker = true;
			button6->Enabled = false;
		}
		else {
			label7->Text = "PlayerX turn...";
			label7->ForeColor = System::Drawing::Color::Red;
			label1->BackColor = System::Drawing::Color::Maroon;
			label2->BackColor = System::Drawing::Color::NavajoWhite;
			button6->Text = "O";
			checker = false;
			button6->Enabled = false;
		}
		if (button6->Text == "X") {
			button6->ForeColor = System::Drawing::Color::Red;
		}
		else {
			button6->ForeColor = System::Drawing::Color::Green;
		}
		score();
		button6->Enabled;
}
	//BUTTON 7===========

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button7->Text = "X";
		checker = true;
		button7->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button7->Text = "O";
		checker = false;
		button7->Enabled = false;
	}
	if (button7->Text == "X") {
		button7->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button7->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button7->Enabled;
}
	//BUTTON 8===========

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button8->Text = "X";
		checker = true;
		button8->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button8->Text = "O";
		checker = false;
		button8->Enabled = false;
	}
	if (button8->Text == "X") {
		button8->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button8->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button8->Enabled;
}
	//BUTTON 9===========

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	if (checker == false) {
		label7->Text = "PlayerO turn...";
		label7->ForeColor = System::Drawing::Color::Green;
		label2->BackColor = System::Drawing::Color::DarkGreen;
		label1->BackColor = System::Drawing::Color::NavajoWhite;
		button9->Text = "X";
		checker = true;
		button9->Enabled = false;
	}
	else {
		label7->Text = "PlayerX turn...";
		label7->ForeColor = System::Drawing::Color::Red;
		label1->BackColor = System::Drawing::Color::Maroon;
		label2->BackColor = System::Drawing::Color::NavajoWhite;
		button9->Text = "O";
		checker = false;
		button9->Enabled = false;
	}
	if (button9->Text == "X") {
		button9->ForeColor = System::Drawing::Color::Red;
	}
	else {
		button9->ForeColor = System::Drawing::Color::Green;
	}
	score();
	button9->Enabled;
}
	//RESET BUTTON===========

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;		//makes the buttons interactive again
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";		//removes the text("x" , "o") from all the buttons
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	button11->Enabled = true;

	button1->BackColor = System::Drawing::Color::BlanchedAlmond;		//return all the colors to normal
	button2->BackColor = System::Drawing::Color::BlanchedAlmond;
	button3->BackColor = System::Drawing::Color::BlanchedAlmond;
	button4->BackColor = System::Drawing::Color::BlanchedAlmond;
	button5->BackColor = System::Drawing::Color::BlanchedAlmond;
	button6->BackColor = System::Drawing::Color::BlanchedAlmond;
	button7->BackColor = System::Drawing::Color::BlanchedAlmond;
	button8->BackColor = System::Drawing::Color::BlanchedAlmond;
	button9->BackColor = System::Drawing::Color::BlanchedAlmond;

}
	//NEW GAME BUTTON===========

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	label3->Text = "0";   //resets the scores to zero

	label4->Text = "0";

	button1->BackColor = System::Drawing::Color::BlanchedAlmond;
	button2->BackColor = System::Drawing::Color::BlanchedAlmond;
	button3->BackColor = System::Drawing::Color::BlanchedAlmond;
	button4->BackColor = System::Drawing::Color::BlanchedAlmond;
	button5->BackColor = System::Drawing::Color::BlanchedAlmond;
	button6->BackColor = System::Drawing::Color::BlanchedAlmond;
	button7->BackColor = System::Drawing::Color::BlanchedAlmond;
	button8->BackColor = System::Drawing::Color::BlanchedAlmond;
	button9->BackColor = System::Drawing::Color::BlanchedAlmond;
}
};
}
