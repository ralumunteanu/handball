#pragma once

namespace Raluca_proiect {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(461, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Adauga Echipa";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numele echipei";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Jucator 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 183);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Jucator 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(35, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Jucator 3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(35, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Jucator 4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(35, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Jucator 5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(35, 335);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Jucator 6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(35, 372);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Jucator 7";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(35, 410);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Jucator 8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(35, 449);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 20);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Jucator 9";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(35, 483);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 20);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Jucator 10";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(222, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 225);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(222, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 262);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(222, 20);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(158, 298);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(222, 20);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(158, 335);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(222, 20);
			this->textBox7->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(158, 372);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(222, 20);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(158, 412);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(222, 20);
			this->textBox9->TabIndex = 20;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(158, 449);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(222, 20);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(158, 483);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(222, 20);
			this->textBox11->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(492, 527);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Adauga";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(407, 140);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(98, 20);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Anul Nasterii";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(407, 185);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 20);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Anul Nasterii";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(407, 262);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(98, 20);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Anul Nasterii";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(407, 223);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(98, 20);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Anul Nasterii";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(407, 337);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(98, 20);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Anul Nasterii";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(407, 298);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 20);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Anul Nasterii";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(407, 411);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(98, 20);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Anul Nasterii";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(407, 372);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(98, 20);
			this->label20->TabIndex = 30;
			this->label20->Text = L"Anul Nasterii";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(407, 486);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(98, 20);
			this->label21->TabIndex = 33;
			this->label21->Text = L"Anul Nasterii";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(407, 447);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(98, 20);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Anul Nasterii";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(520, 140);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(141, 20);
			this->textBox12->TabIndex = 34;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(520, 187);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(141, 20);
			this->textBox13->TabIndex = 35;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(520, 223);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(141, 20);
			this->textBox14->TabIndex = 36;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(520, 260);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(141, 20);
			this->textBox15->TabIndex = 37;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(520, 298);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(141, 20);
			this->textBox16->TabIndex = 38;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(520, 335);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(141, 20);
			this->textBox17->TabIndex = 39;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(520, 374);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(141, 20);
			this->textBox18->TabIndex = 40;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(520, 411);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(141, 20);
			this->textBox19->TabIndex = 41;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(520, 447);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(141, 20);
			this->textBox20->TabIndex = 42;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(520, 483);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(141, 20);
			this->textBox21->TabIndex = 43;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox21_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(699, 141);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(99, 20);
			this->label23->TabIndex = 44;
			this->label23->Text = L"Numar tricou";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(699, 187);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(99, 20);
			this->label24->TabIndex = 45;
			this->label24->Text = L"Numar tricou";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(699, 262);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(99, 20);
			this->label25->TabIndex = 47;
			this->label25->Text = L"Numar tricou";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(699, 225);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(99, 20);
			this->label26->TabIndex = 46;
			this->label26->Text = L"Numar tricou";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(699, 335);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(99, 20);
			this->label27->TabIndex = 49;
			this->label27->Text = L"Numar tricou";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(699, 298);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(99, 20);
			this->label28->TabIndex = 48;
			this->label28->Text = L"Numar tricou";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(699, 411);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(99, 20);
			this->label29->TabIndex = 51;
			this->label29->Text = L"Numar tricou";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(699, 374);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(99, 20);
			this->label30->TabIndex = 50;
			this->label30->Text = L"Numar tricou";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(699, 482);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(99, 20);
			this->label31->TabIndex = 53;
			this->label31->Text = L"Numar tricou";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(699, 445);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(99, 20);
			this->label32->TabIndex = 52;
			this->label32->Text = L"Numar tricou";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(813, 140);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(141, 20);
			this->textBox22->TabIndex = 54;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(813, 187);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(141, 20);
			this->textBox23->TabIndex = 55;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(813, 227);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(141, 20);
			this->textBox24->TabIndex = 56;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(813, 264);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(141, 20);
			this->textBox25->TabIndex = 57;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(813, 300);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(141, 20);
			this->textBox26->TabIndex = 58;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(813, 337);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(141, 20);
			this->textBox27->TabIndex = 59;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(813, 374);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(141, 20);
			this->textBox28->TabIndex = 60;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(813, 413);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(141, 20);
			this->textBox29->TabIndex = 61;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(813, 445);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(141, 20);
			this->textBox30->TabIndex = 62;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(813, 482);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(141, 20);
			this->textBox31->TabIndex = 63;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 562);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox21_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
