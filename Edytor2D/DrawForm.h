#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Podsumowanie informacji o DrawForm
	/// </summary>
	public ref class DrawForm : public System::Windows::Forms::Form
	{

	public:

		DrawForm(void){
			InitializeComponent();

			brush = gcnew SolidBrush(Color::Black);
			brushSize = 12;
			pen = gcnew Pen(Color::Black);
			pen->Width = brushSize;
			point = Point(0, 0);

			eraser = gcnew Pen(Color::Red);
			eraser->Width = brushSize;

			
				
			pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			gfx = Graphics::FromImage(pictureBox1->Image);	
			
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~DrawForm()
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
		Graphics ^ gfx;
		Point point;
		Pen ^ pen;
		Brush ^ brush;
		Pen ^ eraser;
		bool isBrush = false;
		bool isPen = false;
		bool isEraser = false;
		int brushSize;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DrawForm::typeid));
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
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(120, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L" ";
			this->label1->Click += gcnew System::EventHandler(this, &DrawForm::label1_Click);
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
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(940, 528);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &DrawForm::onDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &DrawForm::onMove);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(692, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DrawForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(936, 7);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 32);
			this->button3->TabIndex = 5;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DrawForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(900, 7);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 32);
			this->button4->TabIndex = 6;
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &DrawForm::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"2", L"4", L"6", L"8", L"10", L"12", L"14", L"16",
					L"18", L"20", L"22"
			});
			this->comboBox1->Location = System::Drawing::Point(773, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DrawForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(25, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"COLOR:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(611, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"SAVE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DrawForm::button1_Click_1);
			// 
			// DrawForm
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DrawForm";
			this->Text = L"Drawing";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void onDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		point = e->Location;
	}

	private: System::Void onMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isPen || isBrush || isEraser) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				if (isBrush)
					gfx->DrawLine(pen, point, e->Location);
				else if (isPen)
					gfx->FillEllipse(brush, e->X, e->Y, brushSize, brushSize);
				else if (isEraser)
					gfx->DrawLine(eraser, point, e->Location);

				point = e->Location;

				pictureBox1->Refresh();
			}
		}
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		gfx->Clear(Color::Transparent);
		pictureBox1->Refresh();
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult res;
		res = colorDialog1->ShowDialog();

		if (res == Windows::Forms::DialogResult::OK) {
				pen->Color = colorDialog1->Color;
				brush = gcnew SolidBrush(colorDialog1->Color);
				label1->BackColor = colorDialog1->Color;
		}
		
	
	}
		  //brush icon
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		isBrush = true;
		isPen = false;
		isEraser = false;
}
		 //pen icon
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		isPen = true;
		isBrush = false;
		isEraser = false;
}	
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		switch (comboBox1->SelectedIndex) {
			case 0:
				brushSize = 2;
				break;
			case 1:
				brushSize = 4;
				break;
			case 2:
				brushSize = 6;
				break;
			case 3:
				brushSize = 8;
				break;
			case 4:
				brushSize = 10;
				break;
			case 5:
				brushSize = 12;
				break;
			case 6:
				brushSize = 14;
				break;
			case 7:
				brushSize = 16;
				break;
			case 8:
				brushSize = 18;
				break;
			case 9:
				brushSize = 20;
				break;
			case 10:
				brushSize = 22;
				break;
		}
			pen->Width = brushSize;
			eraser->Width = brushSize;
}
	//eraser
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		isPen = false;
		isBrush = false;
		isEraser = true;
	}

			 //save and send to main window
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
