#pragma once
#include "CustomLabelWithButton.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace unsaintedWinAppLib;


namespace UnsaintedControls {

	/// <summary>
	/// —водка дл€ ButtonPanel
	/// </summary>
	public ref class ButtonPanel : public System::Windows::Forms::UserControl
	{	
		Control^ m_parent;
		RichTextBox^ m_rtb;
		FlowLayoutPanel^ m_flowpanel;
		TextBox^ m_textbox;
	public:
		ButtonPanel(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		ButtonPanel(String^ title, bool editV, bool deleteV) {
			InitializeComponent();
			DeleteButtonVisibility = deleteV;
			EditButtonVisibility = editV;
			Title = title;
		}
		ButtonPanel(String^ title, bool editV, bool deleteV, Control^ parent) {
			InitializeComponent();
			DeleteButtonVisibility = deleteV;
			EditButtonVisibility = editV;
			Title = title;
			m_parent = parent;
		}
		ButtonPanel(String^ title, bool editV, bool deleteV, RichTextBox^ rtb) {
			InitializeComponent();
			DeleteButtonVisibility = deleteV;
			EditButtonVisibility = editV;
			Title = title;
			m_rtb = rtb;
		}
		ButtonPanel(String^ title, bool editV, bool deleteV, Control^ parent, FlowLayoutPanel^ fpanel, TextBox^ tbox) {
			InitializeComponent();
			DeleteButtonVisibility = deleteV;
			EditButtonVisibility = editV;
			Title = title;
			m_flowpanel = fpanel;
			m_textbox = tbox;
		}
		ButtonPanel(String^ title, bool editV, bool deleteV, TextBox^ tbox) {
			InitializeComponent();
			DeleteButtonVisibility = deleteV;
			EditButtonVisibility = editV;
			Title = title;
			m_textbox = tbox;
		}
		property String^ Title {
			void set(String^ value) {
				main_button->Text = value;
			}
			String^ get() {
				return main_button->Text;
			}
		}
		property bool DeleteButtonVisibility {
			void set(bool value) {
				delete_button->Visible = value;
			}
			bool get() {
				return delete_button->Visible;
			}
		}
		property bool EditButtonVisibility {
			void set(bool value) {
				edit_button->Visible = value;
			}
			bool get() {
				return edit_button->Visible;
			}
		}
		property Button^ MainButton {
			Button^ get() {
				return main_button;
			}
		}
		property Button^ EditButton {
			Button^ get() {
				return edit_button;
			}
		}
		property Button^ DeleteButton {
			Button^ get() {
				return delete_button;
			}
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~ButtonPanel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^ edit_button;

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ delete_button;
	private: System::Windows::Forms::Button^ main_button;

	private: System::ComponentModel::IContainer^ components;


	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ButtonPanel::typeid));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->main_button = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"trash_can_icon.png");
			this->imageList1->Images->SetKeyName(1, L"pencil_icon.png");
			// 
			// edit_button
			// 
			this->edit_button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->edit_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->edit_button->FlatAppearance->BorderSize = 0;
			this->edit_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_button->ImageIndex = 1;
			this->edit_button->ImageList = this->imageList1;
			this->edit_button->Location = System::Drawing::Point(155, 0);
			this->edit_button->Margin = System::Windows::Forms::Padding(0);
			this->edit_button->MaximumSize = System::Drawing::Size(30, 30);
			this->edit_button->MinimumSize = System::Drawing::Size(30, 30);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(30, 30);
			this->edit_button->TabIndex = 2;
			this->edit_button->TabStop = false;
			this->edit_button->UseVisualStyleBackColor = false;
			this->edit_button->Click += gcnew System::EventHandler(this, &ButtonPanel::edit_button_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->delete_button, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->main_button, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->edit_button, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(215, 30);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// delete_button
			// 
			this->delete_button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->delete_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->delete_button->FlatAppearance->BorderSize = 0;
			this->delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_button->ImageIndex = 0;
			this->delete_button->ImageList = this->imageList1;
			this->delete_button->Location = System::Drawing::Point(185, 0);
			this->delete_button->Margin = System::Windows::Forms::Padding(0);
			this->delete_button->MaximumSize = System::Drawing::Size(30, 30);
			this->delete_button->MinimumSize = System::Drawing::Size(30, 30);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(30, 30);
			this->delete_button->TabIndex = 1;
			this->delete_button->TabStop = false;
			this->delete_button->UseVisualStyleBackColor = false;
			this->delete_button->Click += gcnew System::EventHandler(this, &ButtonPanel::delete_button_Click);
			// 
			// main_button
			// 
			this->main_button->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->main_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_button->FlatAppearance->BorderSize = 0;
			this->main_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->main_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main_button->Location = System::Drawing::Point(0, 0);
			this->main_button->Margin = System::Windows::Forms::Padding(0);
			this->main_button->MinimumSize = System::Drawing::Size(0, 30);
			this->main_button->Name = L"main_button";
			this->main_button->Size = System::Drawing::Size(155, 30);
			this->main_button->TabIndex = 0;
			this->main_button->TabStop = false;
			this->main_button->Text = L"panel_name";
			this->main_button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->main_button->UseVisualStyleBackColor = false;
			// 
			// ButtonPanel
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
			this->MaximumSize = System::Drawing::Size(0, 30);
			this->MinimumSize = System::Drawing::Size(0, 30);
			this->Name = L"ButtonPanel";
			this->Size = System::Drawing::Size(215, 30);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e) {	
	Parent->Controls->Remove(this);
}
private: System::Void edit_button_Click(System::Object^ sender, System::EventArgs^ e) {

}
public: System::Void main_button_Click(System::Object^ sender, System::EventArgs^ e) {	
	m_textbox->Parent->Controls->Remove(m_textbox);
	CustomLabelWithButton^ label = gcnew CustomLabelWithButton(this->Title, this);
	m_flowpanel->Controls->Add(label);
	this->Hide();
	m_flowpanel->Controls->Add(m_textbox);
	m_textbox->Focus();
}
};
}
