#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// Podsumowanie informacji o wyostrz
	/// </summary>
	public ref class wyostrz : public System::Windows::Forms::Form
	{
	public:
		Bitmap ^ test;
		wyostrz(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	public:
		wyostrz(Bitmap^ do_obrobki)
		{
			InitializeComponent();
			test = do_obrobki;

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~wyostrz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Promieñ";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(195, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"1,0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// trackBar1
			// 
			this->trackBar1->AutoSize = false;
			this->trackBar1->BackColor = System::Drawing::SystemColors::Control;
			this->trackBar1->LargeChange = 10;
			this->trackBar1->Location = System::Drawing::Point(12, 80);
			this->trackBar1->Maximum = 200;
			this->trackBar1->Minimum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(465, 45);
			this->trackBar1->SmallChange = 10;
			this->trackBar1->TabIndex = 10;
			this->trackBar1->TickFrequency = 10;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBar1->Value = 100;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &wyostrz::trackBar1_Scroll);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(402, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"ZatwierdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &wyostrz::button1_Click);
			// 
			// wyostrz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 192);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"wyostrz";
			this->ShowIcon = false;
			this->Text = L"Wyostrzanie";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int Size = 3;
	float mnoznik = 0.5;
	int r_tab = 9;
	//const int USUN_SREDNIA[9] = { -1,-1,-1,-1, 9, -1,-1, -1, -1 };

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Color^ kol;
		//USUN_SREDNIA = [ -1,-1,-1,-1, 9, -1,-1, -1, -1 ];
		int *USUN_SREDNIA = (int*)malloc(r_tab * sizeof(int));
		USUN_SREDNIA[0] = -1 * mnoznik;
		USUN_SREDNIA[1] = -1 * mnoznik;
		USUN_SREDNIA[2] = -1 * mnoznik;
		USUN_SREDNIA[3] = -1 * mnoznik;
		USUN_SREDNIA[4] = 9 * mnoznik;
		USUN_SREDNIA[5] = -1 * mnoznik;
		USUN_SREDNIA[6] = -1 * mnoznik;
		USUN_SREDNIA[7] = -1 * mnoznik;
		USUN_SREDNIA[8] = -1 * mnoznik;

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

		//gf

		int* Filter =USUN_SREDNIA;

		//for (int i = 0; i<size; i++)
			//for (int j = 0; j<size; j++)
				//Form1->StringGrid1->Cells[j][i] = IntToStr(Filter[i + size * j]);

		int Norm = 0;
		for (int i = 0; i<Size; i++)
			for (int j = 0; j<Size; j++)
				Norm += Filter[i + Size * j];
		if (Norm == 0) Norm = 1;
		int rsume, gsume, bsume;
		int margin = ((Size - 1) / 2);
		margin = 1;

		//filtr dla obrazu kolorowego
		for (int i = 0; i<test->Width; i++)
			for (int j = 0; j<test->Height; j++)
			{
				rsume = 0;
				gsume = 0;
				bsume = 0;
				for (int k = 0; k<Size; k++)
					for (int l = 0; l<Size; l++)
					{

						int lewakomora = i + k;//szer w
						int prawakomora = j + l;//wys h

						if (prawakomora >= test->Height)
						{
							prawakomora = test->Height - margin;
						}

						if (lewakomora >= test->Width)
						{
							lewakomora = test->Width - margin;
						}

						rsume += Filter[k * 3 + l] * red_T[lewakomora][prawakomora];
						gsume += Filter[k * 3 + l] * green_T[lewakomora][prawakomora];
						bsume += Filter[k * 3 + l] * blue_T[lewakomora][prawakomora];
					}
				rsume /= Norm;
				gsume /= Norm;
				bsume /= Norm;

				if (rsume > 255) rsume = 255;
				else if (rsume < 0) rsume = 0;
				if (gsume > 255) gsume = 255;
				else if (gsume < 0) gsume = 0;
				if (bsume > 255) bsume = 255;
				else if (bsume < 0) bsume = 0;

				//WynikKolorowy->Canvas->Pixels[i][j] = (TColor)rsume + (gsume << 8) + (bsume << 16);
				
				Color kol_wynikowy;
				kol_wynikowy = Color::FromArgb(rsume,gsume,bsume);
				test->SetPixel(i, j, kol_wynikowy);
			}
		delete[] red_T;
		delete[] green_T;
		delete[] blue_T;
		delete[] USUN_SREDNIA;
		this->Close();
	}
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

		textBox1->Text = System::Convert::ToString(trackBar1->Value);
		if (trackBar1->Value % 10 != 0)
		{
			float war = trackBar1->Value / 10;
			war = round(war);
			war *= 10;
			trackBar1->Value = war;
		}
		
		textBox1->Text = System::Convert::ToString((float)trackBar1->Value/100);
		mnoznik = trackBar1->Value/100;
}
};
}
