#pragma once

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
	public:
		ButtonPanel(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::Button^ main_button;
	protected:

	private: System::Windows::Forms::Button^ delete_button;

	private: System::Windows::Forms::Button^ edit_button;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;


	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->main_button = (gcnew System::Windows::Forms::Button());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->edit_button = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_button
			// 
			this->main_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_button->Location = System::Drawing::Point(0, 0);
			this->main_button->Name = L"main_button";
			this->main_button->Size = System::Drawing::Size(294, 30);
			this->main_button->TabIndex = 0;
			this->main_button->Text = L"panel_name";
			this->main_button->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->main_button->UseVisualStyleBackColor = true;
			// 
			// delete_button
			// 
			this->delete_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->delete_button->Location = System::Drawing::Point(0, 0);
			this->delete_button->Margin = System::Windows::Forms::Padding(0);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(30, 30);
			this->delete_button->TabIndex = 1;
			this->delete_button->Text = L"delete";
			this->delete_button->UseVisualStyleBackColor = true;
			// 
			// edit_button
			// 
			this->edit_button->Location = System::Drawing::Point(30, 0);
			this->edit_button->Margin = System::Windows::Forms::Padding(0);
			this->edit_button->Name = L"edit_button";
			this->edit_button->Size = System::Drawing::Size(30, 30);
			this->edit_button->TabIndex = 2;
			this->edit_button->Text = L"edit";
			this->edit_button->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->edit_button);
			this->flowLayoutPanel1->Controls->Add(this->delete_button);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(234, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(60, 30);
			this->flowLayoutPanel1->TabIndex = 3;
			this->flowLayoutPanel1->WrapContents = false;
			// 
			// ButtonPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->main_button);
			this->MaximumSize = System::Drawing::Size(0, 30);
			this->MinimumSize = System::Drawing::Size(170, 30);
			this->Name = L"ButtonPanel";
			this->Size = System::Drawing::Size(294, 30);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
