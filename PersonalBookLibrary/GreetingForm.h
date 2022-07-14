#pragma once
#include "MainForm.h"

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GreetingForm
	/// </summary>
	public ref class GreetingForm : public System::Windows::Forms::Form
	{
	public:
		GreetingForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GreetingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ greeting_label;
	protected:



	private: System::Windows::Forms::PictureBox^ appLogo_pictureBox;
	private: System::Windows::Forms::Label^ error_label;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->greeting_label = (gcnew System::Windows::Forms::Label());
			this->appLogo_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->error_label = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->appLogo_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// greeting_label
			// 
			this->greeting_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->greeting_label->AutoSize = true;
			this->greeting_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->greeting_label->Location = System::Drawing::Point(80, 25);
			this->greeting_label->Name = L"greeting_label";
			this->greeting_label->Size = System::Drawing::Size(309, 45);
			this->greeting_label->TabIndex = 1;
			this->greeting_label->Text = L"Добро пожаловать";
			// 
			// appLogo_pictureBox
			// 
			this->appLogo_pictureBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->appLogo_pictureBox->Location = System::Drawing::Point(88, 73);
			this->appLogo_pictureBox->Name = L"appLogo_pictureBox";
			this->appLogo_pictureBox->Size = System::Drawing::Size(299, 264);
			this->appLogo_pictureBox->TabIndex = 3;
			this->appLogo_pictureBox->TabStop = false;
			this->appLogo_pictureBox->Click += gcnew System::EventHandler(this, &GreetingForm::appLogo_pictureBox_Click);
			// 
			// error_label
			// 
			this->error_label->AutoSize = true;
			this->error_label->Location = System::Drawing::Point(85, 363);
			this->error_label->Name = L"error_label";
			this->error_label->Size = System::Drawing::Size(0, 16);
			this->error_label->TabIndex = 4;
			// 
			// GreetingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(482, 519);
			this->Controls->Add(this->error_label);
			this->Controls->Add(this->appLogo_pictureBox);
			this->Controls->Add(this->greeting_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(500, 566);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(500, 566);
			this->Name = L"GreetingForm";
			this->Text = L"Personal Book Library";
			this->Load += gcnew System::EventHandler(this, &GreetingForm::GreetingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->appLogo_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GreetingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Form::CenterToScreen();
		try
		{
			Bitmap^ logoImage = gcnew Bitmap(".\\logo.png");
			appLogo_pictureBox->BackgroundImage = logoImage;
		}
		catch (Exception^ ex)
		{
			error_label->Text = "Не удалось отобразить заставку приложения";
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void appLogo_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
