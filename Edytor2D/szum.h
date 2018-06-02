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
			// szum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(489, 192);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"szum";
			this->ShowIcon = false;
			this->Text = L"Korekcja szumu";
			this->ResumeLayout(false);
	

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

		int  m;
		int *rval, *gval, *bval;
		rval = (int*)malloc(Size*Size * sizeof(int));
		gval = (int*)malloc(Size*Size * sizeof(int));
		bval = (int*)malloc(Size*Size * sizeof(int));
		int margin = ((Size - 1) / 2);

		for (int i = margin; i<test->Width - margin; i++)
			for (int j = margin; j<test->Height - margin; j++)
			{
				m = 0;
				for (int k = 0; k<Size; k++)
					for (int l = 0; l<Size; l++)
					{
						rval[m] = red_T[i + k - margin][j + l - margin];
						gval[m] = green_T[i + k - margin][j + l - margin];
						bval[m] = blue_T[i + k - margin][j + l - margin];
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
	};
}
