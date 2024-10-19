#pragma once
#include "SuperComboBox.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UnsaintedControls {

	/// <summary>
	/// Сводка для JalobaPagePanel
	/// </summary>
	public ref class JalobaPagePanel : public System::Windows::Forms::UserControl
	{
		Dictionary<String^, Button^>^ items;
		ControlCollection^ PushBack(ControlCollection ^ collection, Control^ ctrl) {
			List<Control^>^ temp = gcnew List<Control^>();		
			temp->Add(ctrl);
			ctrl->TabIndex = 0;
			int i = 1;
			for each (Control ^ item in collection) {
				ctrl->TabIndex = i;
				temp->Add(item);
				i++;
			}
			collection->Clear();
			collection->AddRange(temp->ToArray());
			return collection;
		}

	public:
		JalobaPagePanel(void)
		{
			items = gcnew Dictionary<String^, Button^>();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		/*property SuperComboBox^ JalobaSuperCb {
			SuperComboBox^ get() {
				return Jaloba_superComboBox;
			}
		}*/
		void AddButton(String^ title) {
			if (items->ContainsKey(title))
				return; 
			Button^ button = gcnew Button();
			button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			button->Dock = DockStyle::Top;
			button->FlatAppearance->BorderSize = 0;
			button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			button->Location = System::Drawing::Point(0, 0);
			button->Margin = System::Windows::Forms::Padding(0);
			button->MinimumSize = System::Drawing::Size(0, 30);
			button->Size = System::Drawing::Size(155, 30);
			button->AutoSize = true;
			button->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			button->TabStop = true;
			button->Click += gcnew System::EventHandler(this, &UnsaintedControls::JalobaPagePanel::OnClick);
			button->Text = title;
			button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			button->UseVisualStyleBackColor = false;
			button->Name = title + "_button";
			items->Add(title, button);					
			PushBack(JalobaButtons_panel->Controls, button);
		}
		void AddButtonPanelRange(List<String^>^ titles) {
			for each (String ^ title in titles) {
				AddButton(title);				
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~JalobaPagePanel()
		{
			if (components)
			{
				delete components;
			}
		}





	protected:




	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TableLayoutPanel^ Base_tableLayoutPanel;

	private: System::Windows::Forms::FlowLayoutPanel^ Footer_flowLayoutPanel;

	private: System::Windows::Forms::Button^ Add_button;
	private: System::Windows::Forms::Button^ Edit_button;
	private: System::Windows::Forms::Button^ Delete_button;
	private: System::Windows::Forms::Button^ MoveUp_button;
	private: System::Windows::Forms::Button^ MoveDown_button;
	private: System::Windows::Forms::TableLayoutPanel^ Jaloba_tableLayoutPanel;

	private: System::Windows::Forms::Panel^ JalobaButtons_panel;
	private: System::Windows::Forms::GroupBox^ Jaloba_groupBox;
	private: System::Windows::Forms::RichTextBox^ Jaloba_richTextBox;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JalobaPagePanel::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->Base_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Jaloba_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->JalobaButtons_panel = (gcnew System::Windows::Forms::Panel());
			this->Jaloba_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Jaloba_richTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->Footer_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->Edit_button = (gcnew System::Windows::Forms::Button());
			this->Delete_button = (gcnew System::Windows::Forms::Button());
			this->MoveUp_button = (gcnew System::Windows::Forms::Button());
			this->MoveDown_button = (gcnew System::Windows::Forms::Button());
			this->Base_tableLayoutPanel->SuspendLayout();
			this->Jaloba_tableLayoutPanel->SuspendLayout();
			this->Jaloba_groupBox->SuspendLayout();
			this->Footer_flowLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"216099_up_arrow_icon.png");
			this->imageList1->Images->SetKeyName(1, L"216440_down_arrow_icon.png");
			// 
			// Base_tableLayoutPanel
			// 
			this->Base_tableLayoutPanel->ColumnCount = 1;
			this->Base_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Base_tableLayoutPanel->Controls->Add(this->Jaloba_tableLayoutPanel, 0, 0);
			this->Base_tableLayoutPanel->Controls->Add(this->Footer_flowLayoutPanel, 0, 1);
			this->Base_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Base_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->Base_tableLayoutPanel->Name = L"Base_tableLayoutPanel";
			this->Base_tableLayoutPanel->RowCount = 2;
			this->Base_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Base_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Base_tableLayoutPanel->Size = System::Drawing::Size(1179, 484);
			this->Base_tableLayoutPanel->TabIndex = 0;
			// 
			// Jaloba_tableLayoutPanel
			// 
			this->Jaloba_tableLayoutPanel->AutoSize = true;
			this->Jaloba_tableLayoutPanel->ColumnCount = 2;
			this->Jaloba_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->Jaloba_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->Jaloba_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->Jaloba_tableLayoutPanel->Controls->Add(this->JalobaButtons_panel, 0, 0);
			this->Jaloba_tableLayoutPanel->Controls->Add(this->Jaloba_groupBox, 1, 0);
			this->Jaloba_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Jaloba_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->Jaloba_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->Jaloba_tableLayoutPanel->Name = L"Jaloba_tableLayoutPanel";
			this->Jaloba_tableLayoutPanel->RowCount = 1;
			this->Jaloba_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Jaloba_tableLayoutPanel->Size = System::Drawing::Size(1179, 446);
			this->Jaloba_tableLayoutPanel->TabIndex = 3;
			// 
			// JalobaButtons_panel
			// 
			this->JalobaButtons_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->JalobaButtons_panel->AutoScroll = true;
			this->JalobaButtons_panel->AutoSize = true;
			this->JalobaButtons_panel->Location = System::Drawing::Point(0, 0);
			this->JalobaButtons_panel->Margin = System::Windows::Forms::Padding(0);
			this->JalobaButtons_panel->MinimumSize = System::Drawing::Size(300, 0);
			this->JalobaButtons_panel->Name = L"JalobaButtons_panel";
			this->JalobaButtons_panel->Size = System::Drawing::Size(300, 446);
			this->JalobaButtons_panel->TabIndex = 0;
			// 
			// Jaloba_groupBox
			// 
			this->Jaloba_groupBox->AutoSize = true;
			this->Jaloba_groupBox->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Jaloba_groupBox->Controls->Add(this->Jaloba_richTextBox);
			this->Jaloba_groupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->Jaloba_groupBox->Location = System::Drawing::Point(592, 3);
			this->Jaloba_groupBox->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->Jaloba_groupBox->Name = L"Jaloba_groupBox";
			this->Jaloba_groupBox->Size = System::Drawing::Size(584, 63);
			this->Jaloba_groupBox->TabIndex = 1;
			this->Jaloba_groupBox->TabStop = false;
			this->Jaloba_groupBox->Text = L"Жалобы";
			// 
			// Jaloba_richTextBox
			// 
			this->Jaloba_richTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Jaloba_richTextBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->Jaloba_richTextBox->Location = System::Drawing::Point(3, 20);
			this->Jaloba_richTextBox->MinimumSize = System::Drawing::Size(0, 40);
			this->Jaloba_richTextBox->Name = L"Jaloba_richTextBox";
			this->Jaloba_richTextBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->Jaloba_richTextBox->Size = System::Drawing::Size(578, 40);
			this->Jaloba_richTextBox->TabIndex = 0;
			this->Jaloba_richTextBox->Text = L"На ";
			this->Jaloba_richTextBox->TextChanged += gcnew System::EventHandler(this, &JalobaPagePanel::Jaloba_richTextBox_TextChanged);
			// 
			// Footer_flowLayoutPanel
			// 
			this->Footer_flowLayoutPanel->AutoSize = true;
			this->Footer_flowLayoutPanel->Controls->Add(this->Add_button);
			this->Footer_flowLayoutPanel->Controls->Add(this->Edit_button);
			this->Footer_flowLayoutPanel->Controls->Add(this->Delete_button);
			this->Footer_flowLayoutPanel->Controls->Add(this->MoveUp_button);
			this->Footer_flowLayoutPanel->Controls->Add(this->MoveDown_button);
			this->Footer_flowLayoutPanel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Footer_flowLayoutPanel->Location = System::Drawing::Point(0, 446);
			this->Footer_flowLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->Footer_flowLayoutPanel->Name = L"Footer_flowLayoutPanel";
			this->Footer_flowLayoutPanel->Size = System::Drawing::Size(1179, 38);
			this->Footer_flowLayoutPanel->TabIndex = 2;
			this->Footer_flowLayoutPanel->WrapContents = false;
			// 
			// Add_button
			// 
			this->Add_button->AutoSize = true;
			this->Add_button->FlatAppearance->BorderSize = 0;
			this->Add_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Add_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Add_button->Location = System::Drawing::Point(10, 0);
			this->Add_button->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(87, 38);
			this->Add_button->TabIndex = 0;
			this->Add_button->TabStop = false;
			this->Add_button->Text = L"Добавить";
			this->Add_button->UseVisualStyleBackColor = true;
			// 
			// Edit_button
			// 
			this->Edit_button->AutoSize = true;
			this->Edit_button->FlatAppearance->BorderSize = 0;
			this->Edit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Edit_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Edit_button->Location = System::Drawing::Point(117, 0);
			this->Edit_button->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Edit_button->Name = L"Edit_button";
			this->Edit_button->Size = System::Drawing::Size(124, 38);
			this->Edit_button->TabIndex = 1;
			this->Edit_button->TabStop = false;
			this->Edit_button->Text = L"Редактировать";
			this->Edit_button->UseVisualStyleBackColor = true;
			// 
			// Delete_button
			// 
			this->Delete_button->AutoSize = true;
			this->Delete_button->FlatAppearance->BorderSize = 0;
			this->Delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Delete_button->ForeColor = System::Drawing::Color::Red;
			this->Delete_button->Location = System::Drawing::Point(261, 0);
			this->Delete_button->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->Size = System::Drawing::Size(77, 38);
			this->Delete_button->TabIndex = 2;
			this->Delete_button->TabStop = false;
			this->Delete_button->Text = L"Удалить";
			this->Delete_button->UseVisualStyleBackColor = true;
			// 
			// MoveUp_button
			// 
			this->MoveUp_button->AutoSize = true;
			this->MoveUp_button->FlatAppearance->BorderSize = 0;
			this->MoveUp_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MoveUp_button->ForeColor = System::Drawing::Color::Red;
			this->MoveUp_button->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MoveUp_button->ImageIndex = 0;
			this->MoveUp_button->ImageList = this->imageList1;
			this->MoveUp_button->Location = System::Drawing::Point(358, 0);
			this->MoveUp_button->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->MoveUp_button->Name = L"MoveUp_button";
			this->MoveUp_button->Size = System::Drawing::Size(38, 38);
			this->MoveUp_button->TabIndex = 3;
			this->MoveUp_button->TabStop = false;
			this->MoveUp_button->UseVisualStyleBackColor = true;
			// 
			// MoveDown_button
			// 
			this->MoveDown_button->AutoSize = true;
			this->MoveDown_button->FlatAppearance->BorderSize = 0;
			this->MoveDown_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MoveDown_button->ForeColor = System::Drawing::Color::Red;
			this->MoveDown_button->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MoveDown_button->ImageIndex = 1;
			this->MoveDown_button->ImageList = this->imageList1;
			this->MoveDown_button->Location = System::Drawing::Point(416, 0);
			this->MoveDown_button->Margin = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->MoveDown_button->Name = L"MoveDown_button";
			this->MoveDown_button->Size = System::Drawing::Size(38, 38);
			this->MoveDown_button->TabIndex = 4;
			this->MoveDown_button->TabStop = false;
			this->MoveDown_button->UseVisualStyleBackColor = true;
			// 
			// JalobaPagePanel
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->Base_tableLayoutPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"JalobaPagePanel";
			this->Size = System::Drawing::Size(1179, 484);
			this->Base_tableLayoutPanel->ResumeLayout(false);
			this->Base_tableLayoutPanel->PerformLayout();
			this->Jaloba_tableLayoutPanel->ResumeLayout(false);
			this->Jaloba_tableLayoutPanel->PerformLayout();
			this->Jaloba_groupBox->ResumeLayout(false);
			this->Footer_flowLayoutPanel->ResumeLayout(false);
			this->Footer_flowLayoutPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Jaloba_richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	auto richTextBox = dynamic_cast<RichTextBox^>(sender);
	// Устанавливаем минимальную и максимальную высоту для RichTextBox
	int minHeight = 50;
	int maxHeight = 200;
	double k = 1;

	// Измеряем размер текста в RichTextBox
	System::Drawing::Size textSize = TextRenderer::MeasureText(richTextBox->Text, richTextBox->Font, richTextBox->ClientSize, TextFormatFlags::TextBoxControl);
	if (textSize.Width > richTextBox->ClientSize.Width) {
		k = (double((textSize.Width + richTextBox->Margin.Horizontal)) / double(richTextBox->ClientSize.Width)) + 1;
	}
	// Рассчитываем новую высоту с учетом отступов
	int newHeight = int(k * textSize.Height + richTextBox->Margin.Vertical * 2);

	// Устанавливаем новую высоту с учетом минимальных и максимальных границ
	richTextBox->Height = System::Math::Max(minHeight, System::Math::Min(newHeight, maxHeight));
}
void OnClick(System::Object^ sender, System::EventArgs^ e) {
	if (!Jaloba_richTextBox->Text->StartsWith("На "))
		Jaloba_richTextBox->Text = Jaloba_richTextBox->Text->Insert(0, "На ");
	String^ text = Jaloba_richTextBox->Text->Remove(0, 3);
	text += ", " + ((Button^)sender)->Text;
	text = text->TrimStart(gcnew array<wchar_t>{',', ' '});
	Jaloba_richTextBox->Text = "На " + text;
}
};
}