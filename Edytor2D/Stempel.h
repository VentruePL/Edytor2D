#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;





	/// <summary>
	/// Podsumowanie informacji o DrawForm
	/// </summary>



	public ref class Stempel : public System::Windows::Forms::Form
	{



	public:
		Point p1, p2;
		Stempel(Image^ img) {
			InitializeComponent();


			stempelSize = 50;
			pen = gcnew Pen(Color::Black, 2);
			point = Point(0, 0);
			pen->Width = 4;

			image = gcnew Bitmap(img);
			returnedImage = image;
			pictureBox1->Image = gcnew Bitmap(image);
			gfx = Graphics::FromImage(pictureBox1->Image);





		}

		void setstempelSize(int newSize) {
			stempelSize = newSize;
		}
		int getstempelSize() {
			return stempelSize;
		}

	public:
		Bitmap ^ Clone1;

		Bitmap ^ dst;




		System::Drawing::Image ^ getImage() {
			return returnedImage;
		}


		//HCURSOR hCursor = DrawRectangle(p1.Y,p2.Y,stempelSize,stempelSize);
		//SetCursor(hCursor);


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Stempel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:

		Image ^ image;
		Image ^ returnedImage;
		Bitmap ^ bitmap;
		Pen ^ pen;
		Brush ^ brush;
		Graphics ^ gfx;
		Stempel ^ stempel;
		Point point;
		bool isStempel = true;
		int actualTool = -1;
		int stempelSize;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;







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
				 this->panel2 = (gcnew System::Windows::Forms::Panel());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->panel2->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->Location = System::Drawing::Point(0, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(100, 23);
				 this->label1->TabIndex = 14;
				 // 
				 // panel2
				 // 
				 this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->panel2->Controls->Add(this->pictureBox1);
				 this->panel2->Location = System::Drawing::Point(30, 42);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(940, 528);
				 this->panel2->TabIndex = 3;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(0, 0);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(940, 528);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				 this->pictureBox1->TabIndex = 0;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Stempel::onDown);
				 this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Stempel::onMove);
				 this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Stempel::pictureBox1_MouseUp);
				 // /
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(125, 15);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 4;
				 this->button2->Text = L"CLEAR";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Stempel::button2_Click);
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(0, 0);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(75, 23);
				 this->button3->TabIndex = 13;
				 // 
				 // button4
				 // 
				 this->button4->Location = System::Drawing::Point(0, 0);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(75, 23);
				 this->button4->TabIndex = 12;
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"50x50", L"100x100", L"150x150" });
				 this->comboBox1->Location = System::Drawing::Point(420, 17);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Text = L"Size";
				 this->comboBox1->Size = System::Drawing::Size(121, 21);
				 this->comboBox1->TabIndex = 11;
				 this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Stempel::comboBox1_SelectedIndexChanged);
				 // 
				 // label2
				 // 
				 this->label2->Location = System::Drawing::Point(0, 0);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(100, 23);
				 this->label2->TabIndex = 10;
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(44, 15);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(75, 23);
				 this->button1->TabIndex = 9;
				 this->button1->Text = L"SAVE";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &Stempel::button1_Click_1);
				 // 
				 // Stempel
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(999, 577);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->comboBox1);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->panel2);
				 this->Controls->Add(this->label1);
				 this->Name = L"Stempel";
				 this->Text = L"Stempel";
				 this->panel2->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);

			 }
#pragma endregion
	private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		// gfx->DrawRectangle(pen, p1.X, p1.Y, 50, 50);
		// point = e->Location;
		// pictureBox1->Refresh();
	}
	private: System::Void onDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		p1.X = e->X;
		p1.Y = e->Y;
		point = e->Location;

		if (e->Button == System::Windows::Forms::MouseButtons::Left) {


			Bitmap^ bit = gcnew Bitmap(image);
			//	gfx->DrawRectangle(pen, p1.X, p1.Y, stempelSize, stempelSize);
			dst = gcnew Bitmap(50, 50);
			Clone1 = gcnew Bitmap(50, 50);
			System::Drawing::Rectangle cloneRect = System::Drawing::Rectangle(p1.X, p1.Y, stempelSize, stempelSize);
			System::Drawing::Imaging::PixelFormat format = bit->PixelFormat;
			Clone1 = bit->Clone(cloneRect, format);

			point = e->Location;
			pictureBox1->Refresh();
		}

		if (e->Button == System::Windows::Forms::MouseButtons::Right) {

			gfx->DrawImage(Clone1, e->Location);
			point = e->Location;
			pictureBox1->Refresh();
		}

	}

	private: System::Void onMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		gfx->Clear(Color::Transparent);
		pictureBox1->Image = gcnew Bitmap(image);
		gfx = Graphics::FromImage(pictureBox1->Image);
		pictureBox1->Refresh();
	}




	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		switch (comboBox1->SelectedIndex) {
		case 0:
			setstempelSize(50);
			break;
		case 1:
			setstempelSize(100);
			break;
		case 2:
			setstempelSize(150);
			break;
		}
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		returnedImage = pictureBox1->Image;
		this->Close();
	}
	};
}
