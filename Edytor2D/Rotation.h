#pragma once
#include <iostream>
namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Rotation
	/// </summary>
	public ref class Rotation : public System::Windows::Forms::Form
	{
	public:
		Bitmap ^ test;
		int w;
		Rotation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Rotation(Bitmap^ do_obrobki)
		{
			test = do_obrobki;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Rotation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TrackBar^  trackBar1;

	protected:

	private:
		Bitmap ^ dst;

		int szer, wys;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
#define PI 3.14156
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(165, 188);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Obróæ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Rotation::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(98, 59);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"K¹t: ";
			this->label1->Click += gcnew System::EventHandler(this, &Rotation::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 59);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"90";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Rotation::textBox1_TextChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton1->Location = System::Drawing::Point(255, 45);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 22);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"° w prawo";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioButton2->Location = System::Drawing::Point(255, 70);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 22);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->Text = L"° w lewo";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(12, 129);
			this->trackBar1->Maximum = 360;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(385, 45);
			this->trackBar1->TabIndex = 6;
			this->trackBar1->TickFrequency = 36;
			this->trackBar1->Value = 90;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Rotation::trackBar1_Scroll);
			// 
			// Rotation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 230);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Rotation";
			this->ShowIcon = false;
			this->Text = L"Obrót";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Color kol;

		if (test->Width > test->Height)
		{
			w = test->Width;
		}
		else
		{
			w = test->Height;
		}

		int maxx = 0, maxy = 0, minx = 0, miny = 0;

		float angle = System::Convert::ToInt16(textBox1->Text) * PI / 180.0;

		if (radioButton1->Checked == true)
		{
			angle = angle * -1;
		}

		int przek;
		przek = sqrt((test->Width*test->Width) + (test->Height*test->Height));
		w = przek;

		dst = gcnew Bitmap(w, w);
		Graphics^ gfx = Graphics::FromImage(dst);
		Color alfa;
		alfa = Color::FromArgb(0, 0, 0, 0);
		SolidBrush^ blueBrush = gcnew SolidBrush(alfa);
		gfx->FillRectangle(blueBrush, 0, 0, w, w);



		//float najh= (test->Height * cos(angle) - test->Height * sin(angle))/angle;
		//float najw= (test->Width * cos(angle) + test->Width * sin(angle))/angle;

		for (int r = 1; r < test->Width - 1; r++)
		{

			for (int c = 1; c < test->Height - 1; c++)
			{

				float new_px = (c - test->Height / 2) * cos(angle) - (r - test->Width / 2) * sin(angle);
				float new_py = (c - test->Height / 2) * sin(angle) + (r - test->Width / 2) * cos(angle);

				kol = test->GetPixel(r, c);

				new_px = ((new_px * 2 + (dst->Height)) / 2);
				new_py = ((new_py * 2 + (dst->Width)) / 2);

				if (new_px >= 0 && new_py >= 0 && new_px + 2 <= dst->Width&&new_py + 2 <= dst->Height)
				{
					dst->SetPixel(new_py, new_px, test->GetPixel(r, c));
					dst->SetPixel(new_py, new_px + 1, test->GetPixel(r, c));
					dst->SetPixel(new_py + 1, new_px, test->GetPixel(r, c));
				}

			}

		}
		int lx, ly;
		lx = dst->Width;
		ly = dst->Height;
		//od przodu dodac od tylu tyle samo odjac
		for (int i = 1; i < dst->Width - 1; i++)
		{

			for (int j = 1; j < dst->Height - 1; j++)
			{
				Color sprawdzacz = dst->GetPixel(i, j);
				if (sprawdzacz != Color::FromArgb(0, 0, 0, 0))
				{
					if (lx > i)
					{
						lx = i;
					}
					if (ly > j)
					{
						ly = j;
					}
				}
			}
		}
		//System::Drawing::Rectangle tnij = System::Drawing::Rectangle(ly, lx, test->Height-100, test->Width-100);
		System::Drawing::Rectangle tnij = System::Drawing::Rectangle(lx, ly, dst->Width - lx * 2 - 1, dst->Height - ly * 2 - 1);
		std::cout << lx << " " << ly << std::endl;
		test = dst->Clone(tnij, dst->PixelFormat);

		//test = dst;


		this->Close();
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = System::Convert::ToString(trackBar1->Value);
	}
	};
}
