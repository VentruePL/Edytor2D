#pragma once

namespace Edytor2D {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Jasnosc
	/// </summary>
	public ref class Jasnosc : public System::Windows::Forms::Form
	{
	public:
		Jasnosc(Image^ Img)
		{
			InitializeComponent();
	//		image = gcnew Bitmap(Img);
		pictureBox1->Image = gcnew Bitmap(Img);
		pictureBox2->Image = gcnew Bitmap(Img);
		//	label1->Text = String::Format("{0:0.00}", value);

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

		System::Drawing::Image^getImage() {
			return returnedImage;
		
	}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Jasnosc()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int value = 0;
		Image ^ image;
		IO::Stream^ myStream;
		Bitmap ^ bmp;
		double minalpha;
		double maxalpha;
		double minbeta;
		double maxbeta;
		double brightnessLevel;
		double beta;
		Image ^ returnedImage;
	
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
			 
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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 2;
			this->trackBar1->Location = System::Drawing::Point(962, 100);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(192, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Value = 127;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Jasnosc::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 2;
			this->trackBar2->Location = System::Drawing::Point(962, 213);
			this->trackBar2->Maximum = 255;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(192, 45);
			this->trackBar2->TabIndex = 4;
			this->trackBar2->Value = 127;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Jasnosc::trackBar2_Scroll);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(918, 501);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(990, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 82);
			this->button1->TabIndex = 5;
			this->button1->Text = L"ZAPISZ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Jasnosc::button1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(36, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(1026, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Jasnoœæ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(1026, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Balans";
			// 
			// Jasnosc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 522);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Name = L"Jasnosc";
			this->Text = L"Korekcja kolorów";
			this->Load += gcnew System::EventHandler(this, &Jasnosc::Jasnosc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void Jasnosc_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private:  Bitmap ^ Balans(Bitmap^ sourceBitmap, double brightnessLevel, double beta)
	{
		  
		System::Drawing::Rectangle rect = System::Drawing::Rectangle(0, 0, sourceBitmap->Width, sourceBitmap->Height);
		System::Drawing::Imaging::BitmapData^ sourceData = sourceBitmap->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, sourceBitmap->PixelFormat);

		IntPtr ptr = sourceData->Scan0;		
		int bytes = Math::Abs(sourceData->Stride) * sourceData->Height;
		array<Byte>^rgbValues = gcnew array<Byte>(bytes);

		System::Runtime::InteropServices::Marshal::Copy(ptr, rgbValues, 0, bytes);

		sourceBitmap->UnlockBits(sourceData); 											

		double min[] = { rgbValues[0],rgbValues[1],rgbValues[2],rgbValues[3] };
		double max[] = { rgbValues[0],rgbValues[1],rgbValues[2],rgbValues[3] };
		double mid[] = { 0,0,0,0 };
		double blue = 0;
		double green = 0;
		double red = 0;
		double alpha = 0;
		double bt;
		double tempRGB[4];
		double Balans[] = { 0,0,0,0 };
		int tolerance = 5; 
		int region = tolerance; 
		int start = 0;

		// liczenie rgb
		for (int k = 0; k + 4 < rgbValues->Length; k += 4)
		{
			start = 0;
			region = tolerance;
			if (k >= region)
				start = Math::Abs(k - region);
			if (k + 3 + region > rgbValues->Length)
				region = 0;
			else
				region = tolerance;
			for (int i = start; i + 4 < k + region; i += 4) {

				if (min[0] > rgbValues[i])   min[0] = rgbValues[i];
				if (min[1] > rgbValues[i + 1])   min[1] = rgbValues[i + 1];
				if (min[2] > rgbValues[i + 2])   min[2] = rgbValues[i + 2];
				if (min[3] > rgbValues[i + 3])   min[3] = rgbValues[i + 3];

				if (max[0] < rgbValues[i])   max[0] = rgbValues[i];
				if (max[1] < rgbValues[i + 1])   max[1] = rgbValues[i + 1];
				if (max[2] < rgbValues[i + 2])   max[2] = rgbValues[i + 2];
				if (max[3] < rgbValues[i + 3])   max[3] = rgbValues[i + 3];
			}

			mid[0] = (max[0] + min[0]) / 2;
			mid[1] = (max[1] + min[1]) / 2;
			mid[2] = (max[2] + min[2]) / 2;
			mid[3] = (max[3] + min[3]) / 2;

			Balans[0] = max[0] - min[0];
			Balans[1] = max[1] - min[1];
			Balans[2] = max[2] - min[2];
			Balans[3] = max[3] - min[3];

			bt = (this->maxbeta - this->minbeta) / 2;
			//blue = ((((rgbValues[k] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			if (rgbValues[k] < mid[0] && beta > 0) {
				tempRGB[0] = 255 - rgbValues[k];
				Balans[0] = -(rgbValues[k] - min[0]);
			}
			else if (rgbValues[k] > mid[0] && beta > 0) {
				tempRGB[0] = rgbValues[k];
				Balans[0] = max[0] - rgbValues[k];
			}
			else if (rgbValues[k] < mid[0] && beta < 0) {
				tempRGB[0] = 255 - rgbValues[k];
				Balans[0] = -(mid[0] - rgbValues[k]);
			}
			else if (rgbValues[k] > mid[0] && beta < 0) {
				tempRGB[0] = rgbValues[k];
				Balans[0] = rgbValues[k] - mid[0];
			}
			if (rgbValues[k + 1] < mid[1] && beta > 0) {
				tempRGB[1] = 255 - rgbValues[k + 1];
				Balans[1] = -(rgbValues[k + 1] - min[1]);
			}
			else if (rgbValues[k + 1] > mid[1] && beta > 0) {
				tempRGB[1] = rgbValues[k + 1];
				Balans[1] = max[1] - rgbValues[k + 1];
			}
			else if (rgbValues[k + 1] < mid[1] && beta < 0) {
				tempRGB[1] = 255 - rgbValues[k + 1];
				Balans[1] = -(mid[1] - rgbValues[k + 1]);
			}
			else if (rgbValues[k + 1] > mid[1] && beta < 0) {
				tempRGB[1] = rgbValues[k + 1];
				Balans[1] = rgbValues[k + 1] - mid[1];
			}
			if (rgbValues[k + 2] < mid[2] && beta > 0) {
				tempRGB[2] = 255 - rgbValues[k + 2];
				Balans[2] = -(rgbValues[k + 2] - min[2]);
			}
			else if (rgbValues[k + 2] > mid[2] && beta > 0) {
				tempRGB[2] = rgbValues[k + 2];
				Balans[2] = max[2] - rgbValues[k + 2];
			}
			else if (rgbValues[k + 2] < mid[2] && beta < 0) {
				tempRGB[2] = 255 - rgbValues[k + 2];
				Balans[2] = -(mid[2] - rgbValues[k + 2]);
			}
			else if (rgbValues[k + 2] > mid[2] && beta < 0) {
				tempRGB[2] = rgbValues[k + 2];
				Balans[2] = rgbValues[k + 2] - mid[2];
			}
			if (rgbValues[k + 3] < mid[3] && beta > 0) {
				tempRGB[3] = 255 - rgbValues[k + 3];
				Balans[3] = -(rgbValues[k + 3] - min[3]);
			}
			else if (rgbValues[k + 3] > mid[3] && beta > 0) {
				tempRGB[3] = rgbValues[k + 3];
				Balans[3] = max[3] - rgbValues[k + 3];
			}
			else if (rgbValues[k + 3] < mid[3] && beta < 0) {
				tempRGB[3] = 255 - rgbValues[k + 3];
				Balans[3] = -(mid[3] - rgbValues[k + 3]);
			}
			else if (rgbValues[k + 3] > mid[3] && beta < 0) {
				tempRGB[3] = rgbValues[k + 3];
				Balans[3] = rgbValues[k + 3] - mid[3];
			}

			blue = rgbValues[k] + tempRGB[0] * brightnessLevel + (Balans[0] / bt) * beta;

			//green = ((((rgbValues[k + 1] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			green = rgbValues[k + 1] + tempRGB[1] * brightnessLevel + (Balans[1] / bt) * beta;

			//red = ((((rgbValues[k + 2] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			red = rgbValues[k + 2] + tempRGB[3] * brightnessLevel + (Balans[2] / bt) * beta;

			//alpha = ((((rgbValues[k + 3] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			alpha = rgbValues[k + 3] + tempRGB[3] * brightnessLevel + (Balans[3] / bt) * beta;

			if (red > 255)
			{
				red = 255;
			}
			else if (red < 0)
			{
				red = 0;
			}

			if (green > 255)
			{
				green = 255;
			}
			else if (green < 0)
			{
				green = 0;
			}

			if (blue > 255)
			{
				blue = 255;
			}
			else if (blue < 0)
			{
				blue = 0;
			}					

			// umieszczanie koncowych wartosci rgb w tablicy bajtów
			rgbValues[k] = System::Convert::ToByte(blue);
			rgbValues[k + 1] = System::Convert::ToByte(green);
			rgbValues[k + 2] = System::Convert::ToByte(red);
		}


		Bitmap^ resultBitmap = gcnew Bitmap(sourceBitmap->Width, sourceBitmap->Height);

		System::Drawing::Rectangle rect2 = System::Drawing::Rectangle(0, 0, resultBitmap->Width, resultBitmap->Height);
		System::Drawing::Imaging::BitmapData^ resultData = resultBitmap->LockBits(rect2, System::Drawing::Imaging::ImageLockMode::ReadWrite, System::Drawing::Imaging::PixelFormat::Format24bppRgb);


		System::Runtime::InteropServices::Marshal::Copy(rgbValues, 0, ptr, bytes);
		resultBitmap->UnlockBits(resultData);


		return sourceBitmap;
	}

	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {

		bmp = gcnew Bitmap(pictureBox1->Image);
		int z = 1;
		double maxalpha = trackBar1->Maximum;
		double minalpha = trackBar1->Minimum;
		this->maxalpha = trackBar1->Maximum;
		this->minalpha = trackBar1->Minimum;
		double valuealpha = trackBar1->Value;
		double maxbeta = trackBar2->Maximum;
		double minbeta = trackBar2->Minimum;
		this->maxbeta = trackBar2->Maximum;
		this->minbeta = trackBar2->Minimum;
		double valuebeta = trackBar2->Value;
		double y = (maxalpha - minalpha) / 2;
		double middlebeta = (maxbeta - minbeta) / 2;
		if (valuealpha - y < 0)
			z = -z;

		this->brightnessLevel = z * (Math::Abs(valuealpha - y) / (maxalpha / 2));		
		
		//obraz jest wyœwietlany
		this->pictureBox2->Image = Balans(bmp, this->brightnessLevel, valuebeta - middlebeta);
	}

	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {

		bmp = gcnew Bitmap(pictureBox1->Image);
		int z = 1;
		double maxalpha = trackBar1->Maximum;
		double minalpha = trackBar1->Minimum;
		this->maxalpha = trackBar1->Maximum;
		this->minalpha = trackBar1->Minimum;
		double valuealpha = trackBar1->Value;
		double maxbeta = trackBar2->Maximum;
		double minbeta = trackBar2->Minimum;
		this->maxbeta = trackBar2->Maximum;
		this->minbeta = trackBar2->Minimum;
		double valuebeta = trackBar2->Value;
		double y = (maxalpha - minalpha) / 2;
		double middlebeta = (maxbeta - minbeta) / 2;
		if (valuealpha - y < 0)
			z = -z;

		this->brightnessLevel = z * (Math::Abs(valuealpha - y) / (maxalpha / 2));
		this->pictureBox2->Image = Balans(bmp, this->brightnessLevel, valuebeta - middlebeta);

	}
	
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	returnedImage = pictureBox2->Image;
}
		
};
}