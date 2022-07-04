#pragma once

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		EditForm(void)
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
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ bookName_label;
	private: System::Windows::Forms::Label^ authorName_label;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^ bookName_textBox;
	private: System::Windows::Forms::TextBox^ authorName_textBox;
	private: System::Windows::Forms::Label^ publisher_label;
	private: System::Windows::Forms::TextBox^ publisher_textBox;
	private: System::Windows::Forms::Label^ libSection_label;
	private: System::Windows::Forms::TextBox^ libSection_textBox;
	private: System::Windows::Forms::Label^ origin_label;
	private: System::Windows::Forms::TextBox^ origin_textBox;
	private: System::Windows::Forms::Label^ assessment_label;


	private: System::Windows::Forms::Button^ saveInDb_button;



















	private: System::Windows::Forms::RadioButton^ existance_radioButton1;
	private: System::Windows::Forms::RadioButton^ existance_radioButton2;
	private: System::Windows::Forms::Button^ clearFields_button;
	private: System::Windows::Forms::GroupBox^ bookExistance_groupBox;
	private: System::Windows::Forms::TextBox^ rating_textBox;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bookName_label = (gcnew System::Windows::Forms::Label());
			this->authorName_label = (gcnew System::Windows::Forms::Label());
			this->bookName_textBox = (gcnew System::Windows::Forms::TextBox());
			this->authorName_textBox = (gcnew System::Windows::Forms::TextBox());
			this->publisher_label = (gcnew System::Windows::Forms::Label());
			this->publisher_textBox = (gcnew System::Windows::Forms::TextBox());
			this->libSection_label = (gcnew System::Windows::Forms::Label());
			this->libSection_textBox = (gcnew System::Windows::Forms::TextBox());
			this->origin_label = (gcnew System::Windows::Forms::Label());
			this->origin_textBox = (gcnew System::Windows::Forms::TextBox());
			this->assessment_label = (gcnew System::Windows::Forms::Label());
			this->saveInDb_button = (gcnew System::Windows::Forms::Button());
			this->existance_radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->existance_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->clearFields_button = (gcnew System::Windows::Forms::Button());
			this->bookExistance_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->rating_textBox = (gcnew System::Windows::Forms::TextBox());
			this->bookExistance_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// bookName_label
			// 
			this->bookName_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookName_label->AutoSize = true;
			this->bookName_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bookName_label->Location = System::Drawing::Point(160, 51);
			this->bookName_label->Name = L"bookName_label";
			this->bookName_label->Size = System::Drawing::Size(159, 28);
			this->bookName_label->TabIndex = 0;
			this->bookName_label->Text = L"Название книги";
			// 
			// authorName_label
			// 
			this->authorName_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->authorName_label->AutoSize = true;
			this->authorName_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->authorName_label->Location = System::Drawing::Point(160, 107);
			this->authorName_label->Name = L"authorName_label";
			this->authorName_label->Size = System::Drawing::Size(119, 28);
			this->authorName_label->TabIndex = 1;
			this->authorName_label->Text = L"Имя автора";
			// 
			// bookName_textBox
			// 
			this->bookName_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookName_textBox->Location = System::Drawing::Point(160, 82);
			this->bookName_textBox->Name = L"bookName_textBox";
			this->bookName_textBox->Size = System::Drawing::Size(390, 22);
			this->bookName_textBox->TabIndex = 7;
			// 
			// authorName_textBox
			// 
			this->authorName_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->authorName_textBox->Location = System::Drawing::Point(160, 138);
			this->authorName_textBox->Name = L"authorName_textBox";
			this->authorName_textBox->Size = System::Drawing::Size(390, 22);
			this->authorName_textBox->TabIndex = 8;
			// 
			// publisher_label
			// 
			this->publisher_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->publisher_label->AutoSize = true;
			this->publisher_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->publisher_label->Location = System::Drawing::Point(160, 163);
			this->publisher_label->Name = L"publisher_label";
			this->publisher_label->Size = System::Drawing::Size(136, 28);
			this->publisher_label->TabIndex = 9;
			this->publisher_label->Text = L"Издательство";
			// 
			// publisher_textBox
			// 
			this->publisher_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->publisher_textBox->Location = System::Drawing::Point(160, 194);
			this->publisher_textBox->Name = L"publisher_textBox";
			this->publisher_textBox->Size = System::Drawing::Size(390, 22);
			this->publisher_textBox->TabIndex = 10;
			// 
			// libSection_label
			// 
			this->libSection_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->libSection_label->AutoSize = true;
			this->libSection_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->libSection_label->Location = System::Drawing::Point(160, 219);
			this->libSection_label->Name = L"libSection_label";
			this->libSection_label->Size = System::Drawing::Size(74, 28);
			this->libSection_label->TabIndex = 11;
			this->libSection_label->Text = L"Раздел";
			// 
			// libSection_textBox
			// 
			this->libSection_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->libSection_textBox->Location = System::Drawing::Point(160, 250);
			this->libSection_textBox->Name = L"libSection_textBox";
			this->libSection_textBox->Size = System::Drawing::Size(390, 22);
			this->libSection_textBox->TabIndex = 12;
			// 
			// origin_label
			// 
			this->origin_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->origin_label->AutoSize = true;
			this->origin_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->origin_label->Location = System::Drawing::Point(160, 275);
			this->origin_label->Name = L"origin_label";
			this->origin_label->Size = System::Drawing::Size(162, 28);
			this->origin_label->TabIndex = 13;
			this->origin_label->Text = L"Происхождение";
			// 
			// origin_textBox
			// 
			this->origin_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->origin_textBox->Location = System::Drawing::Point(160, 306);
			this->origin_textBox->Name = L"origin_textBox";
			this->origin_textBox->Size = System::Drawing::Size(390, 22);
			this->origin_textBox->TabIndex = 14;
			// 
			// assessment_label
			// 
			this->assessment_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->assessment_label->AutoSize = true;
			this->assessment_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->assessment_label->Location = System::Drawing::Point(160, 331);
			this->assessment_label->Name = L"assessment_label";
			this->assessment_label->Size = System::Drawing::Size(140, 28);
			this->assessment_label->TabIndex = 15;
			this->assessment_label->Text = L"Оценка книги";
			// 
			// saveInDb_button
			// 
			this->saveInDb_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->saveInDb_button->BackColor = System::Drawing::Color::LightSkyBlue;
			this->saveInDb_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveInDb_button->Location = System::Drawing::Point(160, 478);
			this->saveInDb_button->Name = L"saveInDb_button";
			this->saveInDb_button->Size = System::Drawing::Size(390, 57);
			this->saveInDb_button->TabIndex = 17;
			this->saveInDb_button->Text = L"Сохранить";
			this->saveInDb_button->UseVisualStyleBackColor = false;
			// 
			// existance_radioButton1
			// 
			this->existance_radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->existance_radioButton1->AutoSize = true;
			this->existance_radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->existance_radioButton1->Location = System::Drawing::Point(6, 21);
			this->existance_radioButton1->Name = L"existance_radioButton1";
			this->existance_radioButton1->Size = System::Drawing::Size(135, 24);
			this->existance_radioButton1->TabIndex = 19;
			this->existance_radioButton1->TabStop = true;
			this->existance_radioButton1->Text = L"Есть в наличии";
			this->existance_radioButton1->UseVisualStyleBackColor = true;
			// 
			// existance_radioButton2
			// 
			this->existance_radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->existance_radioButton2->AutoSize = true;
			this->existance_radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->existance_radioButton2->Location = System::Drawing::Point(5, 51);
			this->existance_radioButton2->Name = L"existance_radioButton2";
			this->existance_radioButton2->Size = System::Drawing::Size(131, 24);
			this->existance_radioButton2->TabIndex = 20;
			this->existance_radioButton2->TabStop = true;
			this->existance_radioButton2->Text = L"Нет в наличии";
			this->existance_radioButton2->UseVisualStyleBackColor = true;
			// 
			// clearFields_button
			// 
			this->clearFields_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->clearFields_button->BackColor = System::Drawing::Color::LightCoral;
			this->clearFields_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearFields_button->Location = System::Drawing::Point(160, 541);
			this->clearFields_button->Name = L"clearFields_button";
			this->clearFields_button->Size = System::Drawing::Size(390, 57);
			this->clearFields_button->TabIndex = 21;
			this->clearFields_button->Text = L"Очистить";
			this->clearFields_button->UseVisualStyleBackColor = false;
			// 
			// bookExistance_groupBox
			// 
			this->bookExistance_groupBox->Controls->Add(this->existance_radioButton1);
			this->bookExistance_groupBox->Controls->Add(this->existance_radioButton2);
			this->bookExistance_groupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bookExistance_groupBox->Location = System::Drawing::Point(160, 390);
			this->bookExistance_groupBox->Name = L"bookExistance_groupBox";
			this->bookExistance_groupBox->Size = System::Drawing::Size(200, 82);
			this->bookExistance_groupBox->TabIndex = 22;
			this->bookExistance_groupBox->TabStop = false;
			this->bookExistance_groupBox->Text = L"Наличие";
			// 
			// rating_textBox
			// 
			this->rating_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rating_textBox->Location = System::Drawing::Point(160, 362);
			this->rating_textBox->Name = L"rating_textBox";
			this->rating_textBox->Size = System::Drawing::Size(390, 22);
			this->rating_textBox->TabIndex = 23;
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->ClientSize = System::Drawing::Size(692, 663);
			this->Controls->Add(this->rating_textBox);
			this->Controls->Add(this->bookExistance_groupBox);
			this->Controls->Add(this->clearFields_button);
			this->Controls->Add(this->saveInDb_button);
			this->Controls->Add(this->assessment_label);
			this->Controls->Add(this->origin_textBox);
			this->Controls->Add(this->origin_label);
			this->Controls->Add(this->libSection_textBox);
			this->Controls->Add(this->libSection_label);
			this->Controls->Add(this->publisher_textBox);
			this->Controls->Add(this->publisher_label);
			this->Controls->Add(this->authorName_textBox);
			this->Controls->Add(this->bookName_textBox);
			this->Controls->Add(this->authorName_label);
			this->Controls->Add(this->bookName_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(710, 710);
			this->MinimumSize = System::Drawing::Size(710, 710);
			this->Name = L"EditForm";
			this->Text = L"Изменение книги";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->bookExistance_groupBox->ResumeLayout(false);
			this->bookExistance_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditForm_Load(System::Object^ sender, System::EventArgs^ e) {
		bookExistance_groupBox->Controls->Add(existance_radioButton1);
		bookExistance_groupBox->Controls->Add(existance_radioButton2);
	}
};
}
