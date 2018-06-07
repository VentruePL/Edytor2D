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

			brushSize = 2;
			pen = gcnew Pen(Color::Black);
			//gfx->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			gfx = Graphics::FromImage(pictureBox1->Image);
			//g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			//g->CompositingQuality = System::Drawing::Drawing2D::CompositingQuality::HighQuality;
			//g->InterpolationMode = System::Drawing::Drawing2D::InterpolationMode::HighQualityBicubic;
			point = Point(0, 0);
			pen->Width = brushSize;
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
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		int brushSize;
		Graphics ^ gfx;
		Point point;
		Pen ^ pen;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"COLOR";
			this->button1->UseVisualStyleBackColor = true;
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
			this->button2->Location = System::Drawing::Point(355, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DrawForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"2", L"4", L"6", L"8", L"10", L"12", L"14", L"16",
					L"18", L"20", L"22"
			});
			this->comboBox1->Location = System::Drawing::Point(215, 15);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DrawForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(111, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L" ";
			// 
			// DrawForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 577);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"DrawForm";
			this->Text = L"DrawForm";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void onDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		point = e->Location;
	}

	private: System::Void onMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			gfx->DrawLine(pen, point, e->Location);
	
			//gfx->DrawLine(pen, point, e->Location);
			//gfx->FillEllipse(brush, e->X, e->Y, 5, 5);
			point = e->Location;
			
			pictureBox1->Refresh();
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		gfx->Clear(Color::Transparent);
		pictureBox1->Refresh();
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
}
};
}
