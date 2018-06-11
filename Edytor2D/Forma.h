#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Forma
	/// </summary>
	public ref class Forma : public System::Windows::Forms::Form
	{
	public:

		Point p1, p2;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  wyborKoloru;

	private: System::Windows::Forms::Button^  cmdKolor;



	public:
	private: System::Windows::Forms::Label^  label1;
	public:

	public:

	public:
		Forma(Image^ obraz)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			myPen = gcnew Pen(Color::Blue, 4);
			myPen2 = gcnew Pen(Color::Red, 6);
			myPen3 = gcnew Pen(Color::Green);
			myPen3->Width = rozmiarNarzedzia;
			list = gcnew ArrayList();
			point = Point(0, 0);
			image = gcnew Bitmap(obraz);
			pictureBox1->Image = image;
			g = Graphics::FromImage(pictureBox1->Image);
		
		}
		void setrozmiarNarzedzia(int newSize) {
			rozmiarNarzedzia = newSize;
			myPen3->Width = rozmiarNarzedzia;
		}
		int getrozmiarNarzedzia() {
			return rozmiarNarzedzia;
		}
		
	public:

	private:

		ArrayList ^ list;
		Graphics ^ g;
		Pen^ myPen;
		Pen^ myPen2;
		Pen^ myPen3;
		Image ^ image;
		Point point;
		int rozmiarNarzedzia;
		Color kolor;
		//
	private: System::Windows::Forms::ComboBox^  comboBox1;

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Forma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;
	protected:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		ref struct Line
		{
			Point punkt1;
			Point punkt2;
		};
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->wyborKoloru = (gcnew System::Windows::Forms::Label());
			this->cmdKolor = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 349);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(761, 346);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Forma::onDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Forma::onMove);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"linia", L"elipsa", L"prostokat" });
			this->comboBox1->Location = System::Drawing::Point(149, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(148, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Narzedzie";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"20", L"35" });
			this->comboBox2->Location = System::Drawing::Point(12, 31);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(21, -1);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Rozmiar";
			// 
			// wyborKoloru
			// 
			this->wyborKoloru->BackColor = System::Drawing::Color::Black;
			this->wyborKoloru->Location = System::Drawing::Point(743, 17);
			this->wyborKoloru->Name = L"wyborKoloru";
			this->wyborKoloru->Size = System::Drawing::Size(30, 30);
			this->wyborKoloru->TabIndex = 6;
			// 
			// cmdKolor
			// 
			this->cmdKolor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cmdKolor->Location = System::Drawing::Point(640, 17);
			this->cmdKolor->Name = L"cmdKolor";
			this->cmdKolor->Size = System::Drawing::Size(75, 30);
			this->cmdKolor->TabIndex = 7;
			this->cmdKolor->Text = L"Kolor";
			this->cmdKolor->UseVisualStyleBackColor = true;
			this->cmdKolor->Click += gcnew System::EventHandler(this, &Forma::cmdKolor_Click);
			// 
			// Forma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 420);
			this->Controls->Add(this->cmdKolor);
			this->Controls->Add(this->wyborKoloru);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"Forma";
			this->Text = L"Rysowanie ksztaltow";
			this->Load += gcnew System::EventHandler(this, &Forma::Forma_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::Forma_Paint);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Forma::Forma_MouseDown);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Forma_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void Forma_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		
		//g->DrawEllipse(myPen, 50, 50, 100, 100);
		//g->DrawEllipse(myPen, 600, 50, 100, 100);
		//g->DrawRectangle(myPen2, 300, 15, 150, 150);
	}
	private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	}
	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int selectedIndex = comboBox1->SelectedIndex;
		Object^ selectedItem = comboBox1->SelectedItem;
		MessageBox::Show("Wybrano: " + selectedItem->ToString() + "\n" + "Numer: " + selectedIndex.ToString());
	}
	
private: System::Void Forma_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->SelectedIndex == 0)
	{
		setrozmiarNarzedzia(5);
	}
	else
		if (comboBox2->SelectedIndex == 1)

		{
			setrozmiarNarzedzia(20);
		}
		else
	if (comboBox2->SelectedIndex == 2)
	{
		setrozmiarNarzedzia(35);
	}
}
	private: System::Void onMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		p2.X = e->X;
		p2.Y = e->Y;
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {

			if (comboBox1->SelectedIndex == 0)
				g->DrawLine(myPen, p1.X, p1.Y, p2.X, p2.Y);
			
			else  if (comboBox1->SelectedIndex == 1)
				g->DrawEllipse(myPen3, p1.X, p1.Y, rozmiarNarzedzia, rozmiarNarzedzia);
			else if (comboBox1->SelectedIndex == 2)
				g->DrawRectangle(myPen2, p1.X, p1.Y, rozmiarNarzedzia, rozmiarNarzedzia);
			//g->DrawLine(myPen, p1.X, p1.Y, e->Location);
		//	g->DrawLine(myPen, p1.X, p1.Y, p2.X, p2.Y);
		//	g->DrawLine(myPen, point, e->Location);
			point = e->Location;

			pictureBox1->Refresh();

			Line^ pline = gcnew Line();
			pline->punkt1 = p1;
			pline->punkt2 = p2;
			list->Add(pline);
		//	delete g;
		}

	}
private: System::Void onDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	p1.X = e->X;
	p1.Y = e->Y;
	point = e->Location;

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void cmdKolor_Click(System::Object^  sender, System::EventArgs^  e) {
	ColorDialog^ oknoKolory = gcnew ColorDialog;
	oknoKolory->AllowFullOpen = false;
	oknoKolory->ShowHelp = true;
	oknoKolory->Color = wyborKoloru->BackColor;
	if (oknoKolory->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
	{
		wyborKoloru->BackColor = oknoKolory->Color;
	}
}
};
}