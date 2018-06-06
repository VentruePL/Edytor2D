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

		DrawForm(void) {
			InitializeComponent();

			pictureBox1->Image = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
			gfx = Graphics::FromImage(pictureBox1->Image);

			point = Point(0, 0);

			pen = gcnew Pen(Color::Black);
			pen->Width = 2;

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
		int x = 0;
		int y = 0;
		Graphics ^ gfx;
		Point point;
		Pen ^ pen;


	private: System::Windows::Forms::ColorDialog^  colorDialog1;




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
				 this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
				 this->panel2->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->BackColor = System::Drawing::Color::Black;
				 this->label1->Location = System::Drawing::Point(27, 9);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(30, 23);
				 this->label1->TabIndex = 2;
				 this->label1->Text = L" ";
				 // 
				 // panel2
				 // 
				 this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->panel2->Controls->Add(this->pictureBox1);
				 this->panel2->Location = System::Drawing::Point(30, 42);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(400, 300);
				 this->panel2->TabIndex = 3;
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->BackColor = System::Drawing::Color::White;
				 this->pictureBox1->Location = System::Drawing::Point(-1, -1);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(400, 300);
				 this->pictureBox1->TabIndex = 4;
				 this->pictureBox1->TabStop = false;
				 this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &DrawForm::onDown);
				 this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &DrawForm::onMove);
				 // 
				 // DrawForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(465, 365);
				 this->Controls->Add(this->panel2);
				 this->Controls->Add(this->label1);
				 this->Name = L"DrawForm";
				 this->Text = L"DrawForm";
				 this->panel2->ResumeLayout(false);
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);

			 }
#pragma endregion
	private: System::Void onDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		point = e->Location;
		//x = e->X;
		//y = e->Y;
	}

	private: System::Void onMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			gfx->DrawLine(pen, point, e->Location);
			point = e->Location;

			pictureBox1->Refresh();
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		gfx->Clear(Color::White);
		pictureBox1->Refresh();
	}
	
};
}
