#pragma once

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ helpInfo_richTextBox;
	protected:

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
			this->helpInfo_richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// helpInfo_richTextBox
			// 
			this->helpInfo_richTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->helpInfo_richTextBox->BackColor = System::Drawing::SystemColors::Info;
			this->helpInfo_richTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->helpInfo_richTextBox->Location = System::Drawing::Point(12, 12);
			this->helpInfo_richTextBox->Name = L"helpInfo_richTextBox";
			this->helpInfo_richTextBox->Size = System::Drawing::Size(536, 394);
			this->helpInfo_richTextBox->TabIndex = 0;
			this->helpInfo_richTextBox->Text = L"";
			this->helpInfo_richTextBox->TextChanged += gcnew System::EventHandler(this, &HelpForm::helpInfo_richTextBox_TextChanged);
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->ClientSize = System::Drawing::Size(560, 418);
			this->Controls->Add(this->helpInfo_richTextBox);
			this->Name = L"HelpForm";
			this->Text = L"Помощь";
			this->Load += gcnew System::EventHandler(this, &HelpForm::HelpForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void helpInfo_richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	// Обработчик формы при её загрузке
	private: System::Void HelpForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		// получение справочной информации из текстового файла
		String^ infoFromFile = System::IO::File::ReadAllText(".\\information.txt");
		// присваивание информации из файла текстовому значению компонента richTextBox
		helpInfo_richTextBox->Text = infoFromFile;
	}
	};
}
