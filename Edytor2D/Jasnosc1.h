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
			//image = gcnew Bitmap(Img);
		pictureBox1->Image = gcnew Bitmap(Img);
			//label1->Text = String::Format("{0:0.00}", value);

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
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
		


	
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Jasnosc::typeid));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 2;
			this->trackBar1->Location = System::Drawing::Point(1008, 28);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(192, 45);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Value = 127;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Jasnosc::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(1070, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(1024, 218);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(176, 45);
			this->trackBar2->TabIndex = 3;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Jasnosc::trackBar2_Scroll);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(940, 528);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &Jasnosc::pictureBox1_Click);

			// 
			// Jasnosc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1273, 558);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Name = L"Jasnosc";
			this->Text = L"Jasnosc";
			this->Load += gcnew System::EventHandler(this, &Jasnosc::Jasnosc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Jasnosc_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	
	private:  Bitmap ^ ContrastBrightness(Bitmap^ sourceBitmap, double brightnessLevel, double beta)
	{
		// Lock the bitmap's bits.  
		System::Drawing::Rectangle rect = System::Drawing::Rectangle(0, 0, sourceBitmap->Width, sourceBitmap->Height);
		System::Drawing::Imaging::BitmapData^ sourceData = sourceBitmap->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, sourceBitmap->PixelFormat);

		// Get the address of the first line.
		IntPtr ptr = sourceData->Scan0;
		// Declare an array to hold the bytes of the bitmap.
		// This code is specific to a bitmap with 24 bits per pixels.
		int bytes = Math::Abs(sourceData->Stride) * sourceData->Height;
		array<Byte>^rgbValues = gcnew array<Byte>(bytes);



		System::Runtime::InteropServices::Marshal::Copy(ptr, rgbValues, 0, bytes);


		sourceBitmap->UnlockBits(sourceData); // to use the bitmap, in fact to in order to operate on it


											  //double brightnessLevel = Math::Pow((100.0 + threshold) / 100.0, 2);

		double min[] = { rgbValues[0],rgbValues[1],rgbValues[2],rgbValues[3] };
		double max[] = { rgbValues[0],rgbValues[1],rgbValues[2],rgbValues[3] };
		double mid[] = { 0,0,0,0 };
		double blue = 0;
		double green = 0;
		double red = 0;
		double alpha = 0;
		double bt;
		double tempRGB[4];
		double contrast[] = { 0,0,0,0 };
		int tolerance = 5; // +((sourceBitmap->Width + sourceBitmap->Height) - (1600 + 900)) / (sourceBitmap->Width + sourceBitmap->Height);
		int region = tolerance;  // this metric determines the quality of processing and duration because i have not used any thread
		int start = 0;


		// all the image rgb calculations
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

			contrast[0] = max[0] - min[0];
			contrast[1] = max[1] - min[1];
			contrast[2] = max[2] - min[2];
			contrast[3] = max[3] - min[3];

			bt = (this->maxbeta - this->minbeta) / 2;
			//blue = ((((rgbValues[k] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			if (rgbValues[k] < mid[0] && beta > 0) {
				tempRGB[0] = 255 - rgbValues[k];
				contrast[0] = -(rgbValues[k] - min[0]);
			}
			else if (rgbValues[k] > mid[0] && beta > 0) {
				tempRGB[0] = rgbValues[k];
				contrast[0] = max[0] - rgbValues[k];
			}
			else if (rgbValues[k] < mid[0] && beta < 0) {
				tempRGB[0] = 255 - rgbValues[k];
				contrast[0] = -(mid[0] - rgbValues[k]);
			}
			else if (rgbValues[k] > mid[0] && beta < 0) {
				tempRGB[0] = rgbValues[k];
				contrast[0] = rgbValues[k] - mid[0];
			}
			if (rgbValues[k + 1] < mid[1] && beta > 0) {
				tempRGB[1] = 255 - rgbValues[k + 1];
				contrast[1] = -(rgbValues[k + 1] - min[1]);
			}
			else if (rgbValues[k + 1] > mid[1] && beta > 0) {
				tempRGB[1] = rgbValues[k + 1];
				contrast[1] = max[1] - rgbValues[k + 1];
			}
			else if (rgbValues[k + 1] < mid[1] && beta < 0) {
				tempRGB[1] = 255 - rgbValues[k + 1];
				contrast[1] = -(mid[1] - rgbValues[k + 1]);
			}
			else if (rgbValues[k + 1] > mid[1] && beta < 0) {
				tempRGB[1] = rgbValues[k + 1];
				contrast[1] = rgbValues[k + 1] - mid[1];
			}
			if (rgbValues[k + 2] < mid[2] && beta > 0) {
				tempRGB[2] = 255 - rgbValues[k + 2];
				contrast[2] = -(rgbValues[k + 2] - min[2]);
			}
			else if (rgbValues[k + 2] > mid[2] && beta > 0) {
				tempRGB[2] = rgbValues[k + 2];
				contrast[2] = max[2] - rgbValues[k + 2];
			}
			else if (rgbValues[k + 2] < mid[2] && beta < 0) {
				tempRGB[2] = 255 - rgbValues[k + 2];
				contrast[2] = -(mid[2] - rgbValues[k + 2]);
			}
			else if (rgbValues[k + 2] > mid[2] && beta < 0) {
				tempRGB[2] = rgbValues[k + 2];
				contrast[2] = rgbValues[k + 2] - mid[2];
			}
			if (rgbValues[k + 3] < mid[3] && beta > 0) {
				tempRGB[3] = 255 - rgbValues[k + 3];
				contrast[3] = -(rgbValues[k + 3] - min[3]);
			}
			else if (rgbValues[k + 3] > mid[3] && beta > 0) {
				tempRGB[3] = rgbValues[k + 3];
				contrast[3] = max[3] - rgbValues[k + 3];
			}
			else if (rgbValues[k + 3] < mid[3] && beta < 0) {
				tempRGB[3] = 255 - rgbValues[k + 3];
				contrast[3] = -(mid[3] - rgbValues[k + 3]);
			}
			else if (rgbValues[k + 3] > mid[3] && beta < 0) {
				tempRGB[3] = rgbValues[k + 3];
				contrast[3] = rgbValues[k + 3] - mid[3];
			}



			blue = rgbValues[k] + tempRGB[0] * brightnessLevel + (contrast[0] / bt) * beta;

			//green = ((((rgbValues[k + 1] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			green = rgbValues[k + 1] + tempRGB[1] * brightnessLevel + (contrast[1] / bt) * beta;

			//red = ((((rgbValues[k + 2] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			red = rgbValues[k + 2] + tempRGB[3] * brightnessLevel + (contrast[2] / bt) * beta;

			//alpha = ((((rgbValues[k + 3] / 255.0) - 0.5) *
			//brightnessLevel) + 0.5) * 255.0;
			alpha = rgbValues[k + 3] + tempRGB[3] * brightnessLevel + (contrast[3] / bt) * beta;


			if (blue > 255)
			{
				blue = 255;
			}
			else if (blue < 0)
			{
				blue = 0;
			}


			if (green > 255)
			{
				green = 255;
			}
			else if (green < 0)
			{
				green = 0;
			}


			if (red > 255)
			{
				red = 255;
			}
			else if (red < 0)
			{
				red = 0;
			}

			// puts the final rgb values into the byte array
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

		
		/// Do the operation new_image(i,j) = alpha*image(i,j) + beta
		/*for (int y = 0; y < bmp->Width; y++)
		{
		for (int x = 0; x < bmp->Height; x++)
		{
		for (int c = 0; c < 3; c++)
		{

		//bmp->SetPixel(x,y, alpha*bmp->GetPixel(x,y)->toArgb()+beta);
		//pictureBox1->Image.at<Vec3b>(y, x)[c] =
		//saturate_cast<uchar>(alpha*(image.at<Vec3b>(y, x)[c]) + beta);
		}
		}
		}*/
		//boost::thread workerThread(MyForm->ContrastBrightness);
		//Image is the one to be displayed
		this->pictureBox1->Image = ContrastBrightness(bmp, this->brightnessLevel, valuebeta - middlebeta);
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

		

		/// Do the operation new_image(i,j) = alpha*image(i,j) + beta
		/*for (int y = 0; y < bmp->Width; y++)
		{
		for (int x = 0; x < bmp->Height; x++)
		{
		for (int c = 0; c < 3; c++)
		{
		//bmp->SetPixel(x,y, alpha*bmp->GetPixel(x,y)->toArgb()+beta);
		//pictureBox1->Image.at<Vec3b>(y, x)[c] =
		//saturate_cast<uchar>(alpha*(image.at<Vec3b>(y, x)[c]) + beta);
		}
		}
		}*/
		this->pictureBox1->Image = ContrastBrightness(bmp, this->brightnessLevel, valuebeta - middlebeta);

	}
	
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
