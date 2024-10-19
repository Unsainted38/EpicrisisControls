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
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel14;
    protected:
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel11;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
    private: System::Windows::Forms::RadioButton^ Pnevmonia_radioButton;
    private: System::Windows::Forms::RadioButton^ Astenia_radioButton;
    private: System::Windows::Forms::GroupBox^ groupBox17;
    private: System::Windows::Forms::DateTimePicker^ IllBegining_dateTimePicker;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
    private: System::Windows::Forms::RadioButton^ ResponseMedstation_radioButton;
    private: System::Windows::Forms::RadioButton^ ResponseGospital_radioButton;
    private: System::Windows::Forms::RadioButton^ ResponsePolyclinic_radioButton;
    private: System::Windows::Forms::GroupBox^ groupBox18;
    private: System::Windows::Forms::DateTimePicker^ ResponseDate_dateTimePicker;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TableLayoutPanel^ NapravlenV_tableLayoutPanel;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
    private: System::Windows::Forms::RadioButton^ SentToGospital_radioButton;
    private: System::Windows::Forms::RadioButton^ SentToLazaret_radioButton;
    private: System::Windows::Forms::RadioButton^ SentToPolyclinic_radioButton;
    private: System::Windows::Forms::TableLayoutPanel^ NapravlenieVGospital_tableLayoutPanel;
    private: System::Windows::Forms::Panel^ NapravlenVpolyclonic_panel;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::RadioButton^ Gospitalization_radioButton;
    private: System::Windows::Forms::RadioButton^ AmbulanceHealing_radioButton;
    private: System::Windows::Forms::GroupBox^ RepeatCheck_groupBox;
    private: System::Windows::Forms::DateTimePicker^ RepeatCheck_dateTimePicker;
    private: System::Windows::Forms::Panel^ NapravlenVLazaret_panel;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel21;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
    private: System::Windows::Forms::RadioButton^ IsLazaretaVGospital_radioButton;
    private: System::Windows::Forms::RadioButton^ IsLazaretaVPolyclinic_radioButton;
    private: System::Windows::Forms::GroupBox^ IsLazaretaVPolyclinic_groupBox;
    private: System::Windows::Forms::DateTimePicker^ IsLazaretaVPolyclinic_dateTimePicker;
    private: System::Windows::Forms::GroupBox^ IsLazaretaVGospital_groupBox;
    private: System::Windows::Forms::DateTimePicker^ IsLazaretaVGospital_dateTimePicker;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::GroupBox^ groupBox19;
    private: System::Windows::Forms::DateTimePicker^ ResearchDate_dateTimePicker;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::CheckBox^ FOGK_checkBox;
    private: System::Windows::Forms::CheckBox^ RgOGK_checkBox;
    private: System::Windows::Forms::CheckBox^ KT_OGK_checkBox;
    private: System::Windows::Forms::CheckBox^ OAK_checkBox;
    private: System::Windows::Forms::CheckBox^ OAM_checkBox;
    private: System::Windows::Forms::CheckBox^ BioChemicalBloodResearch_checkBox;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::GroupBox^ groupBox20;
    private: System::Windows::Forms::TextBox^ Anamnesis_textBox;
    private: System::Windows::Forms::Button^ F4_button;

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
            this->tableLayoutPanel14 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel11 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->Pnevmonia_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->Astenia_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
            this->IllBegining_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->ResponseMedstation_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->ResponseGospital_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->ResponsePolyclinic_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
            this->ResponseDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->NapravlenV_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->SentToGospital_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->SentToLazaret_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->SentToPolyclinic_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->NapravlenieVGospital_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->NapravlenVpolyclonic_panel = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->Gospitalization_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->AmbulanceHealing_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->RepeatCheck_groupBox = (gcnew System::Windows::Forms::GroupBox());
            this->RepeatCheck_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->NapravlenVLazaret_panel = (gcnew System::Windows::Forms::Panel());
            this->tableLayoutPanel21 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->IsLazaretaVGospital_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->IsLazaretaVPolyclinic_radioButton = (gcnew System::Windows::Forms::RadioButton());
            this->IsLazaretaVPolyclinic_groupBox = (gcnew System::Windows::Forms::GroupBox());
            this->IsLazaretaVPolyclinic_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->IsLazaretaVGospital_groupBox = (gcnew System::Windows::Forms::GroupBox());
            this->IsLazaretaVGospital_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
            this->ResearchDate_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->FOGK_checkBox = (gcnew System::Windows::Forms::CheckBox());
            this->RgOGK_checkBox = (gcnew System::Windows::Forms::CheckBox());
            this->KT_OGK_checkBox = (gcnew System::Windows::Forms::CheckBox());
            this->OAK_checkBox = (gcnew System::Windows::Forms::CheckBox());
            this->OAM_checkBox = (gcnew System::Windows::Forms::CheckBox());
            this->BioChemicalBloodResearch_checkBox = (gcnew System::Windows::Forms::CheckBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->groupBox20 = (gcnew System::Windows::Forms::GroupBox());
            this->Anamnesis_textBox = (gcnew System::Windows::Forms::TextBox());
            this->F4_button = (gcnew System::Windows::Forms::Button());
            this->tableLayoutPanel14->SuspendLayout();
            this->panel3->SuspendLayout();
            this->tableLayoutPanel11->SuspendLayout();
            this->flowLayoutPanel2->SuspendLayout();
            this->groupBox17->SuspendLayout();
            this->flowLayoutPanel3->SuspendLayout();
            this->groupBox18->SuspendLayout();
            this->NapravlenV_tableLayoutPanel->SuspendLayout();
            this->flowLayoutPanel5->SuspendLayout();
            this->NapravlenieVGospital_tableLayoutPanel->SuspendLayout();
            this->NapravlenVpolyclonic_panel->SuspendLayout();
            this->RepeatCheck_groupBox->SuspendLayout();
            this->NapravlenVLazaret_panel->SuspendLayout();
            this->tableLayoutPanel21->SuspendLayout();
            this->flowLayoutPanel6->SuspendLayout();
            this->IsLazaretaVPolyclinic_groupBox->SuspendLayout();
            this->IsLazaretaVGospital_groupBox->SuspendLayout();
            this->groupBox19->SuspendLayout();
            this->panel2->SuspendLayout();
            this->groupBox20->SuspendLayout();
            this->SuspendLayout();
            // 
            // tableLayoutPanel14
            // 
            this->tableLayoutPanel14->ColumnCount = 2;
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel14->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel14->Controls->Add(this->panel3, 0, 0);
            this->tableLayoutPanel14->Controls->Add(this->panel2, 1, 0);
            this->tableLayoutPanel14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel14->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel14->Name = L"tableLayoutPanel14";
            this->tableLayoutPanel14->RowCount = 1;
            this->tableLayoutPanel14->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel14->Size = System::Drawing::Size(1195, 511);
            this->tableLayoutPanel14->TabIndex = 1;
            // 
            // panel3
            // 
            this->panel3->AutoScroll = true;
            this->panel3->Controls->Add(this->tableLayoutPanel11);
            this->panel3->Location = System::Drawing::Point(3, 3);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(615, 488);
            this->panel3->TabIndex = 0;
            // 
            // tableLayoutPanel11
            // 
            this->tableLayoutPanel11->AutoSize = true;
            this->tableLayoutPanel11->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->tableLayoutPanel11->ColumnCount = 1;
            this->tableLayoutPanel11->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel11->Controls->Add(this->label11, 0, 0);
            this->tableLayoutPanel11->Controls->Add(this->flowLayoutPanel2, 0, 1);
            this->tableLayoutPanel11->Controls->Add(this->groupBox17, 0, 2);
            this->tableLayoutPanel11->Controls->Add(this->label12, 0, 3);
            this->tableLayoutPanel11->Controls->Add(this->flowLayoutPanel3, 0, 4);
            this->tableLayoutPanel11->Controls->Add(this->groupBox18, 0, 5);
            this->tableLayoutPanel11->Controls->Add(this->label13, 0, 6);
            this->tableLayoutPanel11->Controls->Add(this->NapravlenV_tableLayoutPanel, 0, 7);
            this->tableLayoutPanel11->Controls->Add(this->label14, 0, 8);
            this->tableLayoutPanel11->Controls->Add(this->groupBox19, 0, 9);
            this->tableLayoutPanel11->Controls->Add(this->label15, 0, 10);
            this->tableLayoutPanel11->Controls->Add(this->FOGK_checkBox, 0, 11);
            this->tableLayoutPanel11->Controls->Add(this->RgOGK_checkBox, 0, 12);
            this->tableLayoutPanel11->Controls->Add(this->KT_OGK_checkBox, 0, 13);
            this->tableLayoutPanel11->Controls->Add(this->OAK_checkBox, 0, 14);
            this->tableLayoutPanel11->Controls->Add(this->OAM_checkBox, 0, 15);
            this->tableLayoutPanel11->Controls->Add(this->BioChemicalBloodResearch_checkBox, 0, 16);
            this->tableLayoutPanel11->Dock = System::Windows::Forms::DockStyle::Top;
            this->tableLayoutPanel11->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel11->Name = L"tableLayoutPanel11";
            this->tableLayoutPanel11->RowCount = 17;
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel11->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel11->Size = System::Drawing::Size(598, 799);
            this->tableLayoutPanel11->TabIndex = 0;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(3, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(117, 20);
            this->label11->TabIndex = 0;
            this->label11->Text = L"Заболевание*";
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->Controls->Add(this->Pnevmonia_radioButton);
            this->flowLayoutPanel2->Controls->Add(this->Astenia_radioButton);
            this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel2->Location = System::Drawing::Point(3, 23);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(610, 33);
            this->flowLayoutPanel2->TabIndex = 1;
            // 
            // Pnevmonia_radioButton
            // 
            this->Pnevmonia_radioButton->AutoSize = true;
            this->Pnevmonia_radioButton->Checked = true;
            this->Pnevmonia_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Pnevmonia_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
            this->Pnevmonia_radioButton->FlatAppearance->BorderSize = 0;
            this->Pnevmonia_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Pnevmonia_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->Pnevmonia_radioButton->Location = System::Drawing::Point(3, 3);
            this->Pnevmonia_radioButton->Name = L"Pnevmonia_radioButton";
            this->Pnevmonia_radioButton->Size = System::Drawing::Size(157, 20);
            this->Pnevmonia_radioButton->TabIndex = 0;
            this->Pnevmonia_radioButton->TabStop = true;
            this->Pnevmonia_radioButton->Text = L"Пневмония, бронхит";
            this->Pnevmonia_radioButton->UseVisualStyleBackColor = true;
            // 
            // Astenia_radioButton
            // 
            this->Astenia_radioButton->AutoSize = true;
            this->Astenia_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Astenia_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
            this->Astenia_radioButton->FlatAppearance->BorderSize = 0;
            this->Astenia_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Astenia_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->Astenia_radioButton->Location = System::Drawing::Point(166, 3);
            this->Astenia_radioButton->Name = L"Astenia_radioButton";
            this->Astenia_radioButton->Size = System::Drawing::Size(78, 20);
            this->Astenia_radioButton->TabIndex = 1;
            this->Astenia_radioButton->TabStop = true;
            this->Astenia_radioButton->Text = L"Астения";
            this->Astenia_radioButton->UseVisualStyleBackColor = true;
            // 
            // groupBox17
            // 
            this->groupBox17->Controls->Add(this->IllBegining_dateTimePicker);
            this->groupBox17->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->groupBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox17->Location = System::Drawing::Point(3, 62);
            this->groupBox17->Name = L"groupBox17";
            this->groupBox17->Size = System::Drawing::Size(589, 49);
            this->groupBox17->TabIndex = 2;
            this->groupBox17->TabStop = false;
            this->groupBox17->Text = L"Заболел*";
            // 
            // IllBegining_dateTimePicker
            // 
            this->IllBegining_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
            this->IllBegining_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IllBegining_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->IllBegining_dateTimePicker->Location = System::Drawing::Point(3, 18);
            this->IllBegining_dateTimePicker->Name = L"IllBegining_dateTimePicker";
            this->IllBegining_dateTimePicker->Size = System::Drawing::Size(583, 22);
            this->IllBegining_dateTimePicker->TabIndex = 0;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(3, 114);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(610, 20);
            this->label12->TabIndex = 3;
            this->label12->Text = L"Обратился в*";
            // 
            // flowLayoutPanel3
            // 
            this->flowLayoutPanel3->Controls->Add(this->ResponseMedstation_radioButton);
            this->flowLayoutPanel3->Controls->Add(this->ResponseGospital_radioButton);
            this->flowLayoutPanel3->Controls->Add(this->ResponsePolyclinic_radioButton);
            this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel3->Location = System::Drawing::Point(3, 137);
            this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
            this->flowLayoutPanel3->Size = System::Drawing::Size(610, 28);
            this->flowLayoutPanel3->TabIndex = 4;
            // 
            // ResponseMedstation_radioButton
            // 
            this->ResponseMedstation_radioButton->AutoSize = true;
            this->ResponseMedstation_radioButton->Checked = true;
            this->ResponseMedstation_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ResponseMedstation_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
            this->ResponseMedstation_radioButton->FlatAppearance->BorderSize = 0;
            this->ResponseMedstation_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ResponseMedstation_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ResponseMedstation_radioButton->Location = System::Drawing::Point(3, 3);
            this->ResponseMedstation_radioButton->Name = L"ResponseMedstation_radioButton";
            this->ResponseMedstation_radioButton->Size = System::Drawing::Size(89, 20);
            this->ResponseMedstation_radioButton->TabIndex = 0;
            this->ResponseMedstation_radioButton->TabStop = true;
            this->ResponseMedstation_radioButton->Text = L"Медпункт";
            this->ResponseMedstation_radioButton->UseVisualStyleBackColor = true;
            // 
            // ResponseGospital_radioButton
            // 
            this->ResponseGospital_radioButton->AutoSize = true;
            this->ResponseGospital_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ResponseGospital_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
            this->ResponseGospital_radioButton->FlatAppearance->BorderSize = 0;
            this->ResponseGospital_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ResponseGospital_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ResponseGospital_radioButton->Location = System::Drawing::Point(98, 3);
            this->ResponseGospital_radioButton->Name = L"ResponseGospital_radioButton";
            this->ResponseGospital_radioButton->Size = System::Drawing::Size(92, 20);
            this->ResponseGospital_radioButton->TabIndex = 1;
            this->ResponseGospital_radioButton->TabStop = true;
            this->ResponseGospital_radioButton->Text = L"Госпиталь";
            this->ResponseGospital_radioButton->UseVisualStyleBackColor = true;
            // 
            // ResponsePolyclinic_radioButton
            // 
            this->ResponsePolyclinic_radioButton->AutoSize = true;
            this->ResponsePolyclinic_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ResponsePolyclinic_radioButton->Dock = System::Windows::Forms::DockStyle::Left;
            this->ResponsePolyclinic_radioButton->FlatAppearance->BorderSize = 0;
            this->ResponsePolyclinic_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ResponsePolyclinic_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ResponsePolyclinic_radioButton->Location = System::Drawing::Point(196, 3);
            this->ResponsePolyclinic_radioButton->Name = L"ResponsePolyclinic_radioButton";
            this->ResponsePolyclinic_radioButton->Size = System::Drawing::Size(112, 20);
            this->ResponsePolyclinic_radioButton->TabIndex = 2;
            this->ResponsePolyclinic_radioButton->TabStop = true;
            this->ResponsePolyclinic_radioButton->Text = L"Поликлинику";
            this->ResponsePolyclinic_radioButton->UseVisualStyleBackColor = true;
            // 
            // groupBox18
            // 
            this->groupBox18->Controls->Add(this->ResponseDate_dateTimePicker);
            this->groupBox18->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->groupBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox18->Location = System::Drawing::Point(3, 171);
            this->groupBox18->Name = L"groupBox18";
            this->groupBox18->Size = System::Drawing::Size(589, 47);
            this->groupBox18->TabIndex = 5;
            this->groupBox18->TabStop = false;
            this->groupBox18->Text = L"Дата обращения*";
            // 
            // ResponseDate_dateTimePicker
            // 
            this->ResponseDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ResponseDate_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ResponseDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->ResponseDate_dateTimePicker->Location = System::Drawing::Point(3, 18);
            this->ResponseDate_dateTimePicker->Name = L"ResponseDate_dateTimePicker";
            this->ResponseDate_dateTimePicker->Size = System::Drawing::Size(583, 22);
            this->ResponseDate_dateTimePicker->TabIndex = 0;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(3, 221);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(610, 20);
            this->label13->TabIndex = 6;
            this->label13->Text = L"Направлен в*";
            // 
            // NapravlenV_tableLayoutPanel
            // 
            this->NapravlenV_tableLayoutPanel->AutoSize = true;
            this->NapravlenV_tableLayoutPanel->ColumnCount = 1;
            this->NapravlenV_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->NapravlenV_tableLayoutPanel->Controls->Add(this->flowLayoutPanel5, 0, 0);
            this->NapravlenV_tableLayoutPanel->Controls->Add(this->NapravlenieVGospital_tableLayoutPanel, 0, 1);
            this->NapravlenV_tableLayoutPanel->Controls->Add(this->NapravlenVLazaret_panel, 0, 2);
            this->NapravlenV_tableLayoutPanel->Location = System::Drawing::Point(3, 244);
            this->NapravlenV_tableLayoutPanel->Name = L"NapravlenV_tableLayoutPanel";
            this->NapravlenV_tableLayoutPanel->RowCount = 4;
            this->NapravlenV_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->NapravlenV_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->NapravlenV_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->NapravlenV_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->NapravlenV_tableLayoutPanel->Size = System::Drawing::Size(610, 305);
            this->NapravlenV_tableLayoutPanel->TabIndex = 7;
            // 
            // flowLayoutPanel5
            // 
            this->flowLayoutPanel5->Controls->Add(this->SentToGospital_radioButton);
            this->flowLayoutPanel5->Controls->Add(this->SentToLazaret_radioButton);
            this->flowLayoutPanel5->Controls->Add(this->SentToPolyclinic_radioButton);
            this->flowLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel5->Location = System::Drawing::Point(3, 3);
            this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
            this->flowLayoutPanel5->Size = System::Drawing::Size(604, 25);
            this->flowLayoutPanel5->TabIndex = 0;
            // 
            // SentToGospital_radioButton
            // 
            this->SentToGospital_radioButton->AutoSize = true;
            this->SentToGospital_radioButton->Checked = true;
            this->SentToGospital_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->SentToGospital_radioButton->FlatAppearance->BorderSize = 0;
            this->SentToGospital_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->SentToGospital_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->SentToGospital_radioButton->Location = System::Drawing::Point(3, 3);
            this->SentToGospital_radioButton->Name = L"SentToGospital_radioButton";
            this->SentToGospital_radioButton->Size = System::Drawing::Size(92, 20);
            this->SentToGospital_radioButton->TabIndex = 0;
            this->SentToGospital_radioButton->TabStop = true;
            this->SentToGospital_radioButton->Text = L"Госпиталь";
            this->SentToGospital_radioButton->UseVisualStyleBackColor = true;
            // 
            // SentToLazaret_radioButton
            // 
            this->SentToLazaret_radioButton->AutoSize = true;
            this->SentToLazaret_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->SentToLazaret_radioButton->FlatAppearance->BorderSize = 0;
            this->SentToLazaret_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->SentToLazaret_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->SentToLazaret_radioButton->Location = System::Drawing::Point(101, 3);
            this->SentToLazaret_radioButton->Name = L"SentToLazaret_radioButton";
            this->SentToLazaret_radioButton->Size = System::Drawing::Size(80, 20);
            this->SentToLazaret_radioButton->TabIndex = 1;
            this->SentToLazaret_radioButton->TabStop = true;
            this->SentToLazaret_radioButton->Text = L"Лазарет";
            this->SentToLazaret_radioButton->UseVisualStyleBackColor = true;
            // 
            // SentToPolyclinic_radioButton
            // 
            this->SentToPolyclinic_radioButton->AutoSize = true;
            this->SentToPolyclinic_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->SentToPolyclinic_radioButton->FlatAppearance->BorderSize = 0;
            this->SentToPolyclinic_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->SentToPolyclinic_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->SentToPolyclinic_radioButton->Location = System::Drawing::Point(187, 3);
            this->SentToPolyclinic_radioButton->Name = L"SentToPolyclinic_radioButton";
            this->SentToPolyclinic_radioButton->Size = System::Drawing::Size(112, 20);
            this->SentToPolyclinic_radioButton->TabIndex = 2;
            this->SentToPolyclinic_radioButton->TabStop = true;
            this->SentToPolyclinic_radioButton->Text = L"Поликлинику";
            this->SentToPolyclinic_radioButton->UseVisualStyleBackColor = true;
            // 
            // NapravlenieVGospital_tableLayoutPanel
            // 
            this->NapravlenieVGospital_tableLayoutPanel->AutoSize = true;
            this->NapravlenieVGospital_tableLayoutPanel->ColumnCount = 1;
            this->NapravlenieVGospital_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->NapravlenieVGospital_tableLayoutPanel->Controls->Add(this->NapravlenVpolyclonic_panel, 0, 0);
            this->NapravlenieVGospital_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->NapravlenieVGospital_tableLayoutPanel->Location = System::Drawing::Point(3, 34);
            this->NapravlenieVGospital_tableLayoutPanel->Name = L"NapravlenieVGospital_tableLayoutPanel";
            this->NapravlenieVGospital_tableLayoutPanel->RowCount = 2;
            this->NapravlenieVGospital_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->NapravlenieVGospital_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->NapravlenieVGospital_tableLayoutPanel->Size = System::Drawing::Size(604, 110);
            this->NapravlenieVGospital_tableLayoutPanel->TabIndex = 1;
            this->NapravlenieVGospital_tableLayoutPanel->Visible = false;
            // 
            // NapravlenVpolyclonic_panel
            // 
            this->NapravlenVpolyclonic_panel->AutoSize = true;
            this->NapravlenVpolyclonic_panel->Controls->Add(this->label10);
            this->NapravlenVpolyclonic_panel->Controls->Add(this->Gospitalization_radioButton);
            this->NapravlenVpolyclonic_panel->Controls->Add(this->AmbulanceHealing_radioButton);
            this->NapravlenVpolyclonic_panel->Controls->Add(this->RepeatCheck_groupBox);
            this->NapravlenVpolyclonic_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->NapravlenVpolyclonic_panel->Location = System::Drawing::Point(3, 3);
            this->NapravlenVpolyclonic_panel->Name = L"NapravlenVpolyclonic_panel";
            this->NapravlenVpolyclonic_panel->Size = System::Drawing::Size(598, 104);
            this->NapravlenVpolyclonic_panel->TabIndex = 0;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(6, 6);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(86, 16);
            this->label10->TabIndex = 0;
            this->label10->Text = L"Назначено*";
            // 
            // Gospitalization_radioButton
            // 
            this->Gospitalization_radioButton->AutoSize = true;
            this->Gospitalization_radioButton->Checked = true;
            this->Gospitalization_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->Gospitalization_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->Gospitalization_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->Gospitalization_radioButton->Location = System::Drawing::Point(9, 29);
            this->Gospitalization_radioButton->Name = L"Gospitalization_radioButton";
            this->Gospitalization_radioButton->Size = System::Drawing::Size(132, 20);
            this->Gospitalization_radioButton->TabIndex = 1;
            this->Gospitalization_radioButton->TabStop = true;
            this->Gospitalization_radioButton->Text = L"Госпитализация";
            this->Gospitalization_radioButton->UseVisualStyleBackColor = true;
            // 
            // AmbulanceHealing_radioButton
            // 
            this->AmbulanceHealing_radioButton->AutoSize = true;
            this->AmbulanceHealing_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->AmbulanceHealing_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->AmbulanceHealing_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->AmbulanceHealing_radioButton->Location = System::Drawing::Point(145, 29);
            this->AmbulanceHealing_radioButton->Name = L"AmbulanceHealing_radioButton";
            this->AmbulanceHealing_radioButton->Size = System::Drawing::Size(180, 20);
            this->AmbulanceHealing_radioButton->TabIndex = 2;
            this->AmbulanceHealing_radioButton->TabStop = true;
            this->AmbulanceHealing_radioButton->Text = L"Амбулаторное лечение";
            this->AmbulanceHealing_radioButton->UseVisualStyleBackColor = true;
            // 
            // RepeatCheck_groupBox
            // 
            this->RepeatCheck_groupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->RepeatCheck_groupBox->Controls->Add(this->RepeatCheck_dateTimePicker);
            this->RepeatCheck_groupBox->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->RepeatCheck_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->RepeatCheck_groupBox->Location = System::Drawing::Point(9, 55);
            this->RepeatCheck_groupBox->Name = L"RepeatCheck_groupBox";
            this->RepeatCheck_groupBox->Size = System::Drawing::Size(574, 46);
            this->RepeatCheck_groupBox->TabIndex = 3;
            this->RepeatCheck_groupBox->TabStop = false;
            this->RepeatCheck_groupBox->Text = L"Дата повторного осмотра";
            this->RepeatCheck_groupBox->Visible = false;
            // 
            // RepeatCheck_dateTimePicker
            // 
            this->RepeatCheck_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
            this->RepeatCheck_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->RepeatCheck_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->RepeatCheck_dateTimePicker->Location = System::Drawing::Point(3, 18);
            this->RepeatCheck_dateTimePicker->Name = L"RepeatCheck_dateTimePicker";
            this->RepeatCheck_dateTimePicker->Size = System::Drawing::Size(568, 22);
            this->RepeatCheck_dateTimePicker->TabIndex = 0;
            // 
            // NapravlenVLazaret_panel
            // 
            this->NapravlenVLazaret_panel->AutoSize = true;
            this->NapravlenVLazaret_panel->Controls->Add(this->tableLayoutPanel21);
            this->NapravlenVLazaret_panel->Dock = System::Windows::Forms::DockStyle::Fill;
            this->NapravlenVLazaret_panel->Location = System::Drawing::Point(3, 150);
            this->NapravlenVLazaret_panel->Name = L"NapravlenVLazaret_panel";
            this->NapravlenVLazaret_panel->Size = System::Drawing::Size(604, 152);
            this->NapravlenVLazaret_panel->TabIndex = 2;
            this->NapravlenVLazaret_panel->Visible = false;
            // 
            // tableLayoutPanel21
            // 
            this->tableLayoutPanel21->AutoSize = true;
            this->tableLayoutPanel21->ColumnCount = 1;
            this->tableLayoutPanel21->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel21->Controls->Add(this->label16, 0, 0);
            this->tableLayoutPanel21->Controls->Add(this->flowLayoutPanel6, 0, 1);
            this->tableLayoutPanel21->Controls->Add(this->IsLazaretaVPolyclinic_groupBox, 0, 2);
            this->tableLayoutPanel21->Controls->Add(this->IsLazaretaVGospital_groupBox, 0, 3);
            this->tableLayoutPanel21->Dock = System::Windows::Forms::DockStyle::Fill;
            this->tableLayoutPanel21->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel21->Name = L"tableLayoutPanel21";
            this->tableLayoutPanel21->RowCount = 4;
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel21->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel21->Size = System::Drawing::Size(604, 152);
            this->tableLayoutPanel21->TabIndex = 0;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(3, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(97, 16);
            this->label16->TabIndex = 0;
            this->label16->Text = L"Направлен в*";
            // 
            // flowLayoutPanel6
            // 
            this->flowLayoutPanel6->AutoSize = true;
            this->flowLayoutPanel6->Controls->Add(this->IsLazaretaVGospital_radioButton);
            this->flowLayoutPanel6->Controls->Add(this->IsLazaretaVPolyclinic_radioButton);
            this->flowLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->flowLayoutPanel6->Location = System::Drawing::Point(3, 19);
            this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
            this->flowLayoutPanel6->Size = System::Drawing::Size(598, 26);
            this->flowLayoutPanel6->TabIndex = 1;
            // 
            // IsLazaretaVGospital_radioButton
            // 
            this->IsLazaretaVGospital_radioButton->AutoSize = true;
            this->IsLazaretaVGospital_radioButton->Checked = true;
            this->IsLazaretaVGospital_radioButton->Cursor = System::Windows::Forms::Cursors::Hand;
            this->IsLazaretaVGospital_radioButton->FlatAppearance->BorderSize = 0;
            this->IsLazaretaVGospital_radioButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->IsLazaretaVGospital_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IsLazaretaVGospital_radioButton->Location = System::Drawing::Point(3, 3);
            this->IsLazaretaVGospital_radioButton->Name = L"IsLazaretaVGospital_radioButton";
            this->IsLazaretaVGospital_radioButton->Size = System::Drawing::Size(92, 20);
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
            this->IsLazaretaVPolyclinic_radioButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IsLazaretaVPolyclinic_radioButton->Location = System::Drawing::Point(101, 3);
            this->IsLazaretaVPolyclinic_radioButton->Name = L"IsLazaretaVPolyclinic_radioButton";
            this->IsLazaretaVPolyclinic_radioButton->Size = System::Drawing::Size(112, 20);
            this->IsLazaretaVPolyclinic_radioButton->TabIndex = 1;
            this->IsLazaretaVPolyclinic_radioButton->TabStop = true;
            this->IsLazaretaVPolyclinic_radioButton->Text = L"Поликлинику";
            this->IsLazaretaVPolyclinic_radioButton->UseVisualStyleBackColor = true;
            // 
            // IsLazaretaVPolyclinic_groupBox
            // 
            this->IsLazaretaVPolyclinic_groupBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->IsLazaretaVPolyclinic_groupBox->Controls->Add(this->IsLazaretaVPolyclinic_dateTimePicker);
            this->IsLazaretaVPolyclinic_groupBox->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->IsLazaretaVPolyclinic_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IsLazaretaVPolyclinic_groupBox->Location = System::Drawing::Point(15, 51);
            this->IsLazaretaVPolyclinic_groupBox->Name = L"IsLazaretaVPolyclinic_groupBox";
            this->IsLazaretaVPolyclinic_groupBox->Size = System::Drawing::Size(574, 46);
            this->IsLazaretaVPolyclinic_groupBox->TabIndex = 2;
            this->IsLazaretaVPolyclinic_groupBox->TabStop = false;
            this->IsLazaretaVPolyclinic_groupBox->Text = L"Дата направления в поликлинику*";
            this->IsLazaretaVPolyclinic_groupBox->Visible = false;
            // 
            // IsLazaretaVPolyclinic_dateTimePicker
            // 
            this->IsLazaretaVPolyclinic_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
            this->IsLazaretaVPolyclinic_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IsLazaretaVPolyclinic_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->IsLazaretaVPolyclinic_dateTimePicker->Location = System::Drawing::Point(3, 18);
            this->IsLazaretaVPolyclinic_dateTimePicker->Name = L"IsLazaretaVPolyclinic_dateTimePicker";
            this->IsLazaretaVPolyclinic_dateTimePicker->Size = System::Drawing::Size(568, 22);
            this->IsLazaretaVPolyclinic_dateTimePicker->TabIndex = 0;
            // 
            // IsLazaretaVGospital_groupBox
            // 
            this->IsLazaretaVGospital_groupBox->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->IsLazaretaVGospital_groupBox->Controls->Add(this->IsLazaretaVGospital_dateTimePicker);
            this->IsLazaretaVGospital_groupBox->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->IsLazaretaVGospital_groupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IsLazaretaVGospital_groupBox->Location = System::Drawing::Point(15, 103);
            this->IsLazaretaVGospital_groupBox->Name = L"IsLazaretaVGospital_groupBox";
            this->IsLazaretaVGospital_groupBox->Size = System::Drawing::Size(574, 46);
            this->IsLazaretaVGospital_groupBox->TabIndex = 3;
            this->IsLazaretaVGospital_groupBox->TabStop = false;
            this->IsLazaretaVGospital_groupBox->Text = L"Дата направления в госпиталь*";
            // 
            // IsLazaretaVGospital_dateTimePicker
            // 
            this->IsLazaretaVGospital_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
            this->IsLazaretaVGospital_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->IsLazaretaVGospital_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->IsLazaretaVGospital_dateTimePicker->Location = System::Drawing::Point(3, 18);
            this->IsLazaretaVGospital_dateTimePicker->Name = L"IsLazaretaVGospital_dateTimePicker";
            this->IsLazaretaVGospital_dateTimePicker->Size = System::Drawing::Size(568, 22);
            this->IsLazaretaVGospital_dateTimePicker->TabIndex = 0;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(3, 552);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(610, 24);
            this->label14->TabIndex = 8;
            this->label14->Text = L"Обследования";
            // 
            // groupBox19
            // 
            this->groupBox19->Controls->Add(this->ResearchDate_dateTimePicker);
            this->groupBox19->Cursor = System::Windows::Forms::Cursors::IBeam;
            this->groupBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox19->Location = System::Drawing::Point(3, 579);
            this->groupBox19->Name = L"groupBox19";
            this->groupBox19->Size = System::Drawing::Size(589, 45);
            this->groupBox19->TabIndex = 9;
            this->groupBox19->TabStop = false;
            this->groupBox19->Text = L"Дата*";
            // 
            // ResearchDate_dateTimePicker
            // 
            this->ResearchDate_dateTimePicker->Dock = System::Windows::Forms::DockStyle::Fill;
            this->ResearchDate_dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->ResearchDate_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
            this->ResearchDate_dateTimePicker->Location = System::Drawing::Point(3, 18);
            this->ResearchDate_dateTimePicker->Name = L"ResearchDate_dateTimePicker";
            this->ResearchDate_dateTimePicker->Size = System::Drawing::Size(583, 22);
            this->ResearchDate_dateTimePicker->TabIndex = 16;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(3, 627);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(610, 16);
            this->label15->TabIndex = 10;
            this->label15->Text = L"Обследования*";
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
            this->FOGK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->FOGK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
            this->FOGK_checkBox->Location = System::Drawing::Point(3, 646);
            this->FOGK_checkBox->Name = L"FOGK_checkBox";
            this->FOGK_checkBox->Size = System::Drawing::Size(610, 20);
            this->FOGK_checkBox->TabIndex = 11;
            this->FOGK_checkBox->Text = L"ФОГК";
            this->FOGK_checkBox->UseVisualStyleBackColor = true;
            // 
            // RgOGK_checkBox
            // 
            this->RgOGK_checkBox->AutoSize = true;
            this->RgOGK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
            this->RgOGK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
            this->RgOGK_checkBox->FlatAppearance->BorderSize = 0;
            this->RgOGK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->RgOGK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->RgOGK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
            this->RgOGK_checkBox->Location = System::Drawing::Point(3, 672);
            this->RgOGK_checkBox->Name = L"RgOGK_checkBox";
            this->RgOGK_checkBox->Size = System::Drawing::Size(610, 20);
            this->RgOGK_checkBox->TabIndex = 12;
            this->RgOGK_checkBox->Text = L"Rg ОГК";
            this->RgOGK_checkBox->UseVisualStyleBackColor = true;
            // 
            // KT_OGK_checkBox
            // 
            this->KT_OGK_checkBox->AutoSize = true;
            this->KT_OGK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
            this->KT_OGK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
            this->KT_OGK_checkBox->FlatAppearance->BorderSize = 0;
            this->KT_OGK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->KT_OGK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->KT_OGK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
            this->KT_OGK_checkBox->Location = System::Drawing::Point(3, 698);
            this->KT_OGK_checkBox->Name = L"KT_OGK_checkBox";
            this->KT_OGK_checkBox->Size = System::Drawing::Size(610, 20);
            this->KT_OGK_checkBox->TabIndex = 13;
            this->KT_OGK_checkBox->Text = L"КТ ОГК";
            this->KT_OGK_checkBox->UseVisualStyleBackColor = true;
            // 
            // OAK_checkBox
            // 
            this->OAK_checkBox->AutoSize = true;
            this->OAK_checkBox->Cursor = System::Windows::Forms::Cursors::Hand;
            this->OAK_checkBox->Dock = System::Windows::Forms::DockStyle::Fill;
            this->OAK_checkBox->FlatAppearance->BorderSize = 0;
            this->OAK_checkBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->OAK_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->OAK_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
            this->OAK_checkBox->Location = System::Drawing::Point(3, 724);
            this->OAK_checkBox->Name = L"OAK_checkBox";
            this->OAK_checkBox->Size = System::Drawing::Size(610, 20);
            this->OAK_checkBox->TabIndex = 14;
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
            this->OAM_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->OAM_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
            this->OAM_checkBox->Location = System::Drawing::Point(3, 750);
            this->OAM_checkBox->Name = L"OAM_checkBox";
            this->OAM_checkBox->Size = System::Drawing::Size(610, 20);
            this->OAM_checkBox->TabIndex = 15;
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
            this->BioChemicalBloodResearch_checkBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->BioChemicalBloodResearch_checkBox->ForeColor = System::Drawing::SystemColors::ControlText;
            this->BioChemicalBloodResearch_checkBox->Location = System::Drawing::Point(3, 776);
            this->BioChemicalBloodResearch_checkBox->Name = L"BioChemicalBloodResearch_checkBox";
            this->BioChemicalBloodResearch_checkBox->Size = System::Drawing::Size(610, 20);
            this->BioChemicalBloodResearch_checkBox->TabIndex = 16;
            this->BioChemicalBloodResearch_checkBox->Text = L"Биохимическое исследование крови";
            this->BioChemicalBloodResearch_checkBox->UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this->panel2->AutoSize = true;
            this->panel2->Controls->Add(this->groupBox20);
            this->panel2->Controls->Add(this->F4_button);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(624, 3);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(568, 505);
            this->panel2->TabIndex = 1;
            // 
            // groupBox20
            // 
            this->groupBox20->Controls->Add(this->Anamnesis_textBox);
            this->groupBox20->Dock = System::Windows::Forms::DockStyle::Top;
            this->groupBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->groupBox20->Location = System::Drawing::Point(0, 0);
            this->groupBox20->Name = L"groupBox20";
            this->groupBox20->Size = System::Drawing::Size(568, 160);
            this->groupBox20->TabIndex = 0;
            this->groupBox20->TabStop = false;
            this->groupBox20->Text = L"Анамнез (Ctlr+S)";
            // 
            // Anamnesis_textBox
            // 
            this->Anamnesis_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->Anamnesis_textBox->Dock = System::Windows::Forms::DockStyle::Fill;
            this->Anamnesis_textBox->Location = System::Drawing::Point(3, 22);
            this->Anamnesis_textBox->Multiline = true;
            this->Anamnesis_textBox->Name = L"Anamnesis_textBox";
            this->Anamnesis_textBox->Size = System::Drawing::Size(562, 135);
            this->Anamnesis_textBox->TabIndex = 0;
            this->Anamnesis_textBox->Text = L"\r\n";
            // 
            // F4_button
            // 
            this->F4_button->Cursor = System::Windows::Forms::Cursors::Hand;
            this->F4_button->FlatAppearance->BorderSize = 0;
            this->F4_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->F4_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->F4_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->F4_button->Location = System::Drawing::Point(254, 161);
            this->F4_button->Name = L"F4_button";
            this->F4_button->Size = System::Drawing::Size(173, 37);
            this->F4_button->TabIndex = 1;
            this->F4_button->Text = L"Продолжить";
            this->F4_button->UseVisualStyleBackColor = true;
            // 
            // AnamnesisMorbiPagePanel
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlLightLight;
            this->Controls->Add(this->tableLayoutPanel14);
            this->Name = L"AnamnesisMorbiPagePanel";
            this->Size = System::Drawing::Size(1195, 511);
            this->tableLayoutPanel14->ResumeLayout(false);
            this->tableLayoutPanel14->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->tableLayoutPanel11->ResumeLayout(false);
            this->tableLayoutPanel11->PerformLayout();
            this->flowLayoutPanel2->ResumeLayout(false);
            this->flowLayoutPanel2->PerformLayout();
            this->groupBox17->ResumeLayout(false);
            this->flowLayoutPanel3->ResumeLayout(false);
            this->flowLayoutPanel3->PerformLayout();
            this->groupBox18->ResumeLayout(false);
            this->NapravlenV_tableLayoutPanel->ResumeLayout(false);
            this->NapravlenV_tableLayoutPanel->PerformLayout();
            this->flowLayoutPanel5->ResumeLayout(false);
            this->flowLayoutPanel5->PerformLayout();
            this->NapravlenieVGospital_tableLayoutPanel->ResumeLayout(false);
            this->NapravlenieVGospital_tableLayoutPanel->PerformLayout();
            this->NapravlenVpolyclonic_panel->ResumeLayout(false);
            this->NapravlenVpolyclonic_panel->PerformLayout();
            this->RepeatCheck_groupBox->ResumeLayout(false);
            this->NapravlenVLazaret_panel->ResumeLayout(false);
            this->NapravlenVLazaret_panel->PerformLayout();
            this->tableLayoutPanel21->ResumeLayout(false);
            this->tableLayoutPanel21->PerformLayout();
            this->flowLayoutPanel6->ResumeLayout(false);
            this->flowLayoutPanel6->PerformLayout();
            this->IsLazaretaVPolyclinic_groupBox->ResumeLayout(false);
            this->IsLazaretaVGospital_groupBox->ResumeLayout(false);
            this->groupBox19->ResumeLayout(false);
            this->panel2->ResumeLayout(false);
            this->groupBox20->ResumeLayout(false);
            this->groupBox20->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
	};
}
