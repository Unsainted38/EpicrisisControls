#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UnsaintedControls {

	/// <summary>
	/// Сводка для DocNotesBasePanel
	/// </summary>
	public ref class DocNotesBasePanel : public System::Windows::Forms::UserControl
	{
		List<Panel^>^ PagePanelsList;
	public:
		DocNotesBasePanel(void)
		{
			InitializeComponent();

			InitializeData();

			InitializeInterface();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DocNotesBasePanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ Base_tableLayoutPanel;
	private: System::Windows::Forms::TableLayoutPanel^ Header_tableLayoutPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ HeaderLeft_flowLayoutPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ HeaderRight_flowLayoutPanel;

	private: System::Windows::Forms::GroupBox^ Surname_groupBox;
	private: System::Windows::Forms::ComboBox^ Surname_comboBox;
	private: System::Windows::Forms::GroupBox^ CheckDate_groupBox;
	private: System::Windows::Forms::DateTimePicker^ CheckDate_dateTimePicker;


	private: System::Windows::Forms::GroupBox^ CheckTime_groupBox;
	private: System::Windows::Forms::DateTimePicker^ CheckTime_dateTimePicker;


	private: System::Windows::Forms::Button^ FirstList_button;

	private: System::Windows::Forms::Button^ DocNotes_button;


	private: System::Windows::Forms::Button^ Clear_button;
	private: System::Windows::Forms::TableLayoutPanel^ Footer_tableLayoutPanel;

	private: System::Windows::Forms::Button^ Home_button;
	private: System::Windows::Forms::Button^ ResearchPlan_button;


	private: System::Windows::Forms::Button^ Diagnosis_button;

	private: System::Windows::Forms::Button^ StatusLocalis_button;

	private: System::Windows::Forms::Button^ FirstCheck_button;

	private: System::Windows::Forms::Button^ Anamnesis2_button;

	private: System::Windows::Forms::Button^ Anamnesis_button;

	private: System::Windows::Forms::Button^ Jaloba_button;
	private: System::Windows::Forms::Label^ ResearchPlan_label;


	private: System::Windows::Forms::Label^ Diagnosis_label;

	private: System::Windows::Forms::Label^ StatusLocalis_label;

	private: System::Windows::Forms::Label^ FirstCheck_label;

	private: System::Windows::Forms::Label^ Anamnesis2_label;

	private: System::Windows::Forms::Label^ Anamnesis_label;

	private: System::Windows::Forms::Label^ Jaloba_label;








	protected:

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Base_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Header_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->HeaderLeft_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Surname_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Surname_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->CheckDate_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->CheckDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->CheckTime_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->CheckTime_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->HeaderRight_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->FirstList_button = (gcnew System::Windows::Forms::Button());
			this->DocNotes_button = (gcnew System::Windows::Forms::Button());
			this->Clear_button = (gcnew System::Windows::Forms::Button());
			this->Footer_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ResearchPlan_label = (gcnew System::Windows::Forms::Label());
			this->Diagnosis_label = (gcnew System::Windows::Forms::Label());
			this->StatusLocalis_label = (gcnew System::Windows::Forms::Label());
			this->FirstCheck_label = (gcnew System::Windows::Forms::Label());
			this->Anamnesis2_label = (gcnew System::Windows::Forms::Label());
			this->Anamnesis_label = (gcnew System::Windows::Forms::Label());
			this->Jaloba_label = (gcnew System::Windows::Forms::Label());
			this->Home_button = (gcnew System::Windows::Forms::Button());
			this->ResearchPlan_button = (gcnew System::Windows::Forms::Button());
			this->Diagnosis_button = (gcnew System::Windows::Forms::Button());
			this->StatusLocalis_button = (gcnew System::Windows::Forms::Button());
			this->FirstCheck_button = (gcnew System::Windows::Forms::Button());
			this->Anamnesis2_button = (gcnew System::Windows::Forms::Button());
			this->Anamnesis_button = (gcnew System::Windows::Forms::Button());
			this->Jaloba_button = (gcnew System::Windows::Forms::Button());
			this->Base_tableLayoutPanel->SuspendLayout();
			this->Header_tableLayoutPanel->SuspendLayout();
			this->HeaderLeft_flowLayoutPanel->SuspendLayout();
			this->Surname_groupBox->SuspendLayout();
			this->CheckDate_groupBox->SuspendLayout();
			this->CheckTime_groupBox->SuspendLayout();
			this->HeaderRight_flowLayoutPanel->SuspendLayout();
			this->Footer_tableLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Base_tableLayoutPanel
			// 
			this->Base_tableLayoutPanel->ColumnCount = 1;
			this->Base_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Base_tableLayoutPanel->Controls->Add(this->Header_tableLayoutPanel, 0, 0);
			this->Base_tableLayoutPanel->Controls->Add(this->Footer_tableLayoutPanel, 0, 2);
			this->Base_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Base_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->Base_tableLayoutPanel->Name = L"Base_tableLayoutPanel";
			this->Base_tableLayoutPanel->RowCount = 3;
			this->Base_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Base_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Base_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Base_tableLayoutPanel->Size = System::Drawing::Size(1074, 530);
			this->Base_tableLayoutPanel->TabIndex = 0;
			// 
			// Header_tableLayoutPanel
			// 
			this->Header_tableLayoutPanel->AutoSize = true;
			this->Header_tableLayoutPanel->ColumnCount = 2;
			this->Header_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Header_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Header_tableLayoutPanel->Controls->Add(this->HeaderLeft_flowLayoutPanel, 0, 0);
			this->Header_tableLayoutPanel->Controls->Add(this->HeaderRight_flowLayoutPanel, 1, 0);
			this->Header_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Header_tableLayoutPanel->Location = System::Drawing::Point(3, 3);
			this->Header_tableLayoutPanel->Name = L"Header_tableLayoutPanel";
			this->Header_tableLayoutPanel->RowCount = 1;
			this->Header_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Header_tableLayoutPanel->Size = System::Drawing::Size(1068, 59);
			this->Header_tableLayoutPanel->TabIndex = 0;
			// 
			// HeaderLeft_flowLayoutPanel
			// 
			this->HeaderLeft_flowLayoutPanel->AutoSize = true;
			this->HeaderLeft_flowLayoutPanel->Controls->Add(this->Surname_groupBox);
			this->HeaderLeft_flowLayoutPanel->Controls->Add(this->CheckDate_groupBox);
			this->HeaderLeft_flowLayoutPanel->Controls->Add(this->CheckTime_groupBox);
			this->HeaderLeft_flowLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->HeaderLeft_flowLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->HeaderLeft_flowLayoutPanel->Name = L"HeaderLeft_flowLayoutPanel";
			this->HeaderLeft_flowLayoutPanel->Size = System::Drawing::Size(489, 56);
			this->HeaderLeft_flowLayoutPanel->TabIndex = 0;
			this->HeaderLeft_flowLayoutPanel->WrapContents = false;
			// 
			// Surname_groupBox
			// 
			this->Surname_groupBox->Controls->Add(this->Surname_comboBox);
			this->Surname_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Surname_groupBox->Location = System::Drawing::Point(3, 3);
			this->Surname_groupBox->MinimumSize = System::Drawing::Size(0, 50);
			this->Surname_groupBox->Name = L"Surname_groupBox";
			this->Surname_groupBox->Size = System::Drawing::Size(209, 50);
			this->Surname_groupBox->TabIndex = 0;
			this->Surname_groupBox->TabStop = false;
			this->Surname_groupBox->Text = L"Фамилия*";
			// 
			// Surname_comboBox
			// 
			this->Surname_comboBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Surname_comboBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Surname_comboBox->FormattingEnabled = true;
			this->Surname_comboBox->Location = System::Drawing::Point(3, 18);
			this->Surname_comboBox->Name = L"Surname_comboBox";
			this->Surname_comboBox->Size = System::Drawing::Size(203, 24);
			this->Surname_comboBox->TabIndex = 0;
			// 
			// CheckDate_groupBox
			// 
			this->CheckDate_groupBox->Controls->Add(this->CheckDate_dateTimePicker);
			this->CheckDate_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CheckDate_groupBox->Location = System::Drawing::Point(218, 3);
			this->CheckDate_groupBox->MinimumSize = System::Drawing::Size(0, 50);
			this->CheckDate_groupBox->Name = L"CheckDate_groupBox";
			this->CheckDate_groupBox->Size = System::Drawing::Size(131, 50);
			this->CheckDate_groupBox->TabIndex = 1;
			this->CheckDate_groupBox->TabStop = false;
			this->CheckDate_groupBox->Text = L"Дата осмотра*";
			// 
			// CheckDate_dateTimePicker
			// 
			this->CheckDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CheckDate_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CheckDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->CheckDate_dateTimePicker->Location = System::Drawing::Point(3, 18);
			this->CheckDate_dateTimePicker->MinDate = System::DateTime(2024, 10, 16, 21, 54, 47, 0);
			this->CheckDate_dateTimePicker->Name = L"CheckDate_dateTimePicker";
			this->CheckDate_dateTimePicker->Size = System::Drawing::Size(125, 26);
			this->CheckDate_dateTimePicker->TabIndex = 0;
			this->CheckDate_dateTimePicker->Value = System::DateTime(2024, 10, 16, 21, 54, 47, 0);
			// 
			// CheckTime_groupBox
			// 
			this->CheckTime_groupBox->Controls->Add(this->CheckTime_dateTimePicker);
			this->CheckTime_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CheckTime_groupBox->Location = System::Drawing::Point(355, 3);
			this->CheckTime_groupBox->MinimumSize = System::Drawing::Size(0, 50);
			this->CheckTime_groupBox->Name = L"CheckTime_groupBox";
			this->CheckTime_groupBox->Size = System::Drawing::Size(131, 50);
			this->CheckTime_groupBox->TabIndex = 2;
			this->CheckTime_groupBox->TabStop = false;
			this->CheckTime_groupBox->Text = L"Время осмотра*";
			// 
			// CheckTime_dateTimePicker
			// 
			this->CheckTime_dateTimePicker->CustomFormat = L"hh:mm";
			this->CheckTime_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CheckTime_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CheckTime_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->CheckTime_dateTimePicker->Location = System::Drawing::Point(3, 18);
			this->CheckTime_dateTimePicker->MinDate = System::DateTime(2024, 10, 16, 21, 54, 47, 0);
			this->CheckTime_dateTimePicker->Name = L"CheckTime_dateTimePicker";
			this->CheckTime_dateTimePicker->Size = System::Drawing::Size(125, 26);
			this->CheckTime_dateTimePicker->TabIndex = 0;
			this->CheckTime_dateTimePicker->Value = System::DateTime(2024, 10, 16, 21, 54, 47, 0);
			// 
			// HeaderRight_flowLayoutPanel
			// 
			this->HeaderRight_flowLayoutPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->HeaderRight_flowLayoutPanel->AutoSize = true;
			this->HeaderRight_flowLayoutPanel->Controls->Add(this->FirstList_button);
			this->HeaderRight_flowLayoutPanel->Controls->Add(this->DocNotes_button);
			this->HeaderRight_flowLayoutPanel->Controls->Add(this->Clear_button);
			this->HeaderRight_flowLayoutPanel->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->HeaderRight_flowLayoutPanel->Location = System::Drawing::Point(610, 3);
			this->HeaderRight_flowLayoutPanel->Name = L"HeaderRight_flowLayoutPanel";
			this->HeaderRight_flowLayoutPanel->Size = System::Drawing::Size(455, 53);
			this->HeaderRight_flowLayoutPanel->TabIndex = 1;
			this->HeaderRight_flowLayoutPanel->WrapContents = false;
			// 
			// FirstList_button
			// 
			this->FirstList_button->AutoSize = true;
			this->FirstList_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->FirstList_button->FlatAppearance->BorderSize = 0;
			this->FirstList_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FirstList_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->FirstList_button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FirstList_button->Location = System::Drawing::Point(287, 0);
			this->FirstList_button->Margin = System::Windows::Forms::Padding(0);
			this->FirstList_button->MinimumSize = System::Drawing::Size(0, 53);
			this->FirstList_button->Name = L"FirstList_button";
			this->FirstList_button->Size = System::Drawing::Size(168, 53);
			this->FirstList_button->TabIndex = 0;
			this->FirstList_button->TabStop = false;
			this->FirstList_button->Text = L"ПЕРВЫЙ ЛИСТ (F10)";
			this->FirstList_button->UseVisualStyleBackColor = false;
			// 
			// DocNotes_button
			// 
			this->DocNotes_button->AutoSize = true;
			this->DocNotes_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->DocNotes_button->FlatAppearance->BorderSize = 0;
			this->DocNotes_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DocNotes_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->DocNotes_button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->DocNotes_button->Location = System::Drawing::Point(123, 0);
			this->DocNotes_button->Margin = System::Windows::Forms::Padding(0);
			this->DocNotes_button->MinimumSize = System::Drawing::Size(0, 53);
			this->DocNotes_button->Name = L"DocNotes_button";
			this->DocNotes_button->Size = System::Drawing::Size(164, 53);
			this->DocNotes_button->TabIndex = 1;
			this->DocNotes_button->TabStop = false;
			this->DocNotes_button->Text = L"ЗАПИСИ ВРАЧА (F9)";
			this->DocNotes_button->UseVisualStyleBackColor = false;
			// 
			// Clear_button
			// 
			this->Clear_button->AutoSize = true;
			this->Clear_button->FlatAppearance->BorderSize = 0;
			this->Clear_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear_button->ForeColor = System::Drawing::Color::Red;
			this->Clear_button->Location = System::Drawing::Point(0, 0);
			this->Clear_button->Margin = System::Windows::Forms::Padding(0);
			this->Clear_button->MinimumSize = System::Drawing::Size(0, 53);
			this->Clear_button->Name = L"Clear_button";
			this->Clear_button->Size = System::Drawing::Size(123, 53);
			this->Clear_button->TabIndex = 2;
			this->Clear_button->TabStop = false;
			this->Clear_button->Text = L"Очистить (F12)";
			this->Clear_button->UseVisualStyleBackColor = true;
			this->Clear_button->Click += gcnew System::EventHandler(this, &DocNotesBasePanel::Clear_button_Click);
			// 
			// Footer_tableLayoutPanel
			// 
			this->Footer_tableLayoutPanel->AutoSize = true;
			this->Footer_tableLayoutPanel->ColumnCount = 9;
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->Footer_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Footer_tableLayoutPanel->Controls->Add(this->ResearchPlan_label, 7, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->Diagnosis_label, 6, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->StatusLocalis_label, 5, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->FirstCheck_label, 4, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->Anamnesis2_label, 3, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->Anamnesis_label, 2, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->Jaloba_label, 1, 1);
			this->Footer_tableLayoutPanel->Controls->Add(this->Home_button, 0, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->ResearchPlan_button, 7, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->Diagnosis_button, 6, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->StatusLocalis_button, 5, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->FirstCheck_button, 4, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->Anamnesis2_button, 3, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->Anamnesis_button, 2, 0);
			this->Footer_tableLayoutPanel->Controls->Add(this->Jaloba_button, 1, 0);
			this->Footer_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Footer_tableLayoutPanel->Location = System::Drawing::Point(3, 463);
			this->Footer_tableLayoutPanel->Name = L"Footer_tableLayoutPanel";
			this->Footer_tableLayoutPanel->RowCount = 2;
			this->Footer_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Footer_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Footer_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->Footer_tableLayoutPanel->Size = System::Drawing::Size(1068, 64);
			this->Footer_tableLayoutPanel->TabIndex = 1;
			// 
			// ResearchPlan_label
			// 
			this->ResearchPlan_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ResearchPlan_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ResearchPlan_label->Location = System::Drawing::Point(862, 59);
			this->ResearchPlan_label->Margin = System::Windows::Forms::Padding(0);
			this->ResearchPlan_label->MaximumSize = System::Drawing::Size(0, 5);
			this->ResearchPlan_label->MinimumSize = System::Drawing::Size(0, 5);
			this->ResearchPlan_label->Name = L"ResearchPlan_label";
			this->ResearchPlan_label->Size = System::Drawing::Size(190, 5);
			this->ResearchPlan_label->TabIndex = 18;
			// 
			// Diagnosis_label
			// 
			this->Diagnosis_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Diagnosis_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Diagnosis_label->Location = System::Drawing::Point(753, 59);
			this->Diagnosis_label->Margin = System::Windows::Forms::Padding(0);
			this->Diagnosis_label->MaximumSize = System::Drawing::Size(0, 5);
			this->Diagnosis_label->MinimumSize = System::Drawing::Size(0, 5);
			this->Diagnosis_label->Name = L"Diagnosis_label";
			this->Diagnosis_label->Size = System::Drawing::Size(109, 5);
			this->Diagnosis_label->TabIndex = 17;
			// 
			// StatusLocalis_label
			// 
			this->StatusLocalis_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StatusLocalis_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->StatusLocalis_label->Location = System::Drawing::Point(581, 59);
			this->StatusLocalis_label->Margin = System::Windows::Forms::Padding(0);
			this->StatusLocalis_label->MaximumSize = System::Drawing::Size(0, 5);
			this->StatusLocalis_label->MinimumSize = System::Drawing::Size(0, 5);
			this->StatusLocalis_label->Name = L"StatusLocalis_label";
			this->StatusLocalis_label->Size = System::Drawing::Size(172, 5);
			this->StatusLocalis_label->TabIndex = 16;
			// 
			// FirstCheck_label
			// 
			this->FirstCheck_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FirstCheck_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->FirstCheck_label->Location = System::Drawing::Point(398, 59);
			this->FirstCheck_label->Margin = System::Windows::Forms::Padding(0);
			this->FirstCheck_label->MaximumSize = System::Drawing::Size(0, 5);
			this->FirstCheck_label->MinimumSize = System::Drawing::Size(0, 5);
			this->FirstCheck_label->Name = L"FirstCheck_label";
			this->FirstCheck_label->Size = System::Drawing::Size(183, 5);
			this->FirstCheck_label->TabIndex = 15;
			// 
			// Anamnesis2_label
			// 
			this->Anamnesis2_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Anamnesis2_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Anamnesis2_label->Location = System::Drawing::Point(277, 59);
			this->Anamnesis2_label->Margin = System::Windows::Forms::Padding(0);
			this->Anamnesis2_label->MaximumSize = System::Drawing::Size(0, 5);
			this->Anamnesis2_label->MinimumSize = System::Drawing::Size(0, 5);
			this->Anamnesis2_label->Name = L"Anamnesis2_label";
			this->Anamnesis2_label->Size = System::Drawing::Size(121, 5);
			this->Anamnesis2_label->TabIndex = 14;
			// 
			// Anamnesis_label
			// 
			this->Anamnesis_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Anamnesis_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Anamnesis_label->Location = System::Drawing::Point(168, 59);
			this->Anamnesis_label->Margin = System::Windows::Forms::Padding(0);
			this->Anamnesis_label->MaximumSize = System::Drawing::Size(0, 5);
			this->Anamnesis_label->MinimumSize = System::Drawing::Size(0, 5);
			this->Anamnesis_label->Name = L"Anamnesis_label";
			this->Anamnesis_label->Size = System::Drawing::Size(109, 5);
			this->Anamnesis_label->TabIndex = 13;
			// 
			// Jaloba_label
			// 
			this->Jaloba_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Jaloba_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Jaloba_label->Location = System::Drawing::Point(59, 59);
			this->Jaloba_label->Margin = System::Windows::Forms::Padding(0);
			this->Jaloba_label->MaximumSize = System::Drawing::Size(0, 5);
			this->Jaloba_label->MinimumSize = System::Drawing::Size(0, 5);
			this->Jaloba_label->Name = L"Jaloba_label";
			this->Jaloba_label->Size = System::Drawing::Size(109, 5);
			this->Jaloba_label->TabIndex = 12;
			// 
			// Home_button
			// 
			this->Home_button->AutoSize = true;
			this->Home_button->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Home_button->FlatAppearance->BorderSize = 0;
			this->Home_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Home_button->Location = System::Drawing::Point(0, 0);
			this->Home_button->Margin = System::Windows::Forms::Padding(0);
			this->Home_button->MinimumSize = System::Drawing::Size(59, 59);
			this->Home_button->Name = L"Home_button";
			this->Home_button->Size = System::Drawing::Size(59, 59);
			this->Home_button->TabIndex = 0;
			this->Home_button->TabStop = false;
			this->Home_button->Text = L"Home";
			this->Home_button->UseVisualStyleBackColor = false;
			// 
			// ResearchPlan_button
			// 
			this->ResearchPlan_button->AutoSize = true;
			this->ResearchPlan_button->FlatAppearance->BorderSize = 0;
			this->ResearchPlan_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResearchPlan_button->Location = System::Drawing::Point(862, 0);
			this->ResearchPlan_button->Margin = System::Windows::Forms::Padding(0);
			this->ResearchPlan_button->MinimumSize = System::Drawing::Size(0, 59);
			this->ResearchPlan_button->Name = L"ResearchPlan_button";
			this->ResearchPlan_button->Size = System::Drawing::Size(190, 59);
			this->ResearchPlan_button->TabIndex = 8;
			this->ResearchPlan_button->TabStop = false;
			this->ResearchPlan_button->Text = L"План обследования (F8)";
			this->ResearchPlan_button->UseVisualStyleBackColor = true;
			// 
			// Diagnosis_button
			// 
			this->Diagnosis_button->AutoSize = true;
			this->Diagnosis_button->FlatAppearance->BorderSize = 0;
			this->Diagnosis_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Diagnosis_button->Location = System::Drawing::Point(753, 0);
			this->Diagnosis_button->Margin = System::Windows::Forms::Padding(0);
			this->Diagnosis_button->MinimumSize = System::Drawing::Size(0, 59);
			this->Diagnosis_button->Name = L"Diagnosis_button";
			this->Diagnosis_button->Size = System::Drawing::Size(108, 59);
			this->Diagnosis_button->TabIndex = 7;
			this->Diagnosis_button->TabStop = false;
			this->Diagnosis_button->Text = L"Диагноз (F7)";
			this->Diagnosis_button->UseVisualStyleBackColor = true;
			// 
			// StatusLocalis_button
			// 
			this->StatusLocalis_button->AutoSize = true;
			this->StatusLocalis_button->FlatAppearance->BorderSize = 0;
			this->StatusLocalis_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StatusLocalis_button->Location = System::Drawing::Point(581, 0);
			this->StatusLocalis_button->Margin = System::Windows::Forms::Padding(0);
			this->StatusLocalis_button->MinimumSize = System::Drawing::Size(0, 59);
			this->StatusLocalis_button->Name = L"StatusLocalis_button";
			this->StatusLocalis_button->Size = System::Drawing::Size(172, 59);
			this->StatusLocalis_button->TabIndex = 6;
			this->StatusLocalis_button->TabStop = false;
			this->StatusLocalis_button->Text = L"STATUS LOCALIS (F6)";
			this->StatusLocalis_button->UseVisualStyleBackColor = true;
			// 
			// FirstCheck_button
			// 
			this->FirstCheck_button->AutoSize = true;
			this->FirstCheck_button->FlatAppearance->BorderSize = 0;
			this->FirstCheck_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FirstCheck_button->Location = System::Drawing::Point(398, 0);
			this->FirstCheck_button->Margin = System::Windows::Forms::Padding(0);
			this->FirstCheck_button->MinimumSize = System::Drawing::Size(0, 59);
			this->FirstCheck_button->Name = L"FirstCheck_button";
			this->FirstCheck_button->Size = System::Drawing::Size(183, 59);
			this->FirstCheck_button->TabIndex = 5;
			this->FirstCheck_button->TabStop = false;
			this->FirstCheck_button->Text = L"Первичный осмотр (F5)";
			this->FirstCheck_button->UseVisualStyleBackColor = true;
			// 
			// Anamnesis2_button
			// 
			this->Anamnesis2_button->AutoSize = true;
			this->Anamnesis2_button->FlatAppearance->BorderSize = 0;
			this->Anamnesis2_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Anamnesis2_button->Location = System::Drawing::Point(277, 0);
			this->Anamnesis2_button->Margin = System::Windows::Forms::Padding(0);
			this->Anamnesis2_button->MinimumSize = System::Drawing::Size(0, 59);
			this->Anamnesis2_button->Name = L"Anamnesis2_button";
			this->Anamnesis2_button->Size = System::Drawing::Size(121, 59);
			this->Anamnesis2_button->TabIndex = 4;
			this->Anamnesis2_button->TabStop = false;
			this->Anamnesis2_button->Text = L"Анамнез 2 (F4)";
			this->Anamnesis2_button->UseVisualStyleBackColor = true;
			// 
			// Anamnesis_button
			// 
			this->Anamnesis_button->AutoSize = true;
			this->Anamnesis_button->FlatAppearance->BorderSize = 0;
			this->Anamnesis_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Anamnesis_button->Location = System::Drawing::Point(168, 0);
			this->Anamnesis_button->Margin = System::Windows::Forms::Padding(0);
			this->Anamnesis_button->MinimumSize = System::Drawing::Size(0, 59);
			this->Anamnesis_button->Name = L"Anamnesis_button";
			this->Anamnesis_button->Size = System::Drawing::Size(109, 59);
			this->Anamnesis_button->TabIndex = 3;
			this->Anamnesis_button->TabStop = false;
			this->Anamnesis_button->Text = L"Анамнез (F3)";
			this->Anamnesis_button->UseVisualStyleBackColor = true;
			// 
			// Jaloba_button
			// 
			this->Jaloba_button->AutoSize = true;
			this->Jaloba_button->FlatAppearance->BorderSize = 0;
			this->Jaloba_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Jaloba_button->Location = System::Drawing::Point(59, 0);
			this->Jaloba_button->Margin = System::Windows::Forms::Padding(0);
			this->Jaloba_button->MinimumSize = System::Drawing::Size(0, 59);
			this->Jaloba_button->Name = L"Jaloba_button";
			this->Jaloba_button->Size = System::Drawing::Size(109, 59);
			this->Jaloba_button->TabIndex = 2;
			this->Jaloba_button->TabStop = false;
			this->Jaloba_button->Text = L"Жалобы (F2)";
			this->Jaloba_button->UseVisualStyleBackColor = true;
			// 
			// DocNotesBasePanel
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->Base_tableLayoutPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"DocNotesBasePanel";
			this->Size = System::Drawing::Size(1074, 530);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &DocNotesBasePanel::DocNotesBasePanel_KeyDown);
			this->Base_tableLayoutPanel->ResumeLayout(false);
			this->Base_tableLayoutPanel->PerformLayout();
			this->Header_tableLayoutPanel->ResumeLayout(false);
			this->Header_tableLayoutPanel->PerformLayout();
			this->HeaderLeft_flowLayoutPanel->ResumeLayout(false);
			this->Surname_groupBox->ResumeLayout(false);
			this->CheckDate_groupBox->ResumeLayout(false);
			this->CheckTime_groupBox->ResumeLayout(false);
			this->HeaderRight_flowLayoutPanel->ResumeLayout(false);
			this->HeaderRight_flowLayoutPanel->PerformLayout();
			this->Footer_tableLayoutPanel->ResumeLayout(false);
			this->Footer_tableLayoutPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Clear() {

	}
	private: System::Void Home() {

	}
	private: System::Void InitializeInterface() {
		PagePanelsList = gcnew List<Panel^>();
	}
	private: System::Void InitializeData() {

	}
	private: System::Void Clear_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Clear();
	}
private: System::Void DocNotesBasePanel_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::F12) {
		Clear();
	}
	if (e->Control && (e->KeyCode == Keys::H)) {
		Home();
	}
}
};
}
