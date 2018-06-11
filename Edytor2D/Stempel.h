#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing::Imaging;

	/// <summary>
	/// Podsumowanie informacji o DrawForm
	/// </summary>

	enum Tool { STEMPEL_COPY, STEMPEL_PASTE };

	public ref class Stempel : public System::Windows::Forms::Form
	{

	public:
		Bitmap ^ Clone(
			Rectangle rect,
			PixelFormat format
		);


	public:

		Stempel(Image^ img) {
			InitializeComponent();

			pen = gcnew Pen(Color::Black);
			point = Point(0, 0);
			image = gcnew Bitmap(img);
			returnedImage = image;
			pictureBox1->Image = gcnew Bitmap(image);
			gfx = Graphics::FromImage(pictureBox1->Image);


		}

		System::Drawing::Image ^ getImage() {
			return returnedImage;
		}
		void setTool(Tool t) {
			switch (t) {
			case STEMPEL_COPY:
				actualTool = STEMPEL_COPY;
				break;
			case STEMPEL_PASTE:
				actualTool = STEMPEL_PASTE;
				break;
			}
		}

		int getTool() {
			return actualTool;
		}

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
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:

		Image ^ image;
		Image ^ returnedImage;
		Bitmap ^ bitmap;
		Pen ^ pen;
		Graphics ^ gfx;
		Stempel ^ stempel;
		Point point;
		bool isStempel = false;
		int actualTool = -1;
	private: System::Windows::Forms::Button^  buttonCopy;
	private: System::Windows::Forms::Button^  buttonPaste;
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
				 this->buttonCopy = (gcnew System::Windows::Forms::Button());
				 this->buttonPaste = (gcnew System::Windows::Forms::Button());
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
				 this->pictureBox1->BackColor = System::Drawing::Color::White;
				 this->pictureBox1->Location = System::Drawing::Point(-1, -1);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(940, 528);
				 this->pictureBox1->TabIndex = 4;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Stempel::onDown);
				 this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Stempel::onMove);
				 // 
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
				 // buttonCopy
				 // 
				 this->buttonCopy->Location = System::Drawing::Point(150, 15);
				 this->buttonCopy->Name = L"buttonCopy";
				 this->buttonCopy->Size = System::Drawing::Size(75, 23);
				 this->buttonCopy->TabIndex = 4;
				 this->buttonCopy->Text = L"COPY";
				 this->buttonCopy->Click += gcnew System::EventHandler(this, &Stempel::buttonCopy_Click);
				 // 
				 // buttonPaste
				 // 
				 this->buttonPaste->Location = System::Drawing::Point(160, 15);
				 this->buttonPaste->Name = L"buttonPaste";
				 this->buttonPaste->Size = System::Drawing::Size(75, 23);
				 this->buttonPaste->TabIndex = 4;
				 this->buttonPaste->Text = L"PASTE";
				 this->buttonPaste->Click += gcnew System::EventHandler(this, &Stempel::buttonPaste_Click);
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
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"50x50", L"100x100", L"150x150", L"200x200" });
				 this->comboBox1->Location = System::Drawing::Point(283, 15);
				 this->comboBox1->Name = L"comboBox1";
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
	private: System::Void onDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		point = e->Location;
	}

	private: System::Void onMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (actualTool > -1) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {

				if (actualTool == STEMPEL_COPY)

					Rectangle cloneRect = Rectangle(e->Location, 100, 100);
				System::Drawing::Imaging::PixelFormat format = image->PixelFormat;
				Bitmap^ cloneBitmap = Clone(cloneRect, format);


				if (actualTool == STEMPEL_PASTE)
					gfx->DrawImage(cloneBitmap, e->Location);

				point = e->Location;



				pictureBox1->Refresh();

			}
		}

	}
	private: System::Void buttonCopy_Click(System::Object^  sender, System::EventArgs^  e) {

		setTool(STEMPEL_COPY);

	}
	private: System::Void buttonPaste_Click(System::Object^  sender, System::EventArgs^  e) {

		setTool(STEMPEL_PASTE);

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

			break;
		}
	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		returnedImage = pictureBox1->Image;
		this->Close();
	}
	};
}
