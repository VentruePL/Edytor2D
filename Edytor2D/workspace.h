#pragma once

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
		/// Wyczy�� wszystkie u�ywane zasoby.
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
	private: System::Windows::Forms::ToolStripMenuItem^  sajdakBaranToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  takToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  otw�rzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  obrazToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  skalowanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  obr�tToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  koloryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wymy�lToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  seToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  co�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bartekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  filtryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	protected:











	protected:














	protected:


	protected:

	protected:




	protected:










	protected:



	protected:




	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs�ugi projektanta � nie nale�y modyfikowa� 
		/// zawarto�� tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(workspace::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sajdakBaranToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->takToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->otw�rzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->obrazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->skalowanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->obr�tToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->koloryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wymy�lToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->co�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bartekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->LeftToolStripPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->sajdakBaranToolStripMenuItem,
					this->obrazToolStripMenuItem, this->koloryToolStripMenuItem, this->filtryToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(942, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sajdakBaranToolStripMenuItem
			// 
			this->sajdakBaranToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->takToolStripMenuItem,
					this->otw�rzToolStripMenuItem
			});
			this->sajdakBaranToolStripMenuItem->Name = L"sajdakBaranToolStripMenuItem";
			this->sajdakBaranToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->sajdakBaranToolStripMenuItem->Text = L"Plik";
			this->sajdakBaranToolStripMenuItem->Click += gcnew System::EventHandler(this, &workspace::sajdakBaranToolStripMenuItem_Click);
			// 
			// takToolStripMenuItem
			// 
			this->takToolStripMenuItem->Name = L"takToolStripMenuItem";
			this->takToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->takToolStripMenuItem->Text = L"Otw�rz";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 3);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(24, 48);
			this->toolStrip1->TabIndex = 0;
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(22, 20);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(22, 20);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(918, 501);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// otw�rzToolStripMenuItem
			// 
			this->otw�rzToolStripMenuItem->Name = L"otw�rzToolStripMenuItem";
			this->otw�rzToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->otw�rzToolStripMenuItem->Text = L"Zapisz";
			// 
			// obrazToolStripMenuItem
			// 
			this->obrazToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->skalowanieToolStripMenuItem,
					this->obr�tToolStripMenuItem
			});
			this->obrazToolStripMenuItem->Name = L"obrazToolStripMenuItem";
			this->obrazToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->obrazToolStripMenuItem->Text = L"Obraz";
			// 
			// skalowanieToolStripMenuItem
			// 
			this->skalowanieToolStripMenuItem->Name = L"skalowanieToolStripMenuItem";
			this->skalowanieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->skalowanieToolStripMenuItem->Text = L"Skalowanie";
			// 
			// obr�tToolStripMenuItem
			// 
			this->obr�tToolStripMenuItem->Name = L"obr�tToolStripMenuItem";
			this->obr�tToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->obr�tToolStripMenuItem->Text = L"Obr�t";
			// 
			// koloryToolStripMenuItem
			// 
			this->koloryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->wymy�lToolStripMenuItem,
					this->seToolStripMenuItem, this->co�ToolStripMenuItem, this->bartekToolStripMenuItem
			});
			this->koloryToolStripMenuItem->Name = L"koloryToolStripMenuItem";
			this->koloryToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->koloryToolStripMenuItem->Text = L"Kolory";
			// 
			// wymy�lToolStripMenuItem
			// 
			this->wymy�lToolStripMenuItem->Name = L"wymy�lToolStripMenuItem";
			this->wymy�lToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->wymy�lToolStripMenuItem->Text = L"Wymy�l";
			// 
			// seToolStripMenuItem
			// 
			this->seToolStripMenuItem->Name = L"seToolStripMenuItem";
			this->seToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->seToolStripMenuItem->Text = L"Se";
			// 
			// co�ToolStripMenuItem
			// 
			this->co�ToolStripMenuItem->Name = L"co�ToolStripMenuItem";
			this->co�ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->co�ToolStripMenuItem->Text = L"Co�";
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
			this->toolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem2->Text = L"1";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem3->Text = L"2";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem4->Text = L"3";
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
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void workspace_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ message = "Chcesz zamkn�� te jak�e wypasion� aplikacj�?";
		String^ caption = "SuperUltraPodr�ba Photoshopa";
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
private: System::Void sajdakBaranToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
