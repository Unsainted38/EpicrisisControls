#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UnsaintedControls {

	/// <summary>
	/// Сводка для AnamnesisMorbiPagePanel
	/// </summary>
	public ref class AnamnesisMorbiPagePanel : public System::Windows::Forms::UserControl
	{
		
	public:
		AnamnesisMorbiPagePanel(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AnamnesisMorbiPagePanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ Main_tableLayoutPanel;
	protected:
	private: System::Windows::Forms::Panel^ Left_panel;
	private: System::Windows::Forms::TableLayoutPanel^ Left_tableLayoutPanel;
	private: System::Windows::Forms::FlowLayoutPanel^ Zabolevanie_flowLayoutPanel;

	private: System::Windows::Forms::RadioButton^ Pnevmonia_radioButton;
	private: System::Windows::Forms::RadioButton^ Astenia_radioButton;
	private: System::Windows::Forms::Label^ Zabolevanie_label;

	private: System::Windows::Forms::GroupBox^ Zabolel_groupBox;
	private: System::Windows::Forms::DateTimePicker^ Zabolel_dateTimePicker;
	private: System::Windows::Forms::Label^ RespondTo_label;
	private: System::Windows::Forms::FlowLayoutPanel^ RespondTo_flowLayoutPanel;

	private: System::Windows::Forms::RadioButton^ ResponseMedstation_radioButton;
	private: System::Windows::Forms::RadioButton^ ResponseGospital_radioButton;
	private: System::Windows::Forms::RadioButton^ ResponsePolyclinic_radioButton;
	private: System::Windows::Forms::RadioButton^ PRK_radioButton;
	private: System::Windows::Forms::GroupBox^ ResponseDate_groupBox;
	private: System::Windows::Forms::DateTimePicker^ ResponseDate_dateTimePicker;


















































	private: System::Windows::Forms::TableLayoutPanel^ Pnevmonia_tableLayoutPanel;
	private: System::Windows::Forms::TableLayoutPanel^ Astenia_tableLayoutPanel;
	private: System::Windows::Forms::TableLayoutPanel^ Check_tableLayoutPanel;
	private: System::Windows::Forms::Label^ Check_label;
	private: System::Windows::Forms::GroupBox^ CheckDate_groupBox;
	private: System::Windows::Forms::DateTimePicker^ CheckDate_dateTimePicker;
	private: System::Windows::Forms::TableLayoutPanel^ CheckItems_tableLayoutPanel;
	private: System::Windows::Forms::CheckBox^ FOGK_checkBox;
private: System::Windows::Forms::CheckBox^ RgOGK_checkBox;
private: System::Windows::Forms::CheckBox^ KT_OGK_checkBox;
private: System::Windows::Forms::CheckBox^ OAK_checkBox;
private: System::Windows::Forms::CheckBox^ OAM_checkBox;
private: System::Windows::Forms::CheckBox^ BioChemicalBloodResearch_checkBox;




















private: System::Windows::Forms::TableLayoutPanel^ Gospital_tableLayoutPanel;
private: System::Windows::Forms::GroupBox^ Gospital_groupBox;
private: System::Windows::Forms::DateTimePicker^ Gospital_dateTimePicker;
private: System::Windows::Forms::TableLayoutPanel^ Polyclinic_tableLayoutPanel;













private: System::Windows::Forms::TableLayoutPanel^ PRK_tableLayoutPanel;
private: System::Windows::Forms::TableLayoutPanel^ Right_tableLayoutPanel;

private: System::Windows::Forms::Button^ Continue_button;
private: System::Windows::Forms::GroupBox^ Anamnes_groupBox;
private: System::Windows::Forms::RichTextBox^ Anamnes_richTextBox;
private: System::Windows::Forms::TableLayoutPanel^ MP_tableLayoutPanel;
private: System::Windows::Forms::Label^ SentTo_label;
private: System::Windows::Forms::FlowLayoutPanel^ SentTo_flowLayoutPanel;
private: System::Windows::Forms::RadioButton^ SentToGospital_radioButton;
private: System::Windows::Forms::RadioButton^ SentToLazaret_radioButton;
private: System::Windows::Forms::RadioButton^ SentToPolyclinic_radioButton;
private: System::Windows::Forms::TableLayoutPanel^ MP_To_Lazaret_tableLayoutPanel;
private: System::Windows::Forms::GroupBox^ DataNapravleniaV_groupBox;
private: System::Windows::Forms::DateTimePicker^ DataNapravleniaV_dateTimePicker;







private: System::Windows::Forms::FlowLayoutPanel^ MP_To_Lazaret_flowLayoutPanel;
private: System::Windows::Forms::RadioButton^ IsLazaretaVGospital_radioButton;
private: System::Windows::Forms::RadioButton^ IsLazaretaVPolyclinic_radioButton;




private: System::Windows::Forms::Label^ NapravlenV_label;

private: System::Windows::Forms::TableLayoutPanel^ MP_To_Polyclinic_tableLayoutPanel;
private: System::Windows::Forms::GroupBox^ SecondCheckDate_groupBox;
private: System::Windows::Forms::DateTimePicker^ SecondCheckDate_dateTimePicker;
private: System::Windows::Forms::Label^ Naznacheno_label;
private: System::Windows::Forms::FlowLayoutPanel^ MP_To_Polyclinic_flowLayoutPanel;
private: System::Windows::Forms::RadioButton^ Gospitalization_radioButton;
private: System::Windows::Forms::RadioButton^ Ambulatornoe_radioButton;
private: System::Windows::Forms::Label^ Polyclinic_label;
private: System::Windows::Forms::FlowLayoutPanel^ Polyclinic_flowLayoutPanel;
private: System::Windows::Forms::RadioButton^ PolyclinicGospitalization_radioButton;
private: System::Windows::Forms::RadioButton^ PolyclinicAmbulatornoe_radioButton;
private: System::Windows::Forms::GroupBox^ PolyclinicSecondCheckDate_groupBox;
private: System::Windows::Forms::DateTimePicker^ PolyclinicSecondCheckDate_dateTimePicker;




































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
			this->Main_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Left_panel = (gcnew System::Windows::Forms::Panel());
			this->Left_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Zabolevanie_label = (gcnew System::Windows::Forms::Label());
			this->Zabolevanie_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Pnevmonia_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Astenia_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Pnevmonia_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Zabolel_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Zabolel_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->RespondTo_label = (gcnew System::Windows::Forms::Label());
			this->RespondTo_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->ResponseMedstation_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ResponseGospital_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ResponsePolyclinic_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->PRK_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->ResponseDate_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->ResponseDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->MP_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SentTo_label = (gcnew System::Windows::Forms::Label());
			this->SentTo_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SentToGospital_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->SentToLazaret_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->SentToPolyclinic_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->MP_To_Lazaret_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NapravlenV_label = (gcnew System::Windows::Forms::Label());
			this->MP_To_Lazaret_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->IsLazaretaVGospital_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->IsLazaretaVPolyclinic_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->DataNapravleniaV_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->DataNapravleniaV_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->MP_To_Polyclinic_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SecondCheckDate_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->SecondCheckDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Naznacheno_label = (gcnew System::Windows::Forms::Label());
			this->MP_To_Polyclinic_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Gospitalization_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Ambulatornoe_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->Gospital_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Gospital_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Gospital_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Polyclinic_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PRK_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Astenia_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Check_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Check_label = (gcnew System::Windows::Forms::Label());
			this->CheckDate_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->CheckDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->CheckItems_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->FOGK_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->KT_OGK_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->RgOGK_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->OAK_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->OAM_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->BioChemicalBloodResearch_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->Right_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Continue_button = (gcnew System::Windows::Forms::Button());
			this->Anamnes_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Anamnes_richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->Polyclinic_label = (gcnew System::Windows::Forms::Label());
			this->Polyclinic_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->PolyclinicGospitalization_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->PolyclinicAmbulatornoe_radioButton = (gcnew System::Windows::Forms::RadioButton());
			this->PolyclinicSecondCheckDate_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->PolyclinicSecondCheckDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Main_tableLayoutPanel->SuspendLayout();
			this->Left_panel->SuspendLayout();
			this->Left_tableLayoutPanel->SuspendLayout();
			this->Zabolevanie_flowLayoutPanel->SuspendLayout();
			this->Pnevmonia_tableLayoutPanel->SuspendLayout();
			this->Zabolel_groupBox->SuspendLayout();
			this->RespondTo_flowLayoutPanel->SuspendLayout();
			this->ResponseDate_groupBox->SuspendLayout();
			this->MP_tableLayoutPanel->SuspendLayout();
			this->SentTo_flowLayoutPanel->SuspendLayout();
			this->MP_To_Lazaret_tableLayoutPanel->SuspendLayout();
			this->MP_To_Lazaret_flowLayoutPanel->SuspendLayout();
			this->DataNapravleniaV_groupBox->SuspendLayout();
			this->MP_To_Polyclinic_tableLayoutPanel->SuspendLayout();
			this->SecondCheckDate_groupBox->SuspendLayout();
			this->MP_To_Polyclinic_flowLayoutPanel->SuspendLayout();
			this->Gospital_tableLayoutPanel->SuspendLayout();
			this->Gospital_groupBox->SuspendLayout();
			this->Polyclinic_tableLayoutPanel->SuspendLayout();
			this->Check_tableLayoutPanel->SuspendLayout();
			this->CheckDate_groupBox->SuspendLayout();
			this->CheckItems_tableLayoutPanel->SuspendLayout();
			this->Right_tableLayoutPanel->SuspendLayout();
			this->Anamnes_groupBox->SuspendLayout();
			this->Polyclinic_flowLayoutPanel->SuspendLayout();
			this->PolyclinicSecondCheckDate_groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// Main_tableLayoutPanel
			// 
			this->Main_tableLayoutPanel->AutoSize = true;
			this->Main_tableLayoutPanel->ColumnCount = 3;
			this->Main_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->Main_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				15)));
			this->Main_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->Main_tableLayoutPanel->Controls->Add(this->Left_panel, 0, 0);
			this->Main_tableLayoutPanel->Controls->Add(this->Right_tableLayoutPanel, 2, 0);
			this->Main_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Main_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->Main_tableLayoutPanel->Margin = System::Windows::Forms::Padding(4);
			this->Main_tableLayoutPanel->Name = L"Main_tableLayoutPanel";
			this->Main_tableLayoutPanel->RowCount = 1;
			this->Main_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Main_tableLayoutPanel->Size = System::Drawing::Size(1305, 539);
			this->Main_tableLayoutPanel->TabIndex = 0;
			// 
			// Left_panel
			// 
			this->Left_panel->AutoScroll = true;
			this->Left_panel->Controls->Add(this->Left_tableLayoutPanel);
			this->Left_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Left_panel->Location = System::Drawing::Point(4, 4);
			this->Left_panel->Margin = System::Windows::Forms::Padding(4);
			this->Left_panel->Name = L"Left_panel";
			this->Left_panel->Size = System::Drawing::Size(448, 531);
			this->Left_panel->TabIndex = 0;
			// 
			// Left_tableLayoutPanel
			// 
			this->Left_tableLayoutPanel->AutoSize = true;
			this->Left_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Left_tableLayoutPanel->ColumnCount = 1;
			this->Left_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Left_tableLayoutPanel->Controls->Add(this->Zabolevanie_label, 0, 0);
			this->Left_tableLayoutPanel->Controls->Add(this->Zabolevanie_flowLayoutPanel, 0, 1);
			this->Left_tableLayoutPanel->Controls->Add(this->Pnevmonia_tableLayoutPanel, 0, 2);
			this->Left_tableLayoutPanel->Controls->Add(this->Astenia_tableLayoutPanel, 0, 3);
			this->Left_tableLayoutPanel->Controls->Add(this->Check_tableLayoutPanel, 0, 4);
			this->Left_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Left_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->Left_tableLayoutPanel->Margin = System::Windows::Forms::Padding(4);
			this->Left_tableLayoutPanel->Name = L"Left_tableLayoutPanel";
			this->Left_tableLayoutPanel->RowCount = 5;
			this->Left_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Left_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Left_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Left_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Left_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Left_tableLayoutPanel->Size = System::Drawing::Size(431, 965);
			this->Left_tableLayoutPanel->TabIndex = 0;
			// 
			// Zabolevanie_label
			// 
			this->Zabolevanie_label->AutoSize = true;
			this->Zabolevanie_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Zabolevanie_label->Location = System::Drawing::Point(3, 0);
			this->Zabolevanie_label->Name = L"Zabolevanie_label";
			this->Zabolevanie_label->Size = System::Drawing::Size(137, 24);
			this->Zabolevanie_label->TabIndex = 1;
			this->Zabolevanie_label->Text = L"Заболевание*";
			// 
			// Zabolevanie_flowLayoutPanel
			// 
			this->Zabolevanie_flowLayoutPanel->AutoSize = true;
			this->Zabolevanie_flowLayoutPanel->Controls->Add(this->Pnevmonia_radioButton);
			this->Zabolevanie_flowLayoutPanel->Controls->Add(this->Astenia_radioButton);
			this->Zabolevanie_flowLayoutPanel->Location = System::Drawing::Point(4, 28);
			this->Zabolevanie_flowLayoutPanel->Margin = System::Windows::Forms::Padding(4);
			this->Zabolevanie_flowLayoutPanel->Name = L"Zabolevanie_flowLayoutPanel";
			this->Zabolevanie_flowLayoutPanel->Size = System::Drawing::Size(263, 30);
			this->Zabolevanie_flowLayoutPanel->TabIndex = 0;
			// 
			// Pnevmonia_radioButton
			// 
			this->Pnevmonia_radioButton->AutoSize = true;
			this->Pnevmonia_radioButton->Checked = true;
			this->Pnevmonia_radioButton->FlatAppearance->BorderSize = 0;
			this->Pnevmonia_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pnevmonia_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Pnevmonia_radioButton->Location = System::Drawing::Point(4, 4);
			this->Pnevmonia_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->Pnevmonia_radioButton->Name = L"Pnevmonia_radioButton";
			this->Pnevmonia_radioButton->Size = System::Drawing::Size(168, 22);
			this->Pnevmonia_radioButton->TabIndex = 0;
			this->Pnevmonia_radioButton->TabStop = true;
			this->Pnevmonia_radioButton->Text = L"Пневмония, бронхит";
			this->Pnevmonia_radioButton->UseVisualStyleBackColor = true;
			this->Pnevmonia_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::Pnevmonia_radioButton_Click);
			// 
			// Astenia_radioButton
			// 
			this->Astenia_radioButton->AutoSize = true;
			this->Astenia_radioButton->FlatAppearance->BorderSize = 0;
			this->Astenia_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Astenia_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Astenia_radioButton->Location = System::Drawing::Point(179, 3);
			this->Astenia_radioButton->Name = L"Astenia_radioButton";
			this->Astenia_radioButton->Size = System::Drawing::Size(81, 22);
			this->Astenia_radioButton->TabIndex = 1;
			this->Astenia_radioButton->Text = L"Астения";
			this->Astenia_radioButton->UseVisualStyleBackColor = true;
			this->Astenia_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::Astenia_radioButton_Click);
			// 
			// Pnevmonia_tableLayoutPanel
			// 
			this->Pnevmonia_tableLayoutPanel->AutoSize = true;
			this->Pnevmonia_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Pnevmonia_tableLayoutPanel->ColumnCount = 1;
			this->Pnevmonia_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->Zabolel_groupBox, 0, 0);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->RespondTo_label, 0, 1);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->RespondTo_flowLayoutPanel, 0, 2);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->ResponseDate_groupBox, 0, 3);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->MP_tableLayoutPanel, 0, 4);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->Gospital_tableLayoutPanel, 0, 5);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->Polyclinic_tableLayoutPanel, 0, 6);
			this->Pnevmonia_tableLayoutPanel->Controls->Add(this->PRK_tableLayoutPanel, 0, 7);
			this->Pnevmonia_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Pnevmonia_tableLayoutPanel->Location = System::Drawing::Point(3, 65);
			this->Pnevmonia_tableLayoutPanel->Name = L"Pnevmonia_tableLayoutPanel";
			this->Pnevmonia_tableLayoutPanel->RowCount = 8;
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Pnevmonia_tableLayoutPanel->Size = System::Drawing::Size(425, 640);
			this->Pnevmonia_tableLayoutPanel->TabIndex = 9;
			this->Pnevmonia_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::Pnevmonia_tableLayoutPanel_VisibleChanged);
			// 
			// Zabolel_groupBox
			// 
			this->Zabolel_groupBox->Controls->Add(this->Zabolel_dateTimePicker);
			this->Zabolel_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->Zabolel_groupBox->Location = System::Drawing::Point(3, 3);
			this->Zabolel_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->Zabolel_groupBox->Name = L"Zabolel_groupBox";
			this->Zabolel_groupBox->Size = System::Drawing::Size(419, 53);
			this->Zabolel_groupBox->TabIndex = 2;
			this->Zabolel_groupBox->TabStop = false;
			this->Zabolel_groupBox->Text = L"Заболел*";
			// 
			// Zabolel_dateTimePicker
			// 
			this->Zabolel_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Zabolel_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Zabolel_dateTimePicker->Location = System::Drawing::Point(3, 20);
			this->Zabolel_dateTimePicker->Name = L"Zabolel_dateTimePicker";
			this->Zabolel_dateTimePicker->Size = System::Drawing::Size(413, 24);
			this->Zabolel_dateTimePicker->TabIndex = 0;
			// 
			// RespondTo_label
			// 
			this->RespondTo_label->AutoSize = true;
			this->RespondTo_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RespondTo_label->Location = System::Drawing::Point(3, 59);
			this->RespondTo_label->Name = L"RespondTo_label";
			this->RespondTo_label->Size = System::Drawing::Size(112, 20);
			this->RespondTo_label->TabIndex = 3;
			this->RespondTo_label->Text = L"Обратился в*";
			// 
			// RespondTo_flowLayoutPanel
			// 
			this->RespondTo_flowLayoutPanel->AutoSize = true;
			this->RespondTo_flowLayoutPanel->Controls->Add(this->ResponseMedstation_radioButton);
			this->RespondTo_flowLayoutPanel->Controls->Add(this->ResponseGospital_radioButton);
			this->RespondTo_flowLayoutPanel->Controls->Add(this->ResponsePolyclinic_radioButton);
			this->RespondTo_flowLayoutPanel->Controls->Add(this->PRK_radioButton);
			this->RespondTo_flowLayoutPanel->Location = System::Drawing::Point(3, 82);
			this->RespondTo_flowLayoutPanel->Name = L"RespondTo_flowLayoutPanel";
			this->RespondTo_flowLayoutPanel->Size = System::Drawing::Size(390, 28);
			this->RespondTo_flowLayoutPanel->TabIndex = 5;
			// 
			// ResponseMedstation_radioButton
			// 
			this->ResponseMedstation_radioButton->AutoSize = true;
			this->ResponseMedstation_radioButton->Checked = true;
			this->ResponseMedstation_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ResponseMedstation_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->ResponseMedstation_radioButton->FlatAppearance->BorderSize = 0;
			this->ResponseMedstation_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResponseMedstation_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResponseMedstation_radioButton->Location = System::Drawing::Point(3, 3);
			this->ResponseMedstation_radioButton->Name = L"ResponseMedstation_radioButton";
			this->ResponseMedstation_radioButton->Size = System::Drawing::Size(93, 22);
			this->ResponseMedstation_radioButton->TabIndex = 0;
			this->ResponseMedstation_radioButton->TabStop = true;
			this->ResponseMedstation_radioButton->Text = L"Медпункт";
			this->ResponseMedstation_radioButton->UseVisualStyleBackColor = true;
			this->ResponseMedstation_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::ResponseMedstation_radioButton_Click);
			// 
			// ResponseGospital_radioButton
			// 
			this->ResponseGospital_radioButton->AutoSize = true;
			this->ResponseGospital_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ResponseGospital_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->ResponseGospital_radioButton->FlatAppearance->BorderSize = 0;
			this->ResponseGospital_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResponseGospital_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResponseGospital_radioButton->Location = System::Drawing::Point(102, 3);
			this->ResponseGospital_radioButton->Name = L"ResponseGospital_radioButton";
			this->ResponseGospital_radioButton->Size = System::Drawing::Size(99, 22);
			this->ResponseGospital_radioButton->TabIndex = 1;
			this->ResponseGospital_radioButton->TabStop = true;
			this->ResponseGospital_radioButton->Text = L"Госпиталь";
			this->ResponseGospital_radioButton->UseVisualStyleBackColor = true;
			this->ResponseGospital_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::ResponseGospital_radioButton_Click);
			// 
			// ResponsePolyclinic_radioButton
			// 
			this->ResponsePolyclinic_radioButton->AutoSize = true;
			this->ResponsePolyclinic_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ResponsePolyclinic_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
			this->ResponsePolyclinic_radioButton->FlatAppearance->BorderSize = 0;
			this->ResponsePolyclinic_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ResponsePolyclinic_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResponsePolyclinic_radioButton->Location = System::Drawing::Point(207, 3);
			this->ResponsePolyclinic_radioButton->Name = L"ResponsePolyclinic_radioButton";
			this->ResponsePolyclinic_radioButton->Size = System::Drawing::Size(118, 22);
			this->ResponsePolyclinic_radioButton->TabIndex = 2;
			this->ResponsePolyclinic_radioButton->TabStop = true;
			this->ResponsePolyclinic_radioButton->Text = L"Поликлинику";
			this->ResponsePolyclinic_radioButton->UseVisualStyleBackColor = true;
			this->ResponsePolyclinic_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::ResponsePolyclinic_radioButton_Click);
			// 
			// PRK_radioButton
			// 
			this->PRK_radioButton->AutoSize = true;
			this->PRK_radioButton->FlatAppearance->BorderSize = 0;
			this->PRK_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PRK_radioButton->Location = System::Drawing::Point(331, 3);
			this->PRK_radioButton->Name = L"PRK_radioButton";
			this->PRK_radioButton->Size = System::Drawing::Size(56, 22);
			this->PRK_radioButton->TabIndex = 3;
			this->PRK_radioButton->TabStop = true;
			this->PRK_radioButton->Text = L"ПРК";
			this->PRK_radioButton->UseVisualStyleBackColor = true;
			this->PRK_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::PRK_radioButton_Click);
			// 
			// ResponseDate_groupBox
			// 
			this->ResponseDate_groupBox->Controls->Add(this->ResponseDate_dateTimePicker);
			this->ResponseDate_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->ResponseDate_groupBox->Location = System::Drawing::Point(3, 116);
			this->ResponseDate_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->ResponseDate_groupBox->Name = L"ResponseDate_groupBox";
			this->ResponseDate_groupBox->Size = System::Drawing::Size(419, 53);
			this->ResponseDate_groupBox->TabIndex = 6;
			this->ResponseDate_groupBox->TabStop = false;
			this->ResponseDate_groupBox->Text = L"Дата обращения*";
			// 
			// ResponseDate_dateTimePicker
			// 
			this->ResponseDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ResponseDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->ResponseDate_dateTimePicker->Location = System::Drawing::Point(3, 20);
			this->ResponseDate_dateTimePicker->Name = L"ResponseDate_dateTimePicker";
			this->ResponseDate_dateTimePicker->Size = System::Drawing::Size(413, 24);
			this->ResponseDate_dateTimePicker->TabIndex = 0;
			// 
			// MP_tableLayoutPanel
			// 
			this->MP_tableLayoutPanel->AutoSize = true;
			this->MP_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MP_tableLayoutPanel->ColumnCount = 1;
			this->MP_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->MP_tableLayoutPanel->Controls->Add(this->SentTo_label, 0, 0);
			this->MP_tableLayoutPanel->Controls->Add(this->SentTo_flowLayoutPanel, 0, 1);
			this->MP_tableLayoutPanel->Controls->Add(this->MP_To_Lazaret_tableLayoutPanel, 0, 2);
			this->MP_tableLayoutPanel->Controls->Add(this->MP_To_Polyclinic_tableLayoutPanel, 0, 3);
			this->MP_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MP_tableLayoutPanel->Location = System::Drawing::Point(0, 172);
			this->MP_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->MP_tableLayoutPanel->Name = L"MP_tableLayoutPanel";
			this->MP_tableLayoutPanel->RowCount = 4;
			this->MP_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->MP_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->MP_tableLayoutPanel->Size = System::Drawing::Size(425, 296);
			this->MP_tableLayoutPanel->TabIndex = 10;
			this->MP_tableLayoutPanel->Visible = false;
			this->MP_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::MP_tableLayoutPanel_VisibleChanged);
			// 
			// SentTo_label
			// 
			this->SentTo_label->AutoSize = true;
			this->SentTo_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SentTo_label->Location = System::Drawing::Point(4, 0);
			this->SentTo_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->SentTo_label->Name = L"SentTo_label";
			this->SentTo_label->Size = System::Drawing::Size(113, 20);
			this->SentTo_label->TabIndex = 7;
			this->SentTo_label->Text = L"Направлен в*";
			// 
			// SentTo_flowLayoutPanel
			// 
			this->SentTo_flowLayoutPanel->AutoSize = true;
			this->SentTo_flowLayoutPanel->Controls->Add(this->SentToGospital_radioButton);
			this->SentTo_flowLayoutPanel->Controls->Add(this->SentToLazaret_radioButton);
			this->SentTo_flowLayoutPanel->Controls->Add(this->SentToPolyclinic_radioButton);
			this->SentTo_flowLayoutPanel->Location = System::Drawing::Point(4, 24);
			this->SentTo_flowLayoutPanel->Margin = System::Windows::Forms::Padding(4);
			this->SentTo_flowLayoutPanel->Name = L"SentTo_flowLayoutPanel";
			this->SentTo_flowLayoutPanel->Size = System::Drawing::Size(324, 30);
			this->SentTo_flowLayoutPanel->TabIndex = 8;
			// 
			// SentToGospital_radioButton
			// 
			this->SentToGospital_radioButton->AutoSize = true;
			this->SentToGospital_radioButton->Checked = true;
			this->SentToGospital_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SentToGospital_radioButton->FlatAppearance->BorderSize = 0;
			this->SentToGospital_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SentToGospital_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SentToGospital_radioButton->Location = System::Drawing::Point(4, 4);
			this->SentToGospital_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->SentToGospital_radioButton->Name = L"SentToGospital_radioButton";
			this->SentToGospital_radioButton->Size = System::Drawing::Size(99, 22);
			this->SentToGospital_radioButton->TabIndex = 0;
			this->SentToGospital_radioButton->TabStop = true;
			this->SentToGospital_radioButton->Text = L"Госпиталь";
			this->SentToGospital_radioButton->UseVisualStyleBackColor = true;
			this->SentToGospital_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::SentToGospital_radioButton_Click);
			// 
			// SentToLazaret_radioButton
			// 
			this->SentToLazaret_radioButton->AutoSize = true;
			this->SentToLazaret_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SentToLazaret_radioButton->FlatAppearance->BorderSize = 0;
			this->SentToLazaret_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SentToLazaret_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SentToLazaret_radioButton->Location = System::Drawing::Point(111, 4);
			this->SentToLazaret_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->SentToLazaret_radioButton->Name = L"SentToLazaret_radioButton";
			this->SentToLazaret_radioButton->Size = System::Drawing::Size(83, 22);
			this->SentToLazaret_radioButton->TabIndex = 1;
			this->SentToLazaret_radioButton->TabStop = true;
			this->SentToLazaret_radioButton->Text = L"Лазарет";
			this->SentToLazaret_radioButton->UseVisualStyleBackColor = true;
			this->SentToLazaret_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::SentToLazaret_radioButton_Click);
			// 
			// SentToPolyclinic_radioButton
			// 
			this->SentToPolyclinic_radioButton->AutoSize = true;
			this->SentToPolyclinic_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SentToPolyclinic_radioButton->FlatAppearance->BorderSize = 0;
			this->SentToPolyclinic_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SentToPolyclinic_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SentToPolyclinic_radioButton->Location = System::Drawing::Point(202, 4);
			this->SentToPolyclinic_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->SentToPolyclinic_radioButton->Name = L"SentToPolyclinic_radioButton";
			this->SentToPolyclinic_radioButton->Size = System::Drawing::Size(118, 22);
			this->SentToPolyclinic_radioButton->TabIndex = 2;
			this->SentToPolyclinic_radioButton->TabStop = true;
			this->SentToPolyclinic_radioButton->Text = L"Поликлинику";
			this->SentToPolyclinic_radioButton->UseVisualStyleBackColor = true;
			this->SentToPolyclinic_radioButton->Click += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::SentToPolyclinic_radioButton_Click);
			// 
			// MP_To_Lazaret_tableLayoutPanel
			// 
			this->MP_To_Lazaret_tableLayoutPanel->AutoSize = true;
			this->MP_To_Lazaret_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MP_To_Lazaret_tableLayoutPanel->ColumnCount = 1;
			this->MP_To_Lazaret_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->MP_To_Lazaret_tableLayoutPanel->Controls->Add(this->NapravlenV_label, 0, 0);
			this->MP_To_Lazaret_tableLayoutPanel->Controls->Add(this->MP_To_Lazaret_flowLayoutPanel, 0, 1);
			this->MP_To_Lazaret_tableLayoutPanel->Controls->Add(this->DataNapravleniaV_groupBox, 0, 2);
			this->MP_To_Lazaret_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MP_To_Lazaret_tableLayoutPanel->Location = System::Drawing::Point(0, 58);
			this->MP_To_Lazaret_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->MP_To_Lazaret_tableLayoutPanel->Name = L"MP_To_Lazaret_tableLayoutPanel";
			this->MP_To_Lazaret_tableLayoutPanel->RowCount = 3;
			this->MP_To_Lazaret_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_To_Lazaret_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_To_Lazaret_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_To_Lazaret_tableLayoutPanel->Size = System::Drawing::Size(425, 119);
			this->MP_To_Lazaret_tableLayoutPanel->TabIndex = 11;
			this->MP_To_Lazaret_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::MP_To_Lazaret_tableLayoutPanel_VisibleChanged);
			// 
			// NapravlenV_label
			// 
			this->NapravlenV_label->AutoSize = true;
			this->NapravlenV_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NapravlenV_label->Location = System::Drawing::Point(3, 0);
			this->NapravlenV_label->Name = L"NapravlenV_label";
			this->NapravlenV_label->Size = System::Drawing::Size(113, 20);
			this->NapravlenV_label->TabIndex = 0;
			this->NapravlenV_label->Text = L"Направлен в*";
			// 
			// MP_To_Lazaret_flowLayoutPanel
			// 
			this->MP_To_Lazaret_flowLayoutPanel->AutoSize = true;
			this->MP_To_Lazaret_flowLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MP_To_Lazaret_flowLayoutPanel->Controls->Add(this->IsLazaretaVGospital_radioButton);
			this->MP_To_Lazaret_flowLayoutPanel->Controls->Add(this->IsLazaretaVPolyclinic_radioButton);
			this->MP_To_Lazaret_flowLayoutPanel->Location = System::Drawing::Point(4, 24);
			this->MP_To_Lazaret_flowLayoutPanel->Margin = System::Windows::Forms::Padding(4);
			this->MP_To_Lazaret_flowLayoutPanel->Name = L"MP_To_Lazaret_flowLayoutPanel";
			this->MP_To_Lazaret_flowLayoutPanel->Size = System::Drawing::Size(233, 30);
			this->MP_To_Lazaret_flowLayoutPanel->TabIndex = 4;
			// 
			// IsLazaretaVGospital_radioButton
			// 
			this->IsLazaretaVGospital_radioButton->AutoSize = true;
			this->IsLazaretaVGospital_radioButton->Checked = true;
			this->IsLazaretaVGospital_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->IsLazaretaVGospital_radioButton->FlatAppearance->BorderSize = 0;
			this->IsLazaretaVGospital_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IsLazaretaVGospital_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IsLazaretaVGospital_radioButton->Location = System::Drawing::Point(4, 4);
			this->IsLazaretaVGospital_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->IsLazaretaVGospital_radioButton->Name = L"IsLazaretaVGospital_radioButton";
			this->IsLazaretaVGospital_radioButton->Size = System::Drawing::Size(99, 22);
			this->IsLazaretaVGospital_radioButton->TabIndex = 0;
			this->IsLazaretaVGospital_radioButton->TabStop = true;
			this->IsLazaretaVGospital_radioButton->Text = L"Госпиталь";
			this->IsLazaretaVGospital_radioButton->UseVisualStyleBackColor = true;
			// 
			// IsLazaretaVPolyclinic_radioButton
			// 
			this->IsLazaretaVPolyclinic_radioButton->AutoSize = true;
			this->IsLazaretaVPolyclinic_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->IsLazaretaVPolyclinic_radioButton->FlatAppearance->BorderSize = 0;
			this->IsLazaretaVPolyclinic_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->IsLazaretaVPolyclinic_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IsLazaretaVPolyclinic_radioButton->Location = System::Drawing::Point(111, 4);
			this->IsLazaretaVPolyclinic_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->IsLazaretaVPolyclinic_radioButton->Name = L"IsLazaretaVPolyclinic_radioButton";
			this->IsLazaretaVPolyclinic_radioButton->Size = System::Drawing::Size(118, 22);
			this->IsLazaretaVPolyclinic_radioButton->TabIndex = 1;
			this->IsLazaretaVPolyclinic_radioButton->Text = L"Поликлинику";
			this->IsLazaretaVPolyclinic_radioButton->UseVisualStyleBackColor = true;
			// 
			// DataNapravleniaV_groupBox
			// 
			this->DataNapravleniaV_groupBox->Controls->Add(this->DataNapravleniaV_dateTimePicker);
			this->DataNapravleniaV_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->DataNapravleniaV_groupBox->Location = System::Drawing::Point(4, 62);
			this->DataNapravleniaV_groupBox->Margin = System::Windows::Forms::Padding(4);
			this->DataNapravleniaV_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->DataNapravleniaV_groupBox->Name = L"DataNapravleniaV_groupBox";
			this->DataNapravleniaV_groupBox->Padding = System::Windows::Forms::Padding(4);
			this->DataNapravleniaV_groupBox->Size = System::Drawing::Size(417, 53);
			this->DataNapravleniaV_groupBox->TabIndex = 9;
			this->DataNapravleniaV_groupBox->TabStop = false;
			this->DataNapravleniaV_groupBox->Text = L"Дата направления в";
			// 
			// DataNapravleniaV_dateTimePicker
			// 
			this->DataNapravleniaV_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->DataNapravleniaV_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DataNapravleniaV_dateTimePicker->Location = System::Drawing::Point(4, 21);
			this->DataNapravleniaV_dateTimePicker->Margin = System::Windows::Forms::Padding(4);
			this->DataNapravleniaV_dateTimePicker->Name = L"DataNapravleniaV_dateTimePicker";
			this->DataNapravleniaV_dateTimePicker->Size = System::Drawing::Size(409, 24);
			this->DataNapravleniaV_dateTimePicker->TabIndex = 0;
			// 
			// MP_To_Polyclinic_tableLayoutPanel
			// 
			this->MP_To_Polyclinic_tableLayoutPanel->AutoSize = true;
			this->MP_To_Polyclinic_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MP_To_Polyclinic_tableLayoutPanel->ColumnCount = 1;
			this->MP_To_Polyclinic_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->MP_To_Polyclinic_tableLayoutPanel->Controls->Add(this->SecondCheckDate_groupBox, 0, 2);
			this->MP_To_Polyclinic_tableLayoutPanel->Controls->Add(this->Naznacheno_label, 0, 0);
			this->MP_To_Polyclinic_tableLayoutPanel->Controls->Add(this->MP_To_Polyclinic_flowLayoutPanel, 0, 1);
			this->MP_To_Polyclinic_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MP_To_Polyclinic_tableLayoutPanel->Location = System::Drawing::Point(0, 177);
			this->MP_To_Polyclinic_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->MP_To_Polyclinic_tableLayoutPanel->Name = L"MP_To_Polyclinic_tableLayoutPanel";
			this->MP_To_Polyclinic_tableLayoutPanel->RowCount = 3;
			this->MP_To_Polyclinic_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_To_Polyclinic_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_To_Polyclinic_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->MP_To_Polyclinic_tableLayoutPanel->Size = System::Drawing::Size(425, 119);
			this->MP_To_Polyclinic_tableLayoutPanel->TabIndex = 10;
			this->MP_To_Polyclinic_tableLayoutPanel->Visible = false;
			this->MP_To_Polyclinic_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::MP_To_Polyclinic_tableLayoutPanel_VisibleChanged);
			// 
			// SecondCheckDate_groupBox
			// 
			this->SecondCheckDate_groupBox->Controls->Add(this->SecondCheckDate_dateTimePicker);
			this->SecondCheckDate_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->SecondCheckDate_groupBox->Location = System::Drawing::Point(4, 62);
			this->SecondCheckDate_groupBox->Margin = System::Windows::Forms::Padding(4);
			this->SecondCheckDate_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->SecondCheckDate_groupBox->Name = L"SecondCheckDate_groupBox";
			this->SecondCheckDate_groupBox->Padding = System::Windows::Forms::Padding(4);
			this->SecondCheckDate_groupBox->Size = System::Drawing::Size(417, 53);
			this->SecondCheckDate_groupBox->TabIndex = 8;
			this->SecondCheckDate_groupBox->TabStop = false;
			this->SecondCheckDate_groupBox->Text = L"Дата повторного осмотра";
			// 
			// SecondCheckDate_dateTimePicker
			// 
			this->SecondCheckDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->SecondCheckDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->SecondCheckDate_dateTimePicker->Location = System::Drawing::Point(4, 21);
			this->SecondCheckDate_dateTimePicker->Margin = System::Windows::Forms::Padding(4);
			this->SecondCheckDate_dateTimePicker->Name = L"SecondCheckDate_dateTimePicker";
			this->SecondCheckDate_dateTimePicker->Size = System::Drawing::Size(409, 24);
			this->SecondCheckDate_dateTimePicker->TabIndex = 0;
			// 
			// Naznacheno_label
			// 
			this->Naznacheno_label->AutoSize = true;
			this->Naznacheno_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Naznacheno_label->Location = System::Drawing::Point(4, 0);
			this->Naznacheno_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Naznacheno_label->Name = L"Naznacheno_label";
			this->Naznacheno_label->Size = System::Drawing::Size(98, 20);
			this->Naznacheno_label->TabIndex = 1;
			this->Naznacheno_label->Text = L"Назначено*";
			// 
			// MP_To_Polyclinic_flowLayoutPanel
			// 
			this->MP_To_Polyclinic_flowLayoutPanel->AutoSize = true;
			this->MP_To_Polyclinic_flowLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->MP_To_Polyclinic_flowLayoutPanel->Controls->Add(this->Gospitalization_radioButton);
			this->MP_To_Polyclinic_flowLayoutPanel->Controls->Add(this->Ambulatornoe_radioButton);
			this->MP_To_Polyclinic_flowLayoutPanel->Location = System::Drawing::Point(4, 24);
			this->MP_To_Polyclinic_flowLayoutPanel->Margin = System::Windows::Forms::Padding(4);
			this->MP_To_Polyclinic_flowLayoutPanel->Name = L"MP_To_Polyclinic_flowLayoutPanel";
			this->MP_To_Polyclinic_flowLayoutPanel->Size = System::Drawing::Size(343, 30);
			this->MP_To_Polyclinic_flowLayoutPanel->TabIndex = 3;
			// 
			// Gospitalization_radioButton
			// 
			this->Gospitalization_radioButton->AutoSize = true;
			this->Gospitalization_radioButton->Checked = true;
			this->Gospitalization_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Gospitalization_radioButton->FlatAppearance->BorderSize = 0;
			this->Gospitalization_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Gospitalization_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Gospitalization_radioButton->Location = System::Drawing::Point(4, 4);
			this->Gospitalization_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->Gospitalization_radioButton->Name = L"Gospitalization_radioButton";
			this->Gospitalization_radioButton->Size = System::Drawing::Size(139, 22);
			this->Gospitalization_radioButton->TabIndex = 0;
			this->Gospitalization_radioButton->TabStop = true;
			this->Gospitalization_radioButton->Text = L"Госпитализация";
			this->Gospitalization_radioButton->UseVisualStyleBackColor = true;
			// 
			// Ambulatornoe_radioButton
			// 
			this->Ambulatornoe_radioButton->AutoSize = true;
			this->Ambulatornoe_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Ambulatornoe_radioButton->FlatAppearance->BorderSize = 0;
			this->Ambulatornoe_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ambulatornoe_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Ambulatornoe_radioButton->Location = System::Drawing::Point(151, 4);
			this->Ambulatornoe_radioButton->Margin = System::Windows::Forms::Padding(4);
			this->Ambulatornoe_radioButton->Name = L"Ambulatornoe_radioButton";
			this->Ambulatornoe_radioButton->Size = System::Drawing::Size(188, 22);
			this->Ambulatornoe_radioButton->TabIndex = 1;
			this->Ambulatornoe_radioButton->Text = L"Амбулаторное лечение";
			this->Ambulatornoe_radioButton->UseVisualStyleBackColor = true;
			// 
			// Gospital_tableLayoutPanel
			// 
			this->Gospital_tableLayoutPanel->AutoSize = true;
			this->Gospital_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Gospital_tableLayoutPanel->ColumnCount = 1;
			this->Gospital_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Gospital_tableLayoutPanel->Controls->Add(this->Gospital_groupBox, 0, 0);
			this->Gospital_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Gospital_tableLayoutPanel->Location = System::Drawing::Point(0, 468);
			this->Gospital_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->Gospital_tableLayoutPanel->Name = L"Gospital_tableLayoutPanel";
			this->Gospital_tableLayoutPanel->RowCount = 1;
			this->Gospital_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Gospital_tableLayoutPanel->Size = System::Drawing::Size(425, 59);
			this->Gospital_tableLayoutPanel->TabIndex = 9;
			this->Gospital_tableLayoutPanel->Visible = false;
			this->Gospital_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::Gospital_tableLayoutPanel_VisibleChanged);
			// 
			// Gospital_groupBox
			// 
			this->Gospital_groupBox->AutoSize = true;
			this->Gospital_groupBox->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Gospital_groupBox->Controls->Add(this->Gospital_dateTimePicker);
			this->Gospital_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->Gospital_groupBox->Location = System::Drawing::Point(3, 3);
			this->Gospital_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->Gospital_groupBox->Name = L"Gospital_groupBox";
			this->Gospital_groupBox->Size = System::Drawing::Size(419, 53);
			this->Gospital_groupBox->TabIndex = 9;
			this->Gospital_groupBox->TabStop = false;
			this->Gospital_groupBox->Text = L"Дата обращения*";
			// 
			// Gospital_dateTimePicker
			// 
			this->Gospital_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Gospital_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Gospital_dateTimePicker->Location = System::Drawing::Point(3, 20);
			this->Gospital_dateTimePicker->Name = L"Gospital_dateTimePicker";
			this->Gospital_dateTimePicker->Size = System::Drawing::Size(413, 24);
			this->Gospital_dateTimePicker->TabIndex = 0;
			// 
			// Polyclinic_tableLayoutPanel
			// 
			this->Polyclinic_tableLayoutPanel->ColumnCount = 1;
			this->Polyclinic_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Polyclinic_tableLayoutPanel->Controls->Add(this->Polyclinic_label, 0, 0);
			this->Polyclinic_tableLayoutPanel->Controls->Add(this->Polyclinic_flowLayoutPanel, 0, 1);
			this->Polyclinic_tableLayoutPanel->Controls->Add(this->PolyclinicSecondCheckDate_groupBox, 0, 2);
			this->Polyclinic_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Polyclinic_tableLayoutPanel->Location = System::Drawing::Point(0, 527);
			this->Polyclinic_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->Polyclinic_tableLayoutPanel->Name = L"Polyclinic_tableLayoutPanel";
			this->Polyclinic_tableLayoutPanel->RowCount = 3;
			this->Polyclinic_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Polyclinic_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Polyclinic_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Polyclinic_tableLayoutPanel->Size = System::Drawing::Size(425, 113);
			this->Polyclinic_tableLayoutPanel->TabIndex = 10;
			this->Polyclinic_tableLayoutPanel->Visible = false;
			this->Polyclinic_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::Polyclinic_tableLayoutPanel_VisibleChanged);
			// 
			// PRK_tableLayoutPanel
			// 
			this->PRK_tableLayoutPanel->AutoSize = true;
			this->PRK_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PRK_tableLayoutPanel->ColumnCount = 1;
			this->PRK_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->PRK_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PRK_tableLayoutPanel->Location = System::Drawing::Point(0, 640);
			this->PRK_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->PRK_tableLayoutPanel->Name = L"PRK_tableLayoutPanel";
			this->PRK_tableLayoutPanel->RowCount = 1;
			this->PRK_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->PRK_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				1)));
			this->PRK_tableLayoutPanel->Size = System::Drawing::Size(425, 1);
			this->PRK_tableLayoutPanel->TabIndex = 11;
			this->PRK_tableLayoutPanel->Visible = false;
			this->PRK_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::PRK_tableLayoutPanel_VisibleChanged);
			// 
			// Astenia_tableLayoutPanel
			// 
			this->Astenia_tableLayoutPanel->AutoSize = true;
			this->Astenia_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Astenia_tableLayoutPanel->ColumnCount = 1;
			this->Astenia_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Astenia_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Astenia_tableLayoutPanel->Location = System::Drawing::Point(0, 708);
			this->Astenia_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->Astenia_tableLayoutPanel->Name = L"Astenia_tableLayoutPanel";
			this->Astenia_tableLayoutPanel->RowCount = 1;
			this->Astenia_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Astenia_tableLayoutPanel->Size = System::Drawing::Size(431, 1);
			this->Astenia_tableLayoutPanel->TabIndex = 10;
			this->Astenia_tableLayoutPanel->Visible = false;
			this->Astenia_tableLayoutPanel->VisibleChanged += gcnew System::EventHandler(this, &AnamnesisMorbiPagePanel::Astenia_tableLayoutPanel_VisibleChanged);
			// 
			// Check_tableLayoutPanel
			// 
			this->Check_tableLayoutPanel->AutoSize = true;
			this->Check_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Check_tableLayoutPanel->ColumnCount = 1;
			this->Check_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Check_tableLayoutPanel->Controls->Add(this->Check_label, 0, 0);
			this->Check_tableLayoutPanel->Controls->Add(this->CheckDate_groupBox, 0, 1);
			this->Check_tableLayoutPanel->Controls->Add(this->CheckItems_tableLayoutPanel, 0, 2);
			this->Check_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Check_tableLayoutPanel->Location = System::Drawing::Point(3, 711);
			this->Check_tableLayoutPanel->Name = L"Check_tableLayoutPanel";
			this->Check_tableLayoutPanel->RowCount = 3;
			this->Check_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Check_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Check_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Check_tableLayoutPanel->Size = System::Drawing::Size(425, 251);
			this->Check_tableLayoutPanel->TabIndex = 11;
			// 
			// Check_label
			// 
			this->Check_label->AutoSize = true;
			this->Check_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Check_label->Location = System::Drawing::Point(3, 0);
			this->Check_label->Name = L"Check_label";
			this->Check_label->Size = System::Drawing::Size(143, 24);
			this->Check_label->TabIndex = 0;
			this->Check_label->Text = L"Обследования";
			// 
			// CheckDate_groupBox
			// 
			this->CheckDate_groupBox->Controls->Add(this->CheckDate_dateTimePicker);
			this->CheckDate_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->CheckDate_groupBox->Location = System::Drawing::Point(3, 27);
			this->CheckDate_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->CheckDate_groupBox->Name = L"CheckDate_groupBox";
			this->CheckDate_groupBox->Size = System::Drawing::Size(419, 53);
			this->CheckDate_groupBox->TabIndex = 9;
			this->CheckDate_groupBox->TabStop = false;
			this->CheckDate_groupBox->Text = L"Дата*";
			// 
			// CheckDate_dateTimePicker
			// 
			this->CheckDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CheckDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->CheckDate_dateTimePicker->Location = System::Drawing::Point(3, 20);
			this->CheckDate_dateTimePicker->Name = L"CheckDate_dateTimePicker";
			this->CheckDate_dateTimePicker->Size = System::Drawing::Size(413, 24);
			this->CheckDate_dateTimePicker->TabIndex = 0;
			// 
			// CheckItems_tableLayoutPanel
			// 
			this->CheckItems_tableLayoutPanel->AutoSize = true;
			this->CheckItems_tableLayoutPanel->ColumnCount = 1;
			this->CheckItems_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->CheckItems_tableLayoutPanel->Controls->Add(this->FOGK_checkBox, 0, 0);
			this->CheckItems_tableLayoutPanel->Controls->Add(this->KT_OGK_checkBox, 0, 3);
			this->CheckItems_tableLayoutPanel->Controls->Add(this->RgOGK_checkBox, 0, 3);
			this->CheckItems_tableLayoutPanel->Controls->Add(this->OAK_checkBox, 0, 4);
			this->CheckItems_tableLayoutPanel->Controls->Add(this->OAM_checkBox, 0, 5);
			this->CheckItems_tableLayoutPanel->Controls->Add(this->BioChemicalBloodResearch_checkBox, 0, 6);
			this->CheckItems_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CheckItems_tableLayoutPanel->Location = System::Drawing::Point(0, 83);
			this->CheckItems_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->CheckItems_tableLayoutPanel->Name = L"CheckItems_tableLayoutPanel";
			this->CheckItems_tableLayoutPanel->RowCount = 7;
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->CheckItems_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->CheckItems_tableLayoutPanel->Size = System::Drawing::Size(425, 168);
			this->CheckItems_tableLayoutPanel->TabIndex = 10;
			// 
			// FOGK_checkBox
			// 
			this->FOGK_checkBox->AutoSize = true;
			this->FOGK_checkBox->Checked = true;
			this->FOGK_checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->FOGK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FOGK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->FOGK_checkBox->FlatAppearance->BorderSize = 0;
			this->FOGK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FOGK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FOGK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FOGK_checkBox->Location = System::Drawing::Point(3, 3);
			this->FOGK_checkBox->Name = L"FOGK_checkBox";
			this->FOGK_checkBox->Size = System::Drawing::Size(419, 22);
			this->FOGK_checkBox->TabIndex = 0;
			this->FOGK_checkBox->Text = L"ФОГК";
			this->FOGK_checkBox->UseVisualStyleBackColor = true;
			// 
			// KT_OGK_checkBox
			// 
			this->KT_OGK_checkBox->AutoSize = true;
			this->KT_OGK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->KT_OGK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->KT_OGK_checkBox->FlatAppearance->BorderSize = 0;
			this->KT_OGK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->KT_OGK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->KT_OGK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->KT_OGK_checkBox->Location = System::Drawing::Point(3, 59);
			this->KT_OGK_checkBox->Name = L"KT_OGK_checkBox";
			this->KT_OGK_checkBox->Size = System::Drawing::Size(419, 22);
			this->KT_OGK_checkBox->TabIndex = 2;
			this->KT_OGK_checkBox->Text = L"КТ ОГК";
			this->KT_OGK_checkBox->UseVisualStyleBackColor = true;
			// 
			// RgOGK_checkBox
			// 
			this->RgOGK_checkBox->AutoSize = true;
			this->RgOGK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RgOGK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->RgOGK_checkBox->FlatAppearance->BorderSize = 0;
			this->RgOGK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RgOGK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RgOGK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->RgOGK_checkBox->Location = System::Drawing::Point(3, 31);
			this->RgOGK_checkBox->Name = L"RgOGK_checkBox";
			this->RgOGK_checkBox->Size = System::Drawing::Size(419, 22);
			this->RgOGK_checkBox->TabIndex = 1;
			this->RgOGK_checkBox->Text = L"Rg ОГК";
			this->RgOGK_checkBox->UseVisualStyleBackColor = true;
			// 
			// OAK_checkBox
			// 
			this->OAK_checkBox->AutoSize = true;
			this->OAK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OAK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OAK_checkBox->FlatAppearance->BorderSize = 0;
			this->OAK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OAK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OAK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->OAK_checkBox->Location = System::Drawing::Point(3, 87);
			this->OAK_checkBox->Name = L"OAK_checkBox";
			this->OAK_checkBox->Size = System::Drawing::Size(419, 22);
			this->OAK_checkBox->TabIndex = 3;
			this->OAK_checkBox->Text = L"ОАК";
			this->OAK_checkBox->UseVisualStyleBackColor = true;
			// 
			// OAM_checkBox
			// 
			this->OAM_checkBox->AutoSize = true;
			this->OAM_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OAM_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->OAM_checkBox->FlatAppearance->BorderSize = 0;
			this->OAM_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OAM_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OAM_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->OAM_checkBox->Location = System::Drawing::Point(3, 115);
			this->OAM_checkBox->Name = L"OAM_checkBox";
			this->OAM_checkBox->Size = System::Drawing::Size(419, 22);
			this->OAM_checkBox->TabIndex = 4;
			this->OAM_checkBox->Text = L"ОАМ";
			this->OAM_checkBox->UseVisualStyleBackColor = true;
			// 
			// BioChemicalBloodResearch_checkBox
			// 
			this->BioChemicalBloodResearch_checkBox->AutoSize = true;
			this->BioChemicalBloodResearch_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BioChemicalBloodResearch_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->BioChemicalBloodResearch_checkBox->FlatAppearance->BorderSize = 0;
			this->BioChemicalBloodResearch_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BioChemicalBloodResearch_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->BioChemicalBloodResearch_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->BioChemicalBloodResearch_checkBox->Location = System::Drawing::Point(3, 143);
			this->BioChemicalBloodResearch_checkBox->Name = L"BioChemicalBloodResearch_checkBox";
			this->BioChemicalBloodResearch_checkBox->Size = System::Drawing::Size(419, 22);
			this->BioChemicalBloodResearch_checkBox->TabIndex = 5;
			this->BioChemicalBloodResearch_checkBox->Text = L"Биохимическое исследование крови";
			this->BioChemicalBloodResearch_checkBox->UseVisualStyleBackColor = true;
			// 
			// Right_tableLayoutPanel
			// 
			this->Right_tableLayoutPanel->AutoSize = true;
			this->Right_tableLayoutPanel->ColumnCount = 1;
			this->Right_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Right_tableLayoutPanel->Controls->Add(this->Continue_button, 0, 1);
			this->Right_tableLayoutPanel->Controls->Add(this->Anamnes_groupBox, 0, 0);
			this->Right_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Right_tableLayoutPanel->Location = System::Drawing::Point(654, 3);
			this->Right_tableLayoutPanel->Name = L"Right_tableLayoutPanel";
			this->Right_tableLayoutPanel->RowCount = 2;
			this->Right_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Right_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Right_tableLayoutPanel->Size = System::Drawing::Size(648, 122);
			this->Right_tableLayoutPanel->TabIndex = 1;
			// 
			// Continue_button
			// 
			this->Continue_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Continue_button->AutoSize = true;
			this->Continue_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Continue_button->FlatAppearance->BorderSize = 0;
			this->Continue_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Continue_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Continue_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Continue_button->Location = System::Drawing::Point(3, 82);
			this->Continue_button->Name = L"Continue_button";
			this->Continue_button->Size = System::Drawing::Size(642, 37);
			this->Continue_button->TabIndex = 2;
			this->Continue_button->Text = L"Продолжить";
			this->Continue_button->UseVisualStyleBackColor = true;
			// 
			// Anamnes_groupBox
			// 
			this->Anamnes_groupBox->AutoSize = true;
			this->Anamnes_groupBox->Controls->Add(this->Anamnes_richTextBox);
			this->Anamnes_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->Anamnes_groupBox->Location = System::Drawing::Point(3, 3);
			this->Anamnes_groupBox->Name = L"Anamnes_groupBox";
			this->Anamnes_groupBox->Size = System::Drawing::Size(642, 73);
			this->Anamnes_groupBox->TabIndex = 3;
			this->Anamnes_groupBox->TabStop = false;
			this->Anamnes_groupBox->Text = L"Anamnes (Ctrl+S)";
			// 
			// Anamnes_richTextBox
			// 
			this->Anamnes_richTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Anamnes_richTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->Anamnes_richTextBox->Location = System::Drawing::Point(3, 20);
			this->Anamnes_richTextBox->MinimumSize = System::Drawing::Size(0, 50);
			this->Anamnes_richTextBox->Name = L"Anamnes_richTextBox";
			this->Anamnes_richTextBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->Anamnes_richTextBox->Size = System::Drawing::Size(636, 50);
			this->Anamnes_richTextBox->TabIndex = 0;
			this->Anamnes_richTextBox->Text = L"";
			// 
			// Polyclinic_label
			// 
			this->Polyclinic_label->AutoSize = true;
			this->Polyclinic_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Polyclinic_label->Location = System::Drawing::Point(3, 0);
			this->Polyclinic_label->Name = L"Polyclinic_label";
			this->Polyclinic_label->Size = System::Drawing::Size(98, 20);
			this->Polyclinic_label->TabIndex = 9;
			this->Polyclinic_label->Text = L"Назначено*";
			// 
			// Polyclinic_flowLayoutPanel
			// 
			this->Polyclinic_flowLayoutPanel->AutoSize = true;
			this->Polyclinic_flowLayoutPanel->Controls->Add(this->PolyclinicGospitalization_radioButton);
			this->Polyclinic_flowLayoutPanel->Controls->Add(this->PolyclinicAmbulatornoe_radioButton);
			this->Polyclinic_flowLayoutPanel->Location = System::Drawing::Point(3, 23);
			this->Polyclinic_flowLayoutPanel->Name = L"Polyclinic_flowLayoutPanel";
			this->Polyclinic_flowLayoutPanel->Size = System::Drawing::Size(339, 28);
			this->Polyclinic_flowLayoutPanel->TabIndex = 10;
			// 
			// PolyclinicGospitalization_radioButton
			// 
			this->PolyclinicGospitalization_radioButton->AutoSize = true;
			this->PolyclinicGospitalization_radioButton->Checked = true;
			this->PolyclinicGospitalization_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PolyclinicGospitalization_radioButton->FlatAppearance->BorderSize = 0;
			this->PolyclinicGospitalization_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PolyclinicGospitalization_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PolyclinicGospitalization_radioButton->Location = System::Drawing::Point(3, 3);
			this->PolyclinicGospitalization_radioButton->Name = L"PolyclinicGospitalization_radioButton";
			this->PolyclinicGospitalization_radioButton->Size = System::Drawing::Size(139, 22);
			this->PolyclinicGospitalization_radioButton->TabIndex = 0;
			this->PolyclinicGospitalization_radioButton->TabStop = true;
			this->PolyclinicGospitalization_radioButton->Text = L"Госпитализация";
			this->PolyclinicGospitalization_radioButton->UseVisualStyleBackColor = true;
			// 
			// PolyclinicAmbulatornoe_radioButton
			// 
			this->PolyclinicAmbulatornoe_radioButton->AutoSize = true;
			this->PolyclinicAmbulatornoe_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PolyclinicAmbulatornoe_radioButton->FlatAppearance->BorderSize = 0;
			this->PolyclinicAmbulatornoe_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PolyclinicAmbulatornoe_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PolyclinicAmbulatornoe_radioButton->Location = System::Drawing::Point(148, 3);
			this->PolyclinicAmbulatornoe_radioButton->Name = L"PolyclinicAmbulatornoe_radioButton";
			this->PolyclinicAmbulatornoe_radioButton->Size = System::Drawing::Size(188, 22);
			this->PolyclinicAmbulatornoe_radioButton->TabIndex = 1;
			this->PolyclinicAmbulatornoe_radioButton->Text = L"Амбулаторное лечение";
			this->PolyclinicAmbulatornoe_radioButton->UseVisualStyleBackColor = true;
			// 
			// PolyclinicSecondCheckDate_groupBox
			// 
			this->PolyclinicSecondCheckDate_groupBox->AutoSize = true;
			this->PolyclinicSecondCheckDate_groupBox->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PolyclinicSecondCheckDate_groupBox->Controls->Add(this->PolyclinicSecondCheckDate_dateTimePicker);
			this->PolyclinicSecondCheckDate_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->PolyclinicSecondCheckDate_groupBox->Location = System::Drawing::Point(3, 57);
			this->PolyclinicSecondCheckDate_groupBox->MinimumSize = System::Drawing::Size(0, 53);
			this->PolyclinicSecondCheckDate_groupBox->Name = L"PolyclinicSecondCheckDate_groupBox";
			this->PolyclinicSecondCheckDate_groupBox->Size = System::Drawing::Size(419, 53);
			this->PolyclinicSecondCheckDate_groupBox->TabIndex = 11;
			this->PolyclinicSecondCheckDate_groupBox->TabStop = false;
			this->PolyclinicSecondCheckDate_groupBox->Text = L"Дата повторного осмотра";
			this->PolyclinicSecondCheckDate_groupBox->Visible = false;
			// 
			// PolyclinicSecondCheckDate_dateTimePicker
			// 
			this->PolyclinicSecondCheckDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PolyclinicSecondCheckDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->PolyclinicSecondCheckDate_dateTimePicker->Location = System::Drawing::Point(3, 20);
			this->PolyclinicSecondCheckDate_dateTimePicker->Name = L"PolyclinicSecondCheckDate_dateTimePicker";
			this->PolyclinicSecondCheckDate_dateTimePicker->Size = System::Drawing::Size(413, 24);
			this->PolyclinicSecondCheckDate_dateTimePicker->TabIndex = 0;
			// 
			// AnamnesisMorbiPagePanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->Main_tableLayoutPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AnamnesisMorbiPagePanel";
			this->Size = System::Drawing::Size(1305, 539);
			this->Main_tableLayoutPanel->ResumeLayout(false);
			this->Main_tableLayoutPanel->PerformLayout();
			this->Left_panel->ResumeLayout(false);
			this->Left_panel->PerformLayout();
			this->Left_tableLayoutPanel->ResumeLayout(false);
			this->Left_tableLayoutPanel->PerformLayout();
			this->Zabolevanie_flowLayoutPanel->ResumeLayout(false);
			this->Zabolevanie_flowLayoutPanel->PerformLayout();
			this->Pnevmonia_tableLayoutPanel->ResumeLayout(false);
			this->Pnevmonia_tableLayoutPanel->PerformLayout();
			this->Zabolel_groupBox->ResumeLayout(false);
			this->RespondTo_flowLayoutPanel->ResumeLayout(false);
			this->RespondTo_flowLayoutPanel->PerformLayout();
			this->ResponseDate_groupBox->ResumeLayout(false);
			this->MP_tableLayoutPanel->ResumeLayout(false);
			this->MP_tableLayoutPanel->PerformLayout();
			this->SentTo_flowLayoutPanel->ResumeLayout(false);
			this->SentTo_flowLayoutPanel->PerformLayout();
			this->MP_To_Lazaret_tableLayoutPanel->ResumeLayout(false);
			this->MP_To_Lazaret_tableLayoutPanel->PerformLayout();
			this->MP_To_Lazaret_flowLayoutPanel->ResumeLayout(false);
			this->MP_To_Lazaret_flowLayoutPanel->PerformLayout();
			this->DataNapravleniaV_groupBox->ResumeLayout(false);
			this->MP_To_Polyclinic_tableLayoutPanel->ResumeLayout(false);
			this->MP_To_Polyclinic_tableLayoutPanel->PerformLayout();
			this->SecondCheckDate_groupBox->ResumeLayout(false);
			this->MP_To_Polyclinic_flowLayoutPanel->ResumeLayout(false);
			this->MP_To_Polyclinic_flowLayoutPanel->PerformLayout();
			this->Gospital_tableLayoutPanel->ResumeLayout(false);
			this->Gospital_tableLayoutPanel->PerformLayout();
			this->Gospital_groupBox->ResumeLayout(false);
			this->Polyclinic_tableLayoutPanel->ResumeLayout(false);
			this->Polyclinic_tableLayoutPanel->PerformLayout();
			this->Check_tableLayoutPanel->ResumeLayout(false);
			this->Check_tableLayoutPanel->PerformLayout();
			this->CheckDate_groupBox->ResumeLayout(false);
			this->CheckItems_tableLayoutPanel->ResumeLayout(false);
			this->CheckItems_tableLayoutPanel->PerformLayout();
			this->Right_tableLayoutPanel->ResumeLayout(false);
			this->Right_tableLayoutPanel->PerformLayout();
			this->Anamnes_groupBox->ResumeLayout(false);
			this->Polyclinic_flowLayoutPanel->ResumeLayout(false);
			this->Polyclinic_flowLayoutPanel->PerformLayout();
			this->PolyclinicSecondCheckDate_groupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void IsLazaretaV_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = "Дата направления в ";
	if (IsLazaretaVGospital_radioButton->Checked) {
		DataNapravleniaV_groupBox->Text = text + "госпиталь*";
	}
	else if (IsLazaretaVPolyclinic_radioButton->Checked) {
		DataNapravleniaV_groupBox->Text = text + "поликлинику*";
	}
}
private: System::Void IsPolyclinicV_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {	
	if (Gospitalization_radioButton->Checked) {
		SecondCheckDate_groupBox->Visible = false;
	}
	else if (Ambulatornoe_radioButton->Checked) {
		SecondCheckDate_groupBox->Width = true;
	}
}
private: System::Void Pnevmonia_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Pnevmonia_tableLayoutPanel->Show();
}
private: System::Void Astenia_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Astenia_tableLayoutPanel->Show();
}
private: System::Void Pnevmonia_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Pnevmonia_tableLayoutPanel->Visible) {
		Astenia_tableLayoutPanel->Hide();
	}		
}
private: System::Void Astenia_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Astenia_tableLayoutPanel->Visible) {
		Pnevmonia_tableLayoutPanel->Hide();
	}
}
private: System::Void ResponseMedstation_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ResponseMedstation_radioButton->Checked) {
		MP_tableLayoutPanel->Show();
	}
}
private: System::Void ResponseGospital_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ResponseGospital_radioButton->Checked) {
		Gospital_tableLayoutPanel->Show();
	}
}
private: System::Void ResponsePolyclinic_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ResponsePolyclinic_radioButton->Checked) {
		Polyclinic_tableLayoutPanel->Show();
	}
}
private: System::Void PRK_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (PRK_radioButton->Checked) {
		PRK_tableLayoutPanel->Show();
	}
}
private: System::Void MP_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MP_tableLayoutPanel->Visible) {
		Gospital_tableLayoutPanel->Hide();
		Polyclinic_tableLayoutPanel->Hide();
		PRK_tableLayoutPanel->Hide();
	}
}
private: System::Void Gospital_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Gospital_tableLayoutPanel->Visible) {
		MP_tableLayoutPanel->Hide();
		Polyclinic_tableLayoutPanel->Hide();
		PRK_tableLayoutPanel->Hide();
	}
}
private: System::Void Polyclinic_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Polyclinic_tableLayoutPanel->Visible) {
		MP_tableLayoutPanel->Hide();
		Gospital_tableLayoutPanel->Hide();
		PRK_tableLayoutPanel->Hide();
	}
}
private: System::Void PRK_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (PRK_tableLayoutPanel->Visible) {
		MP_tableLayoutPanel->Hide();
		Gospital_tableLayoutPanel->Hide();
		Polyclinic_tableLayoutPanel->Hide();
	}
}
private: System::Void MP_To_Lazaret_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MP_To_Lazaret_tableLayoutPanel->Visible) {
		MP_To_Polyclinic_tableLayoutPanel->Hide();
		//MP_To_Gospital_tableLayoutPanel->Hide();
	}
}
private: System::Void MP_To_Gospital_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	/*if (MP_To_Gospital_tableLayoutPanel->Visible) {
		MP_To_Lazaret_tableLayoutPanel->Hide();
		MP_To_Polyclinic_tableLayoutPanel->Hide();
	}*/
}
private: System::Void MP_To_Polyclinic_tableLayoutPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
	if (MP_To_Polyclinic_tableLayoutPanel->Visible) {
		//MP_To_Gospital_tableLayoutPanel->Hide();
		MP_To_Lazaret_tableLayoutPanel->Hide();
	}
}
private: System::Void SentToGospital_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//MP_To_Gospital_tableLayoutPanel->Show();
	MP_To_Lazaret_tableLayoutPanel->Hide();
	MP_To_Polyclinic_tableLayoutPanel->Hide();
}
private: System::Void SentToLazaret_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MP_To_Lazaret_tableLayoutPanel->Show();
}
private: System::Void SentToPolyclinic_radioButton_Click(System::Object^ sender, System::EventArgs^ e) {
	MP_To_Polyclinic_tableLayoutPanel->Show();
}
};
}
