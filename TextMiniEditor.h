#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UnsaintedControls {

	/// <summary>
	/// ������ ��� TextMiniEditor
	/// </summary>
	public ref class TextMiniEditor : public System::Windows::Forms::UserControl
	{
	public:
		TextMiniEditor(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~TextMiniEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ TextMiniEditor_tableLayoutPanel;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox;
	private: System::Windows::Forms::FlowLayoutPanel^ TextMiniEditor_flowLayoutPanel;
	private: System::Windows::Forms::NumericUpDown^ Fontsize_numericUpDown;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl1;
	private: System::Windows::Forms::Button^ Bold_button;
	private: System::Windows::Forms::Button^ Italic_button;
	private: System::Windows::Forms::Button^ Underline_button;
	private: System::Windows::Forms::Button^ Uppercase_button;
	private: System::Windows::Forms::Button^ Lowercase_button;
	private: System::Windows::Forms::Button^ Unker_button;
	private: System::Windows::Forms::Button^ NumList_button;
	private: System::Windows::Forms::Button^ DotList_button;
	private: System::Windows::Forms::Button^ CleanFormat_button;
	private: System::Windows::Forms::Button^ LeftAlign_button;
	private: System::Windows::Forms::Button^ CenterAlign_button;
	private: System::Windows::Forms::Button^ RightAlign_button;
	private: System::Windows::Forms::Button^ WideAlign_button;
	private: System::Windows::Forms::Button^ Date_button;
	private: System::Windows::Forms::Button^ DropDownMenu_button;
	private: System::Windows::Forms::Button^ Table_button;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl3;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl2;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TextMiniEditor_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->TextMiniEditor_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Fontsize_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->separatorControl1 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->Bold_button = (gcnew System::Windows::Forms::Button());
			this->Italic_button = (gcnew System::Windows::Forms::Button());
			this->Underline_button = (gcnew System::Windows::Forms::Button());
			this->Uppercase_button = (gcnew System::Windows::Forms::Button());
			this->Lowercase_button = (gcnew System::Windows::Forms::Button());
			this->Unker_button = (gcnew System::Windows::Forms::Button());
			this->NumList_button = (gcnew System::Windows::Forms::Button());
			this->DotList_button = (gcnew System::Windows::Forms::Button());
			this->CleanFormat_button = (gcnew System::Windows::Forms::Button());
			this->separatorControl3 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->LeftAlign_button = (gcnew System::Windows::Forms::Button());
			this->CenterAlign_button = (gcnew System::Windows::Forms::Button());
			this->RightAlign_button = (gcnew System::Windows::Forms::Button());
			this->WideAlign_button = (gcnew System::Windows::Forms::Button());
			this->separatorControl2 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->Date_button = (gcnew System::Windows::Forms::Button());
			this->DropDownMenu_button = (gcnew System::Windows::Forms::Button());
			this->Table_button = (gcnew System::Windows::Forms::Button());
			this->TextMiniEditor_tableLayoutPanel->SuspendLayout();
			this->TextMiniEditor_flowLayoutPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fontsize_numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl2))->BeginInit();
			this->SuspendLayout();
			// 
			// TextMiniEditor_tableLayoutPanel
			// 
			this->TextMiniEditor_tableLayoutPanel->AutoSize = true;
			this->TextMiniEditor_tableLayoutPanel->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->TextMiniEditor_tableLayoutPanel->ColumnCount = 1;
			this->TextMiniEditor_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->TextMiniEditor_tableLayoutPanel->Controls->Add(this->richTextBox, 0, 1);
			this->TextMiniEditor_tableLayoutPanel->Controls->Add(this->TextMiniEditor_flowLayoutPanel, 0, 0);
			this->TextMiniEditor_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TextMiniEditor_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->TextMiniEditor_tableLayoutPanel->Name = L"TextMiniEditor_tableLayoutPanel";
			this->TextMiniEditor_tableLayoutPanel->RowCount = 2;
			this->TextMiniEditor_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->TextMiniEditor_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->TextMiniEditor_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->TextMiniEditor_tableLayoutPanel->Size = System::Drawing::Size(800, 170);
			this->TextMiniEditor_tableLayoutPanel->TabIndex = 1;
			// 
			// richTextBox
			// 
			this->richTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox->Location = System::Drawing::Point(4, 53);
			this->richTextBox->Name = L"richTextBox";
			this->richTextBox->RightMargin = 785;
			this->richTextBox->Size = System::Drawing::Size(792, 113);
			this->richTextBox->TabIndex = 0;
			this->richTextBox->Text = L"";
			this->richTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TextMiniEditor::richTextBox_KeyDown);
			// 
			// TextMiniEditor_flowLayoutPanel
			// 
			this->TextMiniEditor_flowLayoutPanel->AutoSize = true;
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Fontsize_numericUpDown);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->separatorControl1);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Bold_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Italic_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Underline_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Uppercase_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Lowercase_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Unker_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->NumList_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->DotList_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->CleanFormat_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->separatorControl3);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->LeftAlign_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->CenterAlign_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->RightAlign_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->WideAlign_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->separatorControl2);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Date_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->DropDownMenu_button);
			this->TextMiniEditor_flowLayoutPanel->Controls->Add(this->Table_button);
			this->TextMiniEditor_flowLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TextMiniEditor_flowLayoutPanel->Location = System::Drawing::Point(1, 1);
			this->TextMiniEditor_flowLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->TextMiniEditor_flowLayoutPanel->Name = L"TextMiniEditor_flowLayoutPanel";
			this->TextMiniEditor_flowLayoutPanel->Size = System::Drawing::Size(798, 48);
			this->TextMiniEditor_flowLayoutPanel->TabIndex = 1;
			// 
			// Fontsize_numericUpDown
			// 
			this->Fontsize_numericUpDown->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Fontsize_numericUpDown->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Fontsize_numericUpDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Fontsize_numericUpDown->Location = System::Drawing::Point(6, 10);
			this->Fontsize_numericUpDown->Margin = System::Windows::Forms::Padding(6, 10, 3, 0);
			this->Fontsize_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 72, 0, 0, 0 });
			this->Fontsize_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Fontsize_numericUpDown->Name = L"Fontsize_numericUpDown";
			this->Fontsize_numericUpDown->Size = System::Drawing::Size(48, 28);
			this->Fontsize_numericUpDown->TabIndex = 0;
			this->Fontsize_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			this->Fontsize_numericUpDown->ValueChanged += gcnew System::EventHandler(this, &TextMiniEditor::Fontsize_numericUpDown_ValueChanged);
			// 
			// separatorControl1
			// 
			this->separatorControl1->AutoSizeMode = true;
			this->separatorControl1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->separatorControl1->Dock = System::Windows::Forms::DockStyle::Left;
			this->separatorControl1->LineOrientation = System::Windows::Forms::Orientation::Vertical;
			this->separatorControl1->LineThickness = 2;
			this->separatorControl1->Location = System::Drawing::Point(57, 0);
			this->separatorControl1->Margin = System::Windows::Forms::Padding(0);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Padding = System::Windows::Forms::Padding(0);
			this->separatorControl1->Size = System::Drawing::Size(2, 48);
			this->separatorControl1->TabIndex = 20;
			// 
			// Bold_button
			// 
			this->Bold_button->AutoSize = true;
			this->Bold_button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Bold_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Bold_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Bold_button->FlatAppearance->BorderSize = 0;
			this->Bold_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Bold_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bold_button->ForeColor = System::Drawing::Color::Black;
			this->Bold_button->Location = System::Drawing::Point(62, 6);
			this->Bold_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Bold_button->Name = L"Bold_button";
			this->Bold_button->Size = System::Drawing::Size(36, 36);
			this->Bold_button->TabIndex = 2;
			this->Bold_button->TabStop = false;
			this->Bold_button->Text = L"B";
			this->Bold_button->UseVisualStyleBackColor = false;
			this->Bold_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Bold_button_Click);
			// 
			// Italic_button
			// 
			this->Italic_button->AutoSize = true;
			this->Italic_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Italic_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Italic_button->FlatAppearance->BorderSize = 0;
			this->Italic_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Italic_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Italic_button->Location = System::Drawing::Point(104, 6);
			this->Italic_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Italic_button->Name = L"Italic_button";
			this->Italic_button->Size = System::Drawing::Size(36, 36);
			this->Italic_button->TabIndex = 3;
			this->Italic_button->TabStop = false;
			this->Italic_button->Text = L"I";
			this->Italic_button->UseVisualStyleBackColor = true;
			this->Italic_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Italic_button_Click);
			// 
			// Underline_button
			// 
			this->Underline_button->AutoSize = true;
			this->Underline_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Underline_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Underline_button->FlatAppearance->BorderSize = 0;
			this->Underline_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Underline_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Underline_button->Location = System::Drawing::Point(146, 6);
			this->Underline_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Underline_button->Name = L"Underline_button";
			this->Underline_button->Size = System::Drawing::Size(36, 36);
			this->Underline_button->TabIndex = 4;
			this->Underline_button->TabStop = false;
			this->Underline_button->Text = L"U";
			this->Underline_button->UseVisualStyleBackColor = true;
			this->Underline_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Underline_button_Click);
			// 
			// Uppercase_button
			// 
			this->Uppercase_button->AutoSize = true;
			this->Uppercase_button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Uppercase_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Uppercase_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Uppercase_button->FlatAppearance->BorderSize = 0;
			this->Uppercase_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Uppercase_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Uppercase_button->Location = System::Drawing::Point(188, 6);
			this->Uppercase_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Uppercase_button->Name = L"Uppercase_button";
			this->Uppercase_button->Size = System::Drawing::Size(35, 36);
			this->Uppercase_button->TabIndex = 5;
			this->Uppercase_button->TabStop = false;
			this->Uppercase_button->Text = L"X";
			this->Uppercase_button->UseVisualStyleBackColor = false;
			this->Uppercase_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Uppercase_button_Click);
			// 
			// Lowercase_button
			// 
			this->Lowercase_button->AutoSize = true;
			this->Lowercase_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Lowercase_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Lowercase_button->FlatAppearance->BorderSize = 0;
			this->Lowercase_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Lowercase_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lowercase_button->Location = System::Drawing::Point(229, 6);
			this->Lowercase_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Lowercase_button->Name = L"Lowercase_button";
			this->Lowercase_button->Size = System::Drawing::Size(35, 36);
			this->Lowercase_button->TabIndex = 6;
			this->Lowercase_button->TabStop = false;
			this->Lowercase_button->Text = L"X";
			this->Lowercase_button->UseVisualStyleBackColor = true;
			this->Lowercase_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Lowercase_button_Click);
			// 
			// Unker_button
			// 
			this->Unker_button->AutoSize = true;
			this->Unker_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Unker_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Unker_button->FlatAppearance->BorderSize = 0;
			this->Unker_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Unker_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Unker_button->Location = System::Drawing::Point(270, 6);
			this->Unker_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Unker_button->Name = L"Unker_button";
			this->Unker_button->Size = System::Drawing::Size(36, 36);
			this->Unker_button->TabIndex = 7;
			this->Unker_button->TabStop = false;
			this->Unker_button->Text = L"B";
			this->Unker_button->UseVisualStyleBackColor = true;
			this->Unker_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Unker_button_Click);
			// 
			// NumList_button
			// 
			this->NumList_button->AutoSize = true;
			this->NumList_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->NumList_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->NumList_button->FlatAppearance->BorderSize = 0;
			this->NumList_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NumList_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NumList_button->Location = System::Drawing::Point(312, 6);
			this->NumList_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->NumList_button->Name = L"NumList_button";
			this->NumList_button->Size = System::Drawing::Size(36, 36);
			this->NumList_button->TabIndex = 8;
			this->NumList_button->TabStop = false;
			this->NumList_button->Text = L"B";
			this->NumList_button->UseVisualStyleBackColor = true;
			this->NumList_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::NumList_button_Click);
			// 
			// DotList_button
			// 
			this->DotList_button->AutoSize = true;
			this->DotList_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->DotList_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->DotList_button->FlatAppearance->BorderSize = 0;
			this->DotList_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DotList_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DotList_button->Location = System::Drawing::Point(354, 6);
			this->DotList_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->DotList_button->Name = L"DotList_button";
			this->DotList_button->Size = System::Drawing::Size(36, 36);
			this->DotList_button->TabIndex = 9;
			this->DotList_button->TabStop = false;
			this->DotList_button->Text = L"B";
			this->DotList_button->UseVisualStyleBackColor = true;
			this->DotList_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::DotList_button_Click);
			// 
			// CleanFormat_button
			// 
			this->CleanFormat_button->AutoSize = true;
			this->CleanFormat_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->CleanFormat_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->CleanFormat_button->FlatAppearance->BorderSize = 0;
			this->CleanFormat_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CleanFormat_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CleanFormat_button->Location = System::Drawing::Point(396, 6);
			this->CleanFormat_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->CleanFormat_button->Name = L"CleanFormat_button";
			this->CleanFormat_button->Size = System::Drawing::Size(36, 36);
			this->CleanFormat_button->TabIndex = 10;
			this->CleanFormat_button->TabStop = false;
			this->CleanFormat_button->Text = L"B";
			this->CleanFormat_button->UseVisualStyleBackColor = true;
			this->CleanFormat_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::CleanFormat_button_Click);
			// 
			// separatorControl3
			// 
			this->separatorControl3->AutoSizeMode = true;
			this->separatorControl3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->separatorControl3->LineOrientation = System::Windows::Forms::Orientation::Vertical;
			this->separatorControl3->LineThickness = 2;
			this->separatorControl3->Location = System::Drawing::Point(435, 0);
			this->separatorControl3->Margin = System::Windows::Forms::Padding(0);
			this->separatorControl3->Name = L"separatorControl3";
			this->separatorControl3->Padding = System::Windows::Forms::Padding(0);
			this->separatorControl3->Size = System::Drawing::Size(2, 48);
			this->separatorControl3->TabIndex = 22;
			// 
			// LeftAlign_button
			// 
			this->LeftAlign_button->AutoSize = true;
			this->LeftAlign_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->LeftAlign_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->LeftAlign_button->FlatAppearance->BorderSize = 0;
			this->LeftAlign_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LeftAlign_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LeftAlign_button->Location = System::Drawing::Point(440, 6);
			this->LeftAlign_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->LeftAlign_button->Name = L"LeftAlign_button";
			this->LeftAlign_button->Size = System::Drawing::Size(36, 36);
			this->LeftAlign_button->TabIndex = 12;
			this->LeftAlign_button->TabStop = false;
			this->LeftAlign_button->Text = L"B";
			this->LeftAlign_button->UseVisualStyleBackColor = true;
			this->LeftAlign_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::LeftAlign_button_Click);
			// 
			// CenterAlign_button
			// 
			this->CenterAlign_button->AutoSize = true;
			this->CenterAlign_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->CenterAlign_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->CenterAlign_button->FlatAppearance->BorderSize = 0;
			this->CenterAlign_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CenterAlign_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CenterAlign_button->Location = System::Drawing::Point(482, 6);
			this->CenterAlign_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->CenterAlign_button->Name = L"CenterAlign_button";
			this->CenterAlign_button->Size = System::Drawing::Size(36, 36);
			this->CenterAlign_button->TabIndex = 13;
			this->CenterAlign_button->TabStop = false;
			this->CenterAlign_button->Text = L"B";
			this->CenterAlign_button->UseVisualStyleBackColor = true;
			this->CenterAlign_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::CenterAlign_button_Click);
			// 
			// RightAlign_button
			// 
			this->RightAlign_button->AutoSize = true;
			this->RightAlign_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->RightAlign_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->RightAlign_button->FlatAppearance->BorderSize = 0;
			this->RightAlign_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RightAlign_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RightAlign_button->Location = System::Drawing::Point(524, 6);
			this->RightAlign_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->RightAlign_button->Name = L"RightAlign_button";
			this->RightAlign_button->Size = System::Drawing::Size(36, 36);
			this->RightAlign_button->TabIndex = 14;
			this->RightAlign_button->TabStop = false;
			this->RightAlign_button->Text = L"B";
			this->RightAlign_button->UseVisualStyleBackColor = true;
			this->RightAlign_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::RightAlign_button_Click);
			// 
			// WideAlign_button
			// 
			this->WideAlign_button->AutoSize = true;
			this->WideAlign_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->WideAlign_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->WideAlign_button->FlatAppearance->BorderSize = 0;
			this->WideAlign_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->WideAlign_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->WideAlign_button->Location = System::Drawing::Point(566, 6);
			this->WideAlign_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->WideAlign_button->Name = L"WideAlign_button";
			this->WideAlign_button->Size = System::Drawing::Size(36, 36);
			this->WideAlign_button->TabIndex = 15;
			this->WideAlign_button->TabStop = false;
			this->WideAlign_button->Text = L"B";
			this->WideAlign_button->UseVisualStyleBackColor = true;
			this->WideAlign_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::WideAlign_button_Click);
			// 
			// separatorControl2
			// 
			this->separatorControl2->AutoSizeMode = true;
			this->separatorControl2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->separatorControl2->LineOrientation = System::Windows::Forms::Orientation::Vertical;
			this->separatorControl2->LineThickness = 2;
			this->separatorControl2->Location = System::Drawing::Point(605, 0);
			this->separatorControl2->Margin = System::Windows::Forms::Padding(0);
			this->separatorControl2->Name = L"separatorControl2";
			this->separatorControl2->Padding = System::Windows::Forms::Padding(0);
			this->separatorControl2->Size = System::Drawing::Size(2, 48);
			this->separatorControl2->TabIndex = 21;
			// 
			// Date_button
			// 
			this->Date_button->AutoSize = true;
			this->Date_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Date_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Date_button->FlatAppearance->BorderSize = 0;
			this->Date_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Date_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Date_button->Location = System::Drawing::Point(610, 6);
			this->Date_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Date_button->Name = L"Date_button";
			this->Date_button->Size = System::Drawing::Size(36, 36);
			this->Date_button->TabIndex = 17;
			this->Date_button->TabStop = false;
			this->Date_button->Text = L"B";
			this->Date_button->UseVisualStyleBackColor = true;
			this->Date_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Date_button_Click);
			// 
			// DropDownMenu_button
			// 
			this->DropDownMenu_button->AutoSize = true;
			this->DropDownMenu_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->DropDownMenu_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->DropDownMenu_button->FlatAppearance->BorderSize = 0;
			this->DropDownMenu_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DropDownMenu_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DropDownMenu_button->Location = System::Drawing::Point(652, 6);
			this->DropDownMenu_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->DropDownMenu_button->Name = L"DropDownMenu_button";
			this->DropDownMenu_button->Size = System::Drawing::Size(36, 36);
			this->DropDownMenu_button->TabIndex = 18;
			this->DropDownMenu_button->TabStop = false;
			this->DropDownMenu_button->Text = L"B";
			this->DropDownMenu_button->UseVisualStyleBackColor = true;
			this->DropDownMenu_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::DropDownMenu_button_Click);
			// 
			// Table_button
			// 
			this->Table_button->AutoSize = true;
			this->Table_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->Table_button->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->Table_button->FlatAppearance->BorderSize = 0;
			this->Table_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Table_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Table_button->Location = System::Drawing::Point(694, 6);
			this->Table_button->Margin = System::Windows::Forms::Padding(3, 6, 3, 6);
			this->Table_button->Name = L"Table_button";
			this->Table_button->Size = System::Drawing::Size(36, 36);
			this->Table_button->TabIndex = 19;
			this->Table_button->TabStop = false;
			this->Table_button->Text = L"B";
			this->Table_button->UseVisualStyleBackColor = true;
			this->Table_button->Click += gcnew System::EventHandler(this, &TextMiniEditor::Table_button_Click);
			// 
			// TextMiniEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->TextMiniEditor_tableLayoutPanel);
			this->MinimumSize = System::Drawing::Size(800, 170);
			this->Name = L"TextMiniEditor";
			this->Size = System::Drawing::Size(800, 170);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TextMiniEditor::TextMiniEditor_KeyDown);
			this->TextMiniEditor_tableLayoutPanel->ResumeLayout(false);
			this->TextMiniEditor_tableLayoutPanel->PerformLayout();
			this->TextMiniEditor_flowLayoutPanel->ResumeLayout(false);
			this->TextMiniEditor_flowLayoutPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Fontsize_numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void ToggleFontStyle(FontStyle style) {
	System::Drawing::Font^ currentFont = richTextBox->SelectionFont;
	if (currentFont != nullptr)
	{
		FontStyle newStyle;
		if (currentFont->Style.HasFlag(style))
			newStyle = currentFont->Style & ~style;
		else
			newStyle = currentFont->Style | style;

		richTextBox->SelectionFont = gcnew System::Drawing::Font(currentFont, newStyle);
	}
	
}
private: System::Void Bold_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	ToggleFontStyle(FontStyle::Bold);
}
private: System::Void Italic_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	ToggleFontStyle(FontStyle::Italic);
}
private: System::Void Underline_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	ToggleFontStyle(FontStyle::Underline);
}
private: System::Void Uppercase_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	if (richTextBox->SelectionCharOffset == 0) {
		richTextBox->SelectionCharOffset = 10;
	}
	else
		richTextBox->SelectionCharOffset = 0;
}
private: System::Void Lowercase_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	if (richTextBox->SelectionCharOffset == 0)
		richTextBox->SelectionCharOffset = -10;
	else
		richTextBox->SelectionCharOffset = 0;
}
private: System::Void Unker_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	
}
private: System::Void NumList_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
}
private: System::Void DotList_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
}
private: System::Void CleanFormat_button_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox->SelectionFont = gcnew System::Drawing::Font(richTextBox->SelectionFont, FontStyle::Regular);
	richTextBox->SelectionCharOffset = 0;
}
private: System::Void LeftAlign_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	CenterAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	RightAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	WideAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	richTextBox->SelectionAlignment = HorizontalAlignment::Left;
}
private: System::Void CenterAlign_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	RightAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	LeftAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	WideAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	richTextBox->SelectionAlignment = HorizontalAlignment::Center;
}
private: System::Void RightAlign_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	CenterAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	LeftAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	WideAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	richTextBox->SelectionAlignment = HorizontalAlignment::Right;
}
private: System::Void WideAlign_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Toolbar_button_Click(sender);
	CenterAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	LeftAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	RightAlign_button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	//richTextBox. = System::Windows::TextAlignment::Justify;
}
private: System::Void Date_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DropDownMenu_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Table_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Toolbar_button_Click(System::Object^ sender) {
	Button^ button = safe_cast<Button^>(sender);
	if (button->BackColor != Color::FromKnownColor(KnownColor::AppWorkspace))
		button->BackColor = Color::FromKnownColor(KnownColor::AppWorkspace);
	else
		button->BackColor = Color::FromKnownColor(KnownColor::ControlLightLight);
	richTextBox->Focus();
}
private: System::Void Fontsize_numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ currentFont = richTextBox->SelectionFont;
	if (currentFont != nullptr) {
		System::Drawing::FontStyle oldStyle = currentFont->Style;
		float newSize = (float)safe_cast<NumericUpDown^>(sender)->Value;
		System::Drawing::FontFamily^ oldFamily = currentFont->FontFamily;
		richTextBox->SelectionFont = gcnew System::Drawing::Font(oldFamily, newSize, oldStyle);
	}
	richTextBox->Focus();
}
private: System::Void TextMiniEditor_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->Control && (e->KeyCode == Keys::B)) {
		Toolbar_button_Click(sender);
		ToggleFontStyle(FontStyle::Bold);
	}
	if (e->Control && (e->KeyCode == Keys::I)) {
		Toolbar_button_Click(sender);
		ToggleFontStyle(FontStyle::Italic);
	}
	if (e->Control && (e->KeyCode == Keys::U)) {
		Toolbar_button_Click(sender);
		ToggleFontStyle(FontStyle::Underline);
	}
}
private: System::Void richTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->Control && (e->KeyCode == Keys::B)) {
		Toolbar_button_Click(Bold_button);
		ToggleFontStyle(FontStyle::Bold);
	}
	if (e->Control && (e->KeyCode == Keys::I)) {
		Toolbar_button_Click(Italic_button);
		ToggleFontStyle(FontStyle::Italic);
	}
	if (e->Control && (e->KeyCode == Keys::U)) {
		Toolbar_button_Click(Underline_button);
		ToggleFontStyle(FontStyle::Underline);
	}
}
};
}
