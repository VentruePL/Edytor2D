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

	public:

	public:
		Forma(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			list = gcnew ArrayList();
		}

	public:

	private:

		ArrayList ^ list;
		Graphics ^ g;
		Pen^ myPen;
		Pen^ myPen2;
		Pen^ myPen3;

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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 56);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(764, 180);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(761, 174);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::pictureBox1_Paint);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"linia", L"elipsa", L"prostokat" });
			this->comboBox1->Location = System::Drawing::Point(651, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forma::comboBox1_SelectedIndexChanged);
			// 
			// Forma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 420);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"Forma";
			this->Text = L"Forma";
			this->Load += gcnew System::EventHandler(this, &Forma::Forma_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Forma::Forma_Paint);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Forma::Forma_MouseDown);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Forma::Forma_MouseUp);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

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
		myPen3 = gcnew Pen(Color::Cyan, 6);
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
			g->DrawEllipse(myPen2, p1.X, p1.Y, 100, 100);
		}
		else
			if (comboBox1->SelectedIndex == 2)

			{
				g->DrawRectangle(myPen3, p1.X, p1.Y, 100, 100);
			}

	Line^ pline = gcnew Line();
	pline->punkt1 = p1;
	pline->punkt2 = p2;
	list->Add(pline);
	delete g;
}
};
}