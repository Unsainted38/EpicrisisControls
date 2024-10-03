#pragma once
#include "AddColumnUserControl.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace unsaintedWinAppLib;

namespace UnsaintedControls {

	/// <summary>
	/// Сводка для TableCreatorForm
	/// </summary>
	public ref class TableCreatorForm : public System::Windows::Forms::Form
	{
	public:
		TableCreatorForm(void)
		{
			InitializeComponent();
			AddColumn();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		property RichTextBox^ ParentRichTextBox {
			void set(RichTextBox^ value) {
				parentRichTextBox = value;
			}
			RichTextBox^ get() {
				return parentRichTextBox;
			}
		}
	private:
		RichTextBox^ parentRichTextBox;
		//List<Column^>^ columnsList;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TableCreatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ Columns_groupBox;
	protected:

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::Button^ AddColumn_button;

	private: System::Windows::Forms::Button^ Insert_button;
	private: System::Windows::Forms::Button^ Cancel_button;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Columns_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->AddColumn_button = (gcnew System::Windows::Forms::Button());
			this->Insert_button = (gcnew System::Windows::Forms::Button());
			this->Cancel_button = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Columns_groupBox->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Вставить таблицу";
			// 
			// Columns_groupBox
			// 
			this->Columns_groupBox->AutoSize = true;
			this->Columns_groupBox->Controls->Add(this->flowLayoutPanel1);
			this->Columns_groupBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Columns_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Columns_groupBox->Location = System::Drawing::Point(3, 28);
			this->Columns_groupBox->MaximumSize = System::Drawing::Size(852, 435);
			this->Columns_groupBox->MinimumSize = System::Drawing::Size(852, 259);
			this->Columns_groupBox->Name = L"Columns_groupBox";
			this->Columns_groupBox->Padding = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->Columns_groupBox->Size = System::Drawing::Size(852, 259);
			this->Columns_groupBox->TabIndex = 2;
			this->Columns_groupBox->TabStop = false;
			this->Columns_groupBox->Text = L"Колонки";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->Controls->Add(this->AddColumn_button);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(6, 28);
			this->flowLayoutPanel1->MaximumSize = System::Drawing::Size(838, 396);
			this->flowLayoutPanel1->MinimumSize = System::Drawing::Size(838, 204);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(838, 204);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->WrapContents = false;
			// 
			// AddColumn_button
			// 
			this->AddColumn_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->AddColumn_button->AutoSize = true;
			this->AddColumn_button->FlatAppearance->BorderSize = 0;
			this->AddColumn_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddColumn_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AddColumn_button->Location = System::Drawing::Point(3, 3);
			this->AddColumn_button->Name = L"AddColumn_button";
			this->AddColumn_button->Size = System::Drawing::Size(200, 34);
			this->AddColumn_button->TabIndex = 1;
			this->AddColumn_button->Text = L"+ Добавить колонку";
			this->AddColumn_button->UseVisualStyleBackColor = true;
			this->AddColumn_button->Click += gcnew System::EventHandler(this, &TableCreatorForm::AddColumn_button_Click);
			// 
			// Insert_button
			// 
			this->Insert_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Insert_button->AutoSize = true;
			this->Insert_button->FlatAppearance->BorderSize = 0;
			this->Insert_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Insert_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Insert_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Insert_button->Location = System::Drawing::Point(114, 3);
			this->Insert_button->Name = L"Insert_button";
			this->Insert_button->Size = System::Drawing::Size(105, 34);
			this->Insert_button->TabIndex = 3;
			this->Insert_button->Text = L"Вставить";
			this->Insert_button->UseVisualStyleBackColor = true;
			this->Insert_button->Click += gcnew System::EventHandler(this, &TableCreatorForm::Insert_button_Click);
			// 
			// Cancel_button
			// 
			this->Cancel_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Cancel_button->AutoSize = true;
			this->Cancel_button->FlatAppearance->BorderSize = 0;
			this->Cancel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Cancel_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Cancel_button->Location = System::Drawing::Point(3, 3);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(105, 34);
			this->Cancel_button->TabIndex = 4;
			this->Cancel_button->Text = L"Отмена";
			this->Cancel_button->UseVisualStyleBackColor = true;
			this->Cancel_button->Click += gcnew System::EventHandler(this, &TableCreatorForm::Cancel_button_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoSize = true;
			this->flowLayoutPanel2->Controls->Add(this->label1);
			this->flowLayoutPanel2->Controls->Add(this->Columns_groupBox);
			this->flowLayoutPanel2->Controls->Add(this->flowLayoutPanel3);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->MaximumSize = System::Drawing::Size(860, 526);
			this->flowLayoutPanel2->MinimumSize = System::Drawing::Size(860, 354);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(860, 354);
			this->flowLayoutPanel2->TabIndex = 5;
			this->flowLayoutPanel2->WrapContents = false;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel3->AutoSize = true;
			this->flowLayoutPanel3->Controls->Add(this->Cancel_button);
			this->flowLayoutPanel3->Controls->Add(this->Insert_button);
			this->flowLayoutPanel3->Location = System::Drawing::Point(633, 293);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(222, 40);
			this->flowLayoutPanel3->TabIndex = 5;
			// 
			// TableCreatorForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(860, 354);
			this->Controls->Add(this->flowLayoutPanel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(860, 526);
			this->MinimumSize = System::Drawing::Size(860, 354);
			this->Name = L"TableCreatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TableCreatorForm";
			this->Columns_groupBox->ResumeLayout(false);
			this->Columns_groupBox->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddColumn_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AddColumn();
	}
	private: System::Void AddColumn() {
		AddColumnUserControl^ column = gcnew AddColumnUserControl();
		this->flowLayoutPanel1->Controls->Remove(AddColumn_button);
		this->flowLayoutPanel1->Controls->Add(column);
		this->flowLayoutPanel1->Controls->Add(AddColumn_button);
		column->IsFirstOrLastControl();
	}
	private: System::Void Cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: bool AnalyzeColumns(List<Column^>^ columnsList) {
		// Строки для ошибк
		String^ errorBlankTitle = "Невозможно создать пустую колонку:\n";
		String^ errorSameColTitle = "Невозможно создать две одинаковые колонки:\n";

		// Флаги, чтобы понять, нужно ли выводить сообщение
		bool hasEmptyTitle = false;
		bool hasDuplicateTitle = false;

		// Словарь для отслеживания дубликатов по title
		Dictionary<String^, List<int>^>^ titleDict = gcnew Dictionary<String^, List<int>^>();

		// Проход по списку колонок
		for (int i = 0; i < columnsList->Count; i++) {
			Column^ column = columnsList[i];

			// Проверка на пустое название колонки
			if (String::IsNullOrEmpty(column->title)) {
				errorBlankTitle += "Колонка №" + (i + 1) + "\n";
				hasEmptyTitle = true;
				continue;
			}

			// Проверка на дубликаты названий
			if (titleDict->ContainsKey(column->title)) {
				titleDict[column->title]->Add(i + 1); // Добавляем индекс колонки (i + 1)
				hasDuplicateTitle = true;
			}
			else {
				titleDict[column->title] = gcnew List<int>();
				titleDict[column->title]->Add(i + 1);
			}
		}

		// Формируем сообщение о дубликатах, если они есть
		if (hasDuplicateTitle) {
			for each (KeyValuePair<String^, List<int>^> ^ entry in titleDict) {
				if (entry->Value->Count > 1) {
					errorSameColTitle += "Колонки №";
					for each (int index in entry->Value) {
						errorSameColTitle += index + ", ";
					}
					// Удаляем лишнюю запятую и пробел
					errorSameColTitle = errorSameColTitle->TrimEnd(',', ' ') + ";\n";
				}
			}
		}

		// Если есть ошибки, выводим сообщение
		if (hasEmptyTitle || hasDuplicateTitle) {
			String^ errorMessage = "";
			if (hasEmptyTitle) errorMessage += errorBlankTitle + "\n";
			if (hasDuplicateTitle) errorMessage += errorSameColTitle;

			MessageBox::Show(errorMessage, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return true;
		}
		return false;
	}
	private: System::Void Insert_button_Click(System::Object^ sender, System::EventArgs^ e) {
		auto columnsList = gcnew List<Column^>();
		for each (Control ^ ctrl in flowLayoutPanel1->Controls) {
			if (dynamic_cast<AddColumnUserControl^>(ctrl)) {
				AddColumnUserControl^ addColumnControl = dynamic_cast<AddColumnUserControl^>(ctrl);
				columnsList->Add(addColumnControl->column);
			}
		}
		if (AnalyzeColumns(columnsList))
			return;
		Parser^ parser = gcnew Parser();
		parser->DeserializedItems->Add(parser->GenerateTableByColumns(columnsList));
		RtfDocumentCreator^ rtfCreator = gcnew RtfDocumentCreator(parser, parentRichTextBox);
		parentRichTextBox->Rtf = rtfCreator->GetRtfDocument();
		this->Close();
	}
	private: List<int>^ Find(Column^ col, List<Column^>^ colList) {
		List<int>^ items = gcnew List<int>();
		for each (Column ^ column in colList) {
			if (col->title == column->title)
				items->Add(colList->IndexOf(column));
		}
		return items;
	}
	};
}






