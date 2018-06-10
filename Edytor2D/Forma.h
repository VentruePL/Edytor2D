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

	public:
	private: System::Windows::Forms::Label^  label1;
	public:

	public:

	public:
		Forma(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			myPen3 = gcnew Pen(Color::Green);
			list = gcnew ArrayList();
			myPen3->Width = rozmiarNarzedzia;
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
		int rozmiarNarzedzia;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Forma::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 180);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(761, 180);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::pictureBox1_Paint);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"linia", L"elipsa", L"prostokat" });
			this->comboBox1->Location = System::Drawing::Point(652, 32);
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
			this->label1->Location = System::Drawing::Point(651, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Narzedzie";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"20" });
			this->comboBox2->Location = System::Drawing::Point(524, 32);
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
			this->label2->Location = System::Drawing::Point(534, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Rozmiar";
			// 
			// Forma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 420);
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
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Forma::Forma_MouseUp);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Forma_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		
		Graphics^ g = e->Graphics;
		for (int i = 0; i < list->Count; i++)

		{
			Line^ pline = dynamic_cast<Line^>(list->default[i]);
			g->DrawLine(myPen, pline->punkt1.X, pline->punkt1.Y, pline->punkt2.X, pline->punkt2.Y);

		}
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}

	private: System::Void Forma_Load(System::Object^  sender, System::EventArgs^  e) {

		pictureBox1 = gcnew PictureBox;
		pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::pictureBox1_Paint);
		this->Controls->Add(pictureBox1);
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g = e->Graphics;
		myPen = gcnew Pen(Color::Blue, 4);
		myPen2 = gcnew Pen(Color::Red, 6);
		g->DrawEllipse(myPen, 50, 50, 100, 100);
		g->DrawEllipse(myPen, 600, 50, 100, 100);
		g->DrawRectangle(myPen2, 300, 15, 150, 150);
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
	p1.X = e->X;
	p1.Y = e->Y;
}
private: System::Void Forma_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	p2.X = e->X;
	p2.Y = e->Y;
	Graphics^ g = CreateGraphics();
	if (comboBox1->SelectedIndex == 0)
	{
		g->DrawLine(myPen, p1.X, p1.Y, p2.X, p2.Y);
	}
	else
		if (comboBox1->SelectedIndex == 1)

		{
			g->DrawEllipse(myPen3, p1.X, p1.Y, rozmiarNarzedzia, rozmiarNarzedzia);
		}
		else
			if (comboBox1->SelectedIndex == 2)

			{
				g->DrawRectangle(myPen2, p1.X, p1.Y, 100, 100);
			}

	Line^ pline = gcnew Line();
	pline->punkt1 = p1;
	pline->punkt2 = p2;
	list->Add(pline);
	delete g;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->SelectedIndex == 0)
	{
		setrozmiarNarzedzia(5);
	}
	else
		if (comboBox2->SelectedIndex == 1)

		{
			setrozmiarNarzedzia(10);
		}
		else
	if (comboBox2->SelectedIndex == 2)
	{
		setrozmiarNarzedzia(20);
	}
}
};
}