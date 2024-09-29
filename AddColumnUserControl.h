#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MyParser;


namespace UnsaintedControls {

	/// <summary>
	/// Сводка для AddColumnUserControl
	/// </summary>
	public ref class AddColumnUserControl : public System::Windows::Forms::UserControl
	{
	public:
		property Column^ column {
			void set(Column^ value) {
				m_column = value;
			}
			Column^ get() {
				return m_column;
			}
		}		
		AddColumnUserControl(void)
		{
			
			InitializeComponent();
			InitializeColumn();
			//
			//TODO: добавьте код конструктора
			//
		}
		

	private: System::Windows::Forms::ImageList^ imageList1;
		   Column^ m_column;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddColumnUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Column_groupBox;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::GroupBox^ Type_groupBox;
	private: System::Windows::Forms::RadioButton^ DropDownMenu_radioButton;
	private: System::Windows::Forms::RadioButton^ DateType_radioButton;
	private: System::Windows::Forms::RadioButton^ TextType_radioButton;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::GroupBox^ Title_groupBox;
	private: System::Windows::Forms::TextBox^ Title_textBox;
	private: System::Windows::Forms::Button^ Delete_button;
	private: System::Windows::Forms::Button^ Up_button;
	private: System::Windows::Forms::Button^ Down_button;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddColumnUserControl::typeid));
			this->Column_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Type_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->DropDownMenu_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->DateType_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->TextType_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Title_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Title_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Delete_button = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Up_button = (gcnew System::Windows::Forms::Button());
			this->Down_button = (gcnew System::Windows::Forms::Button());
			this->Column_groupBox->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->Type_groupBox->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->Title_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// Column_groupBox
			// 
			this->Column_groupBox->AutoSize = true;
			this->Column_groupBox->Controls->Add(this->tableLayoutPanel2);
			this->Column_groupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Column_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column_groupBox->Location = System::Drawing::Point(0, 0);
			this->Column_groupBox->Name = L"Column_groupBox";
			this->Column_groupBox->Size = System::Drawing::Size(810, 158);
			this->Column_groupBox->TabIndex = 1;
			this->Column_groupBox->TabStop = false;
			this->Column_groupBox->Text = L"Колонка";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->AutoSize = true;
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->Type_groupBox, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 25);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel2->Size = System::Drawing::Size(804, 130);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// Type_groupBox
			// 
			this->Type_groupBox->Controls->Add(this->DropDownMenu_radioButton);
			this->Type_groupBox->Controls->Add(this->DateType_radioButton);
			this->Type_groupBox->Controls->Add(this->TextType_radioButton);
			this->Type_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Type_groupBox->Location = System::Drawing::Point(3, 69);
			this->Type_groupBox->Name = L"Type_groupBox";
			this->Type_groupBox->Size = System::Drawing::Size(717, 57);
			this->Type_groupBox->TabIndex = 1;
			this->Type_groupBox->TabStop = false;
			this->Type_groupBox->Text = L"Тип";
			// 
			// DropDownMenu_radioButton
			// 
			this->DropDownMenu_radioButton->AutoSize = true;
			this->DropDownMenu_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->DropDownMenu_radioButton->FlatAppearance->BorderSize = 0;
			this->DropDownMenu_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DropDownMenu_radioButton->Location = System::Drawing::Point(137, 22);
			this->DropDownMenu_radioButton->Name = L"DropDownMenu_radioButton";
			this->DropDownMenu_radioButton->Size = System::Drawing::Size(174, 32);
			this->DropDownMenu_radioButton->TabIndex = 2;
			this->DropDownMenu_radioButton->TabStop = true;
			this->DropDownMenu_radioButton->Text = L"Выпадающее меню";
			this->DropDownMenu_radioButton->UseVisualStyleBackColor = true;
			this->DropDownMenu_radioButton->Click += gcnew System::EventHandler(this, &AddColumnUserControl::Type_radioButton_Click);
			// 
			// DateType_radioButton
			// 
			this->DateType_radioButton->AutoSize = true;
			this->DateType_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->DateType_radioButton->FlatAppearance->BorderSize = 0;
			this->DateType_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DateType_radioButton->Location = System::Drawing::Point(72, 22);
			this->DateType_radioButton->Name = L"DateType_radioButton";
			this->DateType_radioButton->Size = System::Drawing::Size(65, 32);
			this->DateType_radioButton->TabIndex = 1;
			this->DateType_radioButton->TabStop = true;
			this->DateType_radioButton->Text = L"Дата";
			this->DateType_radioButton->UseVisualStyleBackColor = true;
			this->DateType_radioButton->Click += gcnew System::EventHandler(this, &AddColumnUserControl::Type_radioButton_Click);
			// 
			// TextType_radioButton
			// 
			this->TextType_radioButton->AutoSize = true;
			this->TextType_radioButton->Checked = true;
			this->TextType_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->TextType_radioButton->FlatAppearance->BorderSize = 0;
			this->TextType_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TextType_radioButton->Location = System::Drawing::Point(3, 22);
			this->TextType_radioButton->Name = L"TextType_radioButton";
			this->TextType_radioButton->Size = System::Drawing::Size(69, 32);
			this->TextType_radioButton->TabIndex = 0;
			this->TextType_radioButton->TabStop = true;
			this->TextType_radioButton->Text = L"Текст";
			this->TextType_radioButton->UseVisualStyleBackColor = true;
			this->TextType_radioButton->Click += gcnew System::EventHandler(this, &AddColumnUserControl::Type_radioButton_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->AutoSize = true;
			this->tableLayoutPanel3->ColumnCount = 4;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel3->Controls->Add(this->Title_groupBox, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->Delete_button, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->Up_button, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->Down_button, 2, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel3->Size = System::Drawing::Size(798, 60);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// Title_groupBox
			// 
			this->Title_groupBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Title_groupBox.BackgroundImage")));
			this->Title_groupBox->Controls->Add(this->Title_textBox);
			this->Title_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title_groupBox->Location = System::Drawing::Point(3, 3);
			this->Title_groupBox->MinimumSize = System::Drawing::Size(0, 54);
			this->Title_groupBox->Name = L"Title_groupBox";
			this->Title_groupBox->Size = System::Drawing::Size(714, 54);
			this->Title_groupBox->TabIndex = 0;
			this->Title_groupBox->TabStop = false;
			this->Title_groupBox->Text = L"Наименование";
			// 
			// Title_textBox
			// 
			this->Title_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Title_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Title_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title_textBox->Location = System::Drawing::Point(3, 22);
			this->Title_textBox->MinimumSize = System::Drawing::Size(0, 19);
			this->Title_textBox->Name = L"Title_textBox";
			this->Title_textBox->Size = System::Drawing::Size(708, 19);
			this->Title_textBox->TabIndex = 0;
			this->Title_textBox->TextChanged += gcnew System::EventHandler(this, &AddColumnUserControl::Title_textBox_TextChanged);
			// 
			// Delete_button
			// 
			this->Delete_button->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Delete_button->FlatAppearance->BorderSize = 0;
			this->Delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete_button->ImageIndex = 0;
			this->Delete_button->ImageList = this->imageList1;
			this->Delete_button->Location = System::Drawing::Point(775, 37);
			this->Delete_button->MaximumSize = System::Drawing::Size(20, 20);
			this->Delete_button->MinimumSize = System::Drawing::Size(20, 20);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->Size = System::Drawing::Size(20, 20);
			this->Delete_button->TabIndex = 3;
			this->Delete_button->UseVisualStyleBackColor = true;
			this->Delete_button->Click += gcnew System::EventHandler(this, &AddColumnUserControl::Delete_button_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"216340_minus_icon.png");
			this->imageList1->Images->SetKeyName(1, L"216099_up_arrow_icon.png");
			this->imageList1->Images->SetKeyName(2, L"216440_down_arrow_icon.png");
			// 
			// Up_button
			// 
			this->Up_button->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Up_button->FlatAppearance->BorderSize = 0;
			this->Up_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Up_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Up_button->ImageIndex = 1;
			this->Up_button->ImageList = this->imageList1;
			this->Up_button->Location = System::Drawing::Point(723, 37);
			this->Up_button->MaximumSize = System::Drawing::Size(20, 20);
			this->Up_button->MinimumSize = System::Drawing::Size(20, 20);
			this->Up_button->Name = L"Up_button";
			this->Up_button->Size = System::Drawing::Size(20, 20);
			this->Up_button->TabIndex = 4;
			this->Up_button->UseVisualStyleBackColor = true;
			this->Up_button->Click += gcnew System::EventHandler(this, &AddColumnUserControl::Up_button_Click);
			// 
			// Down_button
			// 
			this->Down_button->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Down_button->FlatAppearance->BorderSize = 0;
			this->Down_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Down_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Down_button->ImageIndex = 2;
			this->Down_button->ImageList = this->imageList1;
			this->Down_button->Location = System::Drawing::Point(749, 37);
			this->Down_button->MaximumSize = System::Drawing::Size(20, 20);
			this->Down_button->MinimumSize = System::Drawing::Size(20, 20);
			this->Down_button->Name = L"Down_button";
			this->Down_button->Size = System::Drawing::Size(20, 20);
			this->Down_button->TabIndex = 5;
			this->Down_button->UseVisualStyleBackColor = true;
			this->Down_button->Click += gcnew System::EventHandler(this, &AddColumnUserControl::Down_button_Click);
			// 
			// AddColumnUserControl
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->Column_groupBox);
			this->MinimumSize = System::Drawing::Size(640, 158);
			this->Name = L"AddColumnUserControl";
			this->Size = System::Drawing::Size(810, 158);
			this->Column_groupBox->ResumeLayout(false);
			this->Column_groupBox->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->Type_groupBox->ResumeLayout(false);
			this->Type_groupBox->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->Title_groupBox->ResumeLayout(false);
			this->Title_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: 
	System::Void Type_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
		RadioButton^ button = safe_cast<RadioButton^>(sender);
		if (button->Checked) {
			if (button == TextType_radioButton) {
				m_column->type = "text";
			}
			else if (button == DateType_radioButton) {
				m_column->type = "date";
			}
			else if (button == DropDownMenu_radioButton) {
				m_column->type = "dropdownmenu";
			}
		}
	}
	System::Void InitializeColumn() {
		m_column = gcnew Column();
		m_column->type = "text";
	}
	System::Void Title_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		m_column->title = Title_textBox->Text;
	}	
	private: System::Void Up_button_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = this->Parent->Controls->IndexOf(this);
		if (index > 0) {
			this->Parent->Controls->SetChildIndex(this, index - 1);
		}
		IsFirstOrLastControl();
	}
	private: System::Void Down_button_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = this->Parent->Controls->IndexOf(this);
		if (index >= 0) {
			this->Parent->Controls->SetChildIndex(this, index + 1);
		}
		IsFirstOrLastControl();
	}
	private: System::Void Delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Control^ parent = Parent;
		this->Parent->Controls->Remove(this);
		if (parent->Controls[0]->GetType()->Name == "Button")
			return;
		AddColumnUserControl^ ctrl = safe_cast<AddColumnUserControl^>(parent->Controls[0]);

		ctrl->IsFirstOrLastControl();
	}	
	public: System::Void AddColumnUserControl::IsFirstOrLastControl() {
		for each (Control^ ctrl in Parent->Controls) {
			if (ctrl->GetType()->Name != "AddColumnUserControl")
				continue;
			AddColumnUserControl^ column = safe_cast<AddColumnUserControl^>(ctrl);
			String^ name = column->Name;
			String^ type = column->column->type;
			int index = column->Parent->Controls->IndexOf(column);
			if (index == column->Parent->Controls->Count - 2)
				column->Down_button->Enabled = false;
			else
				column->Down_button->Enabled = true;
			if (index == 0)
				column->Up_button->Enabled = false;
			else {
				column->Up_button->Enabled = true;
			}
		}
	}		   
};
}
