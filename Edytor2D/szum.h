#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Podsumowanie informacji o szum
	/// </summary>
	//public delegate void DataSentHandler(Bitmap^ msg);

	public ref class szum : public System::Windows::Forms::Form
	{
	public:
		Bitmap^ test;
		//event DataSentHandler ^DataSent;
		szum(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	public:
		szum(Bitmap^ do_obrobki)
		{
			InitializeComponent();
			test =do_obrobki;
			//this->test = gcnew Bitmap(do_obrobki);
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~szum()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	protected:

	private:
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(402, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ZatwierdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &szum::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Promieñ";
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->BackColor = System::Drawing::SystemColors::Control;
			this->trackBar1->LargeChange = 2;
			this->trackBar1->Location = System::Drawing::Point(12, 80);
			this->trackBar1->Maximum = 11;
			this->trackBar1->Minimum = 3;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(465, 45);
			this->trackBar1->SmallChange = 2;
			this->trackBar1->TabIndex = 5;
			this->trackBar1->TickFrequency = 2;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBar1->Value = 3;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &szum::trackBar1_Scroll);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(195, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"3";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// szum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 192);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"szum";
			this->ShowIcon = false;
			this->Text = L"Korekcja szumu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	int Size = 3;
	
	int partition(int *c, int a, int b)
	{
		int e, tmp;
		a = a;
		b = b;
		e = c[a];
		while (a<b)
		{
			while ((a<b) && (c[b] >= e)) b--;
			while ((a<b) && (c[a]<e)) a++;
			if (a<b)
			{
				tmp = c[a];
				c[a] = c[b];
				c[b] = tmp;
			}
		}
		return a;
	}

	int med(int *c, int size)
	{
		//algorytm Hoare'a
		int i = 0;
		int j = size - 1;
		int w = j / 2;
		int k;
		while (i != j)
		{
			k = partition(c, i, j);
			k = k - i + 1;
			if (k >= w)
				j = i + k - 1;
			if (k<w)
			{
				w -= k;
				i += k;
			}
		}
		return c[i];
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Color^ kol;

		unsigned char **red_T, **green_T, **blue_T;

		red_T = (unsigned char**)malloc(test->Width * sizeof(char*));
		green_T = (unsigned char**)malloc(test->Width * sizeof(char*));
		blue_T = (unsigned char**)malloc(test->Width * sizeof(char*));

		for (int i = 0; i<test->Width; i++)
		{
			red_T[i] = (unsigned char*)malloc(test->Height);
			green_T[i] = (unsigned char*)malloc(test->Height);
			blue_T[i] = (unsigned char*)malloc(test->Height);
			for (int j = 0; j<test->Height; j++)
			{
				kol = test->GetPixel(i, j);
				red_T[i][j] = kol->R;
				green_T[i][j] = kol->G;
				blue_T[i][j] = kol->B;
			}
		}
		//std::cout << Size << std::endl;
		int  m;
		int *rval, *gval, *bval;
		rval = (int*)malloc((Size*Size *Size) * sizeof(int));
		gval = (int*)malloc((Size*Size * Size) * sizeof(int));
		bval = (int*)malloc((Size*Size * Size) * sizeof(int));
		int margin = ((Size - 1) / 2);
		margin = 1;

		//std::cout << margin << std::endl;
		for (int i = 0; i<test->Width; i++)//od margin do width minus margin
			for (int j = 0; j<test->Height; j++)//od margin do height minus margin
			{
				m = 0;
				for (int k = 0; k<Size; k++)
					for (int l = 0; l<Size; l++)
					{
						int lewakomora = i + k;//szer w
						int prawakomora = j + l;//wys h
						//std::cout << lewakomora << " " << prawakomora << std::endl;

						if (prawakomora >= test->Height)
						{
							prawakomora = test->Height - margin;
						}

						if (lewakomora >= test->Width)
						{
							lewakomora = test->Width - margin;
						}

						rval[m] = red_T[lewakomora][prawakomora];
						gval[m] = green_T[lewakomora][prawakomora];
						bval[m] = blue_T[lewakomora][prawakomora];
						m++;
					}

				Color kol_wynikowy;
				kol_wynikowy = Color::FromArgb(med(rval, Size*Size), med(gval, Size*Size), med(bval, Size*Size));
				test->SetPixel(i, j, kol_wynikowy);

			}
		

		//this->DataSent(test);

		delete[] red_T;
		delete[] green_T;
		delete[] blue_T;
		delete[] rval;
		delete[] gval;
		delete[] bval;
		this->Close();
	}
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

		if (trackBar1->Value % 2 == 0)
		{
			trackBar1->Value += 1;
		}
		textBox1->Text = System::Convert::ToString(trackBar1->Value);
		Size = trackBar1->Value;

	}
};
}
