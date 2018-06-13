#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o tekst
	/// </summary>
	public ref class tekst : public System::Windows::Forms::Form
	{
	public:

	public:
		tekst(void)
		{
			InitializeComponent();	
			textSize = 10;
			textFont = "Time New Roman";
		}
		
		


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~tekst()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;

	private:

		float textSize;
		String ^ textFont;
private: System::Windows::Forms::ComboBox^  comboBox2;
private: System::Windows::Forms::Label^  label2;

		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(tekst::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Dodaj";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(515, 230);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"2", L"4", L"6", L"8", L"10", L"12", L"14", L"16",
					L"18", L"20", L"22"
			});
			this->comboBox1->Location = System::Drawing::Point(541, 83);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(69, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &tekst::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(541, 14);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(38, 40);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &tekst::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(603, 15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 40);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &tekst::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(664, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(38, 40);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &tekst::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 13, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(537, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Rozmiar czcionki:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Arial", L"Broadway", L"Comic Sans MS", L"Elephant",
					L"Courier New", L"Ravie", L"Verdana"
			});
			this->comboBox2->Location = System::Drawing::Point(541, 143);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 21);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &tekst::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(538, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Czcionka:";
			// 
			// tekst
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 321);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Name = L"tekst";
			this->Text = L"tekst";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		switch (comboBox1->SelectedIndex) {
		case 0:
			textSize = 2;
			break;
		case 1:
			textSize = 4;
			break;
		case 2:
			textSize = 6;
			break;
		case 3:
			textSize = 8;
			break;
		case 4:
			textSize = 10;
			break;
		case 5:
			textSize = 12;
			break;
		case 6:
			textSize = 14;
			break;
		case 7:
			textSize = 16;
			break;
		case 8:
			textSize = 18;
			break;
		case 9:
			textSize = 20;
			break;
		case 10:
			textSize = 22;
			break;

		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Font = (gcnew System::Drawing::Font(textFont, textSize, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(textFont, textSize, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Font = (gcnew System::Drawing::Font(textFont, textSize, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch (comboBox2->SelectedIndex) {
	case 0:
		textFont = (L"Arial");
		break;
	case 1:
		textFont = (L"Broadway");
		break;
	case 2:
		textFont = (L"Comic Sans MS");
		break;
	case 3:
		textFont = (L"Elephant");
		break;
	case 4:
		textFont = (L"Courier New");
		break;
	case 5:
		textFont = (L"Ravie");
		break;
	case 6:
		textFont = (L"Verdana");
		break;

	}
}
};
}
