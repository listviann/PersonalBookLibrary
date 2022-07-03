#pragma once

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultForm
	/// </summary>
	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public:
		ResultForm(void)
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
		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ database_listBox;
	private: System::Windows::Forms::TextBox^ searchBar_textBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ searchKey_label;
	private: System::Windows::Forms::ComboBox^ searchKey_comboBox;
	private: System::Windows::Forms::Button^ editBook_button;
	private: System::Windows::Forms::Button^ deleteBook_button;








	private: System::Windows::Forms::Button^ search_button;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->database_listBox = (gcnew System::Windows::Forms::ListBox());
			this->searchBar_textBox = (gcnew System::Windows::Forms::TextBox());
			this->searchKey_label = (gcnew System::Windows::Forms::Label());
			this->searchKey_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->editBook_button = (gcnew System::Windows::Forms::Button());
			this->deleteBook_button = (gcnew System::Windows::Forms::Button());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// database_listBox
			// 
			this->database_listBox->FormattingEnabled = true;
			this->database_listBox->ItemHeight = 16;
			this->database_listBox->Location = System::Drawing::Point(12, 85);
			this->database_listBox->Name = L"database_listBox";
			this->database_listBox->Size = System::Drawing::Size(443, 308);
			this->database_listBox->TabIndex = 0;
			// 
			// searchBar_textBox
			// 
			this->searchBar_textBox->Location = System::Drawing::Point(12, 57);
			this->searchBar_textBox->Name = L"searchBar_textBox";
			this->searchBar_textBox->Size = System::Drawing::Size(348, 22);
			this->searchBar_textBox->TabIndex = 1;
			// 
			// searchKey_label
			// 
			this->searchKey_label->AutoSize = true;
			this->searchKey_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchKey_label->Location = System::Drawing::Point(12, 23);
			this->searchKey_label->Name = L"searchKey_label";
			this->searchKey_label->Size = System::Drawing::Size(176, 28);
			this->searchKey_label->TabIndex = 2;
			this->searchKey_label->Text = L"Критерий поиска:";
			// 
			// searchKey_comboBox
			// 
			this->searchKey_comboBox->FormattingEnabled = true;
			this->searchKey_comboBox->Location = System::Drawing::Point(200, 27);
			this->searchKey_comboBox->Name = L"searchKey_comboBox";
			this->searchKey_comboBox->Size = System::Drawing::Size(160, 24);
			this->searchKey_comboBox->TabIndex = 3;
			// 
			// editBook_button
			// 
			this->editBook_button->BackColor = System::Drawing::Color::LightSkyBlue;
			this->editBook_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editBook_button->Location = System::Drawing::Point(12, 399);
			this->editBook_button->Name = L"editBook_button";
			this->editBook_button->Size = System::Drawing::Size(210, 57);
			this->editBook_button->TabIndex = 5;
			this->editBook_button->Text = L"Изменить";
			this->editBook_button->UseVisualStyleBackColor = false;
			// 
			// deleteBook_button
			// 
			this->deleteBook_button->BackColor = System::Drawing::Color::LightCoral;
			this->deleteBook_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteBook_button->Location = System::Drawing::Point(245, 399);
			this->deleteBook_button->Name = L"deleteBook_button";
			this->deleteBook_button->Size = System::Drawing::Size(210, 57);
			this->deleteBook_button->TabIndex = 6;
			this->deleteBook_button->Text = L"Удалить";
			this->deleteBook_button->UseVisualStyleBackColor = false;
			// 
			// search_button
			// 
			this->search_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search_button->Location = System::Drawing::Point(366, 23);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(89, 56);
			this->search_button->TabIndex = 7;
			this->search_button->Text = L"Найти";
			this->search_button->UseVisualStyleBackColor = true;
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->ClientSize = System::Drawing::Size(467, 478);
			this->Controls->Add(this->search_button);
			this->Controls->Add(this->deleteBook_button);
			this->Controls->Add(this->editBook_button);
			this->Controls->Add(this->searchKey_comboBox);
			this->Controls->Add(this->searchKey_label);
			this->Controls->Add(this->searchBar_textBox);
			this->Controls->Add(this->database_listBox);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(485, 525);
			this->MinimumSize = System::Drawing::Size(485, 525);
			this->Name = L"ResultForm";
			this->Text = L"База данных";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
