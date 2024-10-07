#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UnsaintedControls {

	/// <summary>
	/// —водка дл€ CustomLabelWithButton
	/// </summary>
	public ref class CustomLabelWithButton : public System::Windows::Forms::UserControl
	{

		Control^ m_parent;
	public:
		CustomLabelWithButton(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		CustomLabelWithButton(String^ title) {
			InitializeComponent();
			Title = title;
		}
		CustomLabelWithButton(String^ title, Control^ parent) {
			InitializeComponent();
			Title = title;
			m_parent = parent;
		}
		property Control^ ButtonPanelParent {
			void set(Control^ value) {
				m_parent = value;
			}
			Control^ get() {
				return m_parent;
			}
		}
		property String^ Title {
			void set(String^ value) {
				label->Text = value;
			}
			String^ get() {
				return label->Text;
			}
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CustomLabelWithButton()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ delete_button;
	protected:

	private: System::Windows::Forms::Label^ label;



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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->label);
			this->flowLayoutPanel1->Controls->Add(this->delete_button);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(67, 24);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label->Dock = System::Windows::Forms::DockStyle::Left;
			this->label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->Location = System::Drawing::Point(4, 4);
			this->label->Margin = System::Windows::Forms::Padding(4);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(37, 16);
			this->label->TabIndex = 0;
			this->label->Text = L"label";
			// 
			// delete_button
			// 
			this->delete_button->BackColor = System::Drawing::SystemColors::ControlLight;
			this->delete_button->FlatAppearance->BorderSize = 0;
			this->delete_button->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::AppWorkspace;
			this->delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->delete_button->Location = System::Drawing::Point(46, 1);
			this->delete_button->Margin = System::Windows::Forms::Padding(1);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(20, 20);
			this->delete_button->TabIndex = 1;
			this->delete_button->TabStop = false;
			this->delete_button->Text = L"X";
			this->delete_button->UseVisualStyleBackColor = false;
			this->delete_button->Click += gcnew System::EventHandler(this, &CustomLabelWithButton::delete_button_Click);
			// 
			// CustomLabelWithButton
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"CustomLabelWithButton";
			this->Size = System::Drawing::Size(67, 24);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
	m_parent->Show();
	Parent->Controls->Remove(this);
}
};
}
