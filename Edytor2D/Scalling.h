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
	/// Summary for Scalling
	/// </summary>
	public ref class Scalling : public System::Windows::Forms::Form
	{
	public:
		Bitmap ^ test;
		Bitmap ^ dst;
		int szer, wys;
		Scalling(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Scalling(Bitmap^ do_obrobki)
		{
			test = do_obrobki;
			szer = test->Width;
			wys = test->Height;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Scalling()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(127, 103);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gotowe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Scalling::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(127, 27);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Scalling::textBox1_TextChanged);
			this->textBox1->Text = test->Width.ToString();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(22, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Szerokoœæ: ";
			this->label1->Click += gcnew System::EventHandler(this, &Scalling::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(24, 61);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Wysokoœæ: ";
			this->label2->Click += gcnew System::EventHandler(this, &Scalling::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(127, 63);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Scalling::textBox2_TextChanged);
			this->textBox2->Text = test->Height.ToString();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(247, 27);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			this->label3->Click += gcnew System::EventHandler(this, &Scalling::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(247, 66);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(251, 24);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"piksele";
			this->label5->Click += gcnew System::EventHandler(this, &Scalling::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(251, 62);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"piksele";
			// 
			// Scalling
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 174);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Scalling";
			this->ShowIcon = false;
			this->Text = L"Skalowanie";
			this->Load += gcnew System::EventHandler(this, &Scalling::Scalling_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

unsigned char **red_T, **green_T, **blue_T;

float Inter(float f1, float f2, float f3, float d)
{
	float result;
	result = (f2 + (f3 - f1)*d + (f1 - 2 * f2 + f3)*d*d);
	return result;
}

float InterNorm(float f1, float f2, float f3, float d)
{
	float result;
	result = (f2 + (f3 - f1)*d + (f1 - 2 * f2 + f3)*d*d);

	if (result > 255) return 255;
	if (result < 0) return 0;
	return result;
}

Color Biquadratic_Inter(float x, float y)
{
	int x0, y0, x1, y1, x2, y2;
	float dx, dy;
	int r, g, b;
	Color result;

	x1 = x;  //floor
	y1 = y;  //floor
	dx = (x - x1)*0.5;
	dy = (y - y1)*0.5;
	if (x1 - 1 >= 0)
		x0 = x1 - 1;
	else
		x0 = x1;
	if (y1 - 1 >= 0)
		y0 = y1 - 1;
	else
		y0 = y1;
	if (x1 + 1 >= szer)
		x2 = x1;
	else
		x2 = x1 + 1;
	if (y1 + 1 >= szer)
		y2 = y1;
	else
		y2 = y1 + 1;

	
	r = (InterNorm(Inter(red_T[x0][y0], red_T[x1][y0], red_T[x2][y0], dx),
		Inter(red_T[x0][y1], red_T[x1][y1], red_T[x2][y1], dx),
		Inter(red_T[x0][y2], red_T[x1][y2], red_T[x2][y2], dx), dy));
	g = (InterNorm(Inter(green_T[x0][y0], green_T[x1][y0], green_T[x2][y0], dx),
		Inter(green_T[x0][y1], green_T[x1][y1], green_T[x2][y1], dx),
		Inter(green_T[x0][y2], green_T[x1][y2], green_T[x2][y2], dx), dy));
	b = (InterNorm(Inter(blue_T[x0][y0], blue_T[x1][y0], blue_T[x2][y0], dx),
		Inter(blue_T[x0][y1], blue_T[x1][y1], blue_T[x2][y1], dx),
		Inter(blue_T[x0][y2], blue_T[x1][y2], blue_T[x2][y2], dx), dy));
	
	result=Color::FromArgb(r, g, b);
	return result;
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Color^ kol;
	float ratiox, ratioy;

	red_T = (unsigned char**)malloc(szer * sizeof(char*));
	green_T = (unsigned char**)malloc(szer * sizeof(char*));
	blue_T = (unsigned char**)malloc(szer * sizeof(char*));

	for (int i = 0; i<szer; i++)
	{
		red_T[i] = (unsigned char*)malloc(wys);
		green_T[i] = (unsigned char*)malloc(wys);
		blue_T[i] = (unsigned char*)malloc(wys);
		for (int j = 0; j<wys; j++)
		{
			kol = test->GetPixel(i, j);
			red_T[i][j] = kol->R;
			green_T[i][j] = kol->G;
			blue_T[i][j] = kol->B;
		}
	}

	dst = gcnew Bitmap(System::Convert::ToInt16(textBox1->Text), System::Convert::ToInt16(textBox2->Text));
	ratiox = (test->Width*1.0) / (dst->Width*1.0);
	ratioy = (test->Height*1.0) / (dst->Height*1.0);
	Graphics^ gfx = Graphics::FromImage(dst);
	SolidBrush^ blueBrush = gcnew SolidBrush(Color::Black);
	gfx->FillRectangle(blueBrush, 0, 0, dst->Width, dst->Height);
	

	for (int i = 0; i<dst->Height; i++)
	{
		
		for (int j = 0; j<dst->Width; j++)
		{
	
			dst->SetPixel(j, i, Biquadratic_Inter(j*ratiox, i*ratioy));
		}
	}
	test = dst;
	szer = dst->Width;
	wys = dst->Height;
	delete[] red_T;
	delete[] green_T;
	delete[] blue_T;
	this->Close();

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {\
	
}
private: System::Void Scalling_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
