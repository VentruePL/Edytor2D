#pragma once
#include "tekst.h"

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o workspace
	/// </summary>
	public ref class workspace : public System::Windows::Forms::Form
	{
	public:
		workspace(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~workspace()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^  toolStripContainer1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  MememToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  takToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::ToolStripMenuItem^  obrazToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  skalowanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  obrótToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  koloryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wymyœlToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  seToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  coœToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bartekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  filtryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripButton4;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  zapiszToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;





	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(workspace::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->MememToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->takToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zapiszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->obrazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skalowanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->obrótToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koloryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wymyœlToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coœToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bartekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->LeftToolStripPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			this->toolStripContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolStripContainer1->BottomToolStripPanelVisible = false;
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->AutoScroll = true;
			this->toolStripContainer1->ContentPanel->Controls->Add(this->button1);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->richTextBox1);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->pictureBox1);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(918, 501);
			// 
			// toolStripContainer1.LeftToolStripPanel
			// 
			this->toolStripContainer1->LeftToolStripPanel->Controls->Add(this->toolStrip1);
			this->toolStripContainer1->LeftToolStripPanel->Click += gcnew System::EventHandler(this, &workspace::toolStripContainer1_LeftToolStripPanel_Click);
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->RightToolStripPanelVisible = false;
			this->toolStripContainer1->Size = System::Drawing::Size(942, 525);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(549, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &workspace::button1_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::White;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(282, 152);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(342, 130);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &workspace::richTextBox1_TextChanged_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(918, 501);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton5, this->toolStripButton7, this->toolStripButton4, this->toolStripButton6
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(24, 146);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"Raz";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &workspace::toolStrip1_ItemClicked);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(22, 20);
			this->toolStripButton1->Text = L"Kszta³ty";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &workspace::toolStripButton1_Click_1);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(22, 20);
			this->toolStripButton2->Text = L"Wprowadzanie tekstu";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &workspace::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(22, 20);
			this->toolStripButton3->Text = L"Stempel";
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(22, 20);
			this->toolStripButton5->Text = L"Pêdzel";
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(22, 20);
			this->toolStripButton7->Text = L"Ustawienia pêdzla";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(22, 6);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(22, 20);
			this->toolStripButton6->Text = L"Wybór koloru";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &workspace::toolStripButton6_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->MememToolStripMenuItem,
					this->obrazToolStripMenuItem, this->koloryToolStripMenuItem, this->filtryToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(942, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MememToolStripMenuItem
			// 
			this->MememToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->takToolStripMenuItem,
					this->zapiszToolStripMenuItem
			});
			this->MememToolStripMenuItem->Name = L"MememToolStripMenuItem";
			this->MememToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->MememToolStripMenuItem->Text = L"Plik";
			// 
			// takToolStripMenuItem
			// 
			this->takToolStripMenuItem->Name = L"takToolStripMenuItem";
			this->takToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->takToolStripMenuItem->Text = L"Otwórz";
			this->takToolStripMenuItem->Click += gcnew System::EventHandler(this, &workspace::takToolStripMenuItem_Click);
			// 
			// zapiszToolStripMenuItem
			// 
			this->zapiszToolStripMenuItem->Name = L"zapiszToolStripMenuItem";
			this->zapiszToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->zapiszToolStripMenuItem->Text = L"Zapisz";
			this->zapiszToolStripMenuItem->Click += gcnew System::EventHandler(this, &workspace::zapiszToolStripMenuItem_Click);
			// 
			// obrazToolStripMenuItem
			// 
			this->obrazToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->skalowanieToolStripMenuItem,
					this->obrótToolStripMenuItem
			});
			this->obrazToolStripMenuItem->Name = L"obrazToolStripMenuItem";
			this->obrazToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->obrazToolStripMenuItem->Text = L"Obraz";
			// 
			// skalowanieToolStripMenuItem
			// 
			this->skalowanieToolStripMenuItem->Name = L"skalowanieToolStripMenuItem";
			this->skalowanieToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->skalowanieToolStripMenuItem->Text = L"Skalowanie";
			this->skalowanieToolStripMenuItem->Click += gcnew System::EventHandler(this, &workspace::skalowanieToolStripMenuItem_Click);
			// 
			// obrótToolStripMenuItem
			// 
			this->obrótToolStripMenuItem->Name = L"obrótToolStripMenuItem";
			this->obrótToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->obrótToolStripMenuItem->Text = L"Obrót";
			// 
			// koloryToolStripMenuItem
			// 
			this->koloryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->wymyœlToolStripMenuItem,
					this->seToolStripMenuItem, this->coœToolStripMenuItem, this->bartekToolStripMenuItem
			});
			this->koloryToolStripMenuItem->Name = L"koloryToolStripMenuItem";
			this->koloryToolStripMenuItem->Size = System::Drawing::Size(110, 20);
			this->koloryToolStripMenuItem->Text = L"Korekcja kolorów";
			// 
			// wymyœlToolStripMenuItem
			// 
			this->wymyœlToolStripMenuItem->Name = L"wymyœlToolStripMenuItem";
			this->wymyœlToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->wymyœlToolStripMenuItem->Text = L"Wymyœl";
			// 
			// seToolStripMenuItem
			// 
			this->seToolStripMenuItem->Name = L"seToolStripMenuItem";
			this->seToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->seToolStripMenuItem->Text = L"Se";
			// 
			// coœToolStripMenuItem
			// 
			this->coœToolStripMenuItem->Name = L"coœToolStripMenuItem";
			this->coœToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->coœToolStripMenuItem->Text = L"Coœ";
			// 
			// bartekToolStripMenuItem
			// 
			this->bartekToolStripMenuItem->Name = L"bartekToolStripMenuItem";
			this->bartekToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->bartekToolStripMenuItem->Text = L"Bartek";
			// 
			// filtryToolStripMenuItem
			// 
			this->filtryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->filtryToolStripMenuItem->Name = L"filtryToolStripMenuItem";
			this->filtryToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->filtryToolStripMenuItem->Text = L"Filtry";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem2->Text = L"1";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem3->Text = L"2";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(80, 22);
			this->toolStripMenuItem4->Text = L"3";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Obrazy JPG|*.jpg|Obrazy BMP|*.bmp|Obrazy PNG|*.png";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Obrazy JPG|*.jpg|Obrazy BMP|*.bmp|Obrazy PNG|*.png";
			// 
			// workspace
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(942, 525);
			this->Controls->Add(this->toolStripContainer1);
			this->Name = L"workspace";
			this->Text = L"Edytor 2D";
			this->Load += gcnew System::EventHandler(this, &workspace::workspace_Load);
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->LeftToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->LeftToolStripPanel->PerformLayout();
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	void MarshalString(String ^ s, std::string& os)
	{
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	Bitmap^ convert_image_bitmap(Image^ image)
	{
		Bitmap^ bitmapa;
		//image = pictureBox1->Image;
		bitmapa = gcnew Bitmap(image);
		return bitmapa;
	}

	Image^ convert_bitmap_image(Bitmap^ bitmapa)
	{
		return bitmapa;
	}

	Color wybrany_kolor = Color::FromArgb(0, 0, 0);
	
	void set_icon_kolor()
	{
		Bitmap^ tmp = convert_image_bitmap(toolStripButton6->Image);
		for (int i = 0; i < tmp->Width; i++)
		{
			for (int j = 0; j < tmp->Height; j++)
			{
				tmp->SetPixel(i, j, wybrany_kolor);
			}
		}
		toolStripButton6->Image = convert_bitmap_image(tmp);
	}

	private: System::Void workspace_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ message = "Chcesz zamkn¹æ te jak¿e wypasion¹ aplikacjê?";
		String^ caption = "SuperUltraPodróba Photoshopa";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Closes the parent form.
			this->Close();
		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}


private: System::Void toolStripContainer1_LeftToolStripPanel_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void takToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//this.button1.Click += new System.EventHandler(this.button1_Click);
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->Image=Image::FromFile(openFileDialog1->FileName,true);
		pictureBox1->Width = pictureBox1->Image->Width;//szer
		pictureBox1->Height = pictureBox1->Image->Height;//wys
		//pictureBox1->Image=FromFile(openFileDialog1->FileName,1);
		//Image^ tmp = Image::FromFile(openFileDialog1->FileName, true);
		//pictureBox1->Image = tmp;
		//String^ no=openFileDialog1->FileName;
		//std::string a;
		//MarshalString(no, a);
		//std::cout << a << std::endl;
	}

}

private: System::Void zapiszToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		switch (saveFileDialog1->FilterIndex)
		{
		case 1:
			pictureBox1->Image->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Jpeg);
			break;
		case 2:
			pictureBox1->Image->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
			break;
		case 3:
			pictureBox1->Image->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Png);
			break;
		}
	}
}
private: System::Void toolStripButton1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	//pictureBox1->Image = convert_image_bitmap();
}
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
	set_icon_kolor();
}
private: System::Void skalowanieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->richTextBox1->Visible = true;
		this->button1->Visible = true;
		tekst ^ n = gcnew tekst();
		n->Show();
		}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void richTextBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Visible = false;
	this->button1->Visible = false;
}
};
}
