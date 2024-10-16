#pragma once
#include "CustomLabelWithButton.h"
#include "ButtonPanel.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace unsaintedWinAppLib;


namespace UnsaintedControls {

	/// <summary>
	/// Сводка для SuperComboBox
	/// </summary>
	public ref class SuperComboBox : public System::Windows::Forms::UserControl
	{		
		Dictionary<String^, ButtonPanel^>^ items;
		CustomLabelWithButton^ m_lastLabel;
		List<String^>^ m_selected;
		List<String^>^ m_SelectedByDefaultItems;
		TextBox^ m_textBox;		
		Locker^ m_locker;
		RichTextBox^ m_rtb;
		bool m_editable = false;
		bool m_removable = false;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::TextBox^ textBox;

	public:
		SuperComboBox(void)
		{
			InitializeComponent();
			items = gcnew Dictionary<String^, ButtonPanel^>();
			m_selected = gcnew List<String^>();
			m_locker = gcnew Locker(100);
			//
			//TODO: добавьте код конструктора
			//
		}
		void AddButtonPanel(String^ title) {	
			if (items->ContainsKey(title))
				return;
			ButtonPanel^ b_panel = gcnew ButtonPanel(title, m_editable, m_removable, this, flowLayoutPanel1, textBox);
			items->Add(title, b_panel);
			this->Items_tableLayoutPanel->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(SizeType::AutoSize));
			this->Items_tableLayoutPanel->Controls->Add(b_panel);
			b_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			b_panel->MainButton->Click += gcnew EventHandler(b_panel, &ButtonPanel::main_button_Click);
			flowLayoutPanel1->Controls->Add(textBox);			
			
			textBox->AutoCompleteCustomSource->Add(title);
		}
		void AddButtonPanelsRange(List<String^>^ titles) {
			flowLayoutPanel1->Controls->Clear();
			if (titles == nullptr)
				return;
			this->Items_tableLayoutPanel->RowCount = titles->Count;
			for each (String^ title in titles) {
				if (items->ContainsKey(title))
					return;
				ButtonPanel^ b_panel = gcnew ButtonPanel(title, m_editable, m_removable, this, flowLayoutPanel1, textBox);
				items->Add(title, b_panel);				
				this->Items_tableLayoutPanel->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(SizeType::AutoSize));
				this->Items_tableLayoutPanel->Controls->Add(b_panel);
				b_panel->Dock = System::Windows::Forms::DockStyle::Fill;
				b_panel->MainButton->Click += gcnew EventHandler(b_panel, &ButtonPanel::main_button_Click);
				textBox->AutoCompleteCustomSource->Add(title);
				
			}
			flowLayoutPanel1->Controls->Add(textBox);
		}
		property RichTextBox^ ResultRichTextBox {
			void set(RichTextBox^ value) {
				m_rtb = value;
			}
			RichTextBox^ get() {
				return m_rtb;
			}
		}
		property bool ButtonPanelsVisible {
			void set(bool value) {
				Items_tableLayoutPanel->Visible = value;
			}
			bool get() {
				return Items_tableLayoutPanel->Visible;
			}
		}
		property bool LabelsWithButtonVisible {
			void set(bool value) {

			}
		}
		property TextBox^ TBox {			
			TextBox^ get() {
				return textBox;
			}
		}
		property TextBox^ ResultsTextBox {
			void set(TextBox^ value) {
				m_textBox = value;
			}
			TextBox^ get() {
				return m_textBox;
			}
		}
		property AutoCompleteMode ACompleteMode {
			void set(AutoCompleteMode value) {
				textBox->AutoCompleteMode = value;
			}
			AutoCompleteMode get() {
				return textBox->AutoCompleteMode;
			}
		}
		property System::Windows::Forms::AutoCompleteSource AutoCompleteSource {
			void set(System::Windows::Forms::AutoCompleteSource value) {
				textBox->AutoCompleteSource = value;
			}
			System::Windows::Forms::AutoCompleteSource get() {
				return textBox->AutoCompleteSource;
			}
		}
		property String^ Title {
			void set(String^ value) {
				groupBox->Text = value;
			}
			String^ get() {
				return groupBox->Text;
			}
		}
		property CustomLabelWithButton^ LastLabel {
			void set(CustomLabelWithButton^ value) {
				m_lastLabel = value;
			}
			CustomLabelWithButton^ get() {
				return m_lastLabel;
			}
		}
		property List<String^>^ SelectedItems {
			List<String^>^ get() {
				return m_selected;
			}
		}
		property bool ButtonPanelsEditable {
			void set(bool value) {
				m_editable = value;
			}
			bool get() {
				return m_editable;
			}
		}
		property bool ButtonPanelsRemovable {
			void set(bool value) {
				m_removable = value;
			}
			bool get() {
				return m_removable;
			}
		}
		property List<String^>^ SelectedByDefaultItems {
			void set(List<String^>^ value) {
				AddButtonPanelsRange(value);
				m_SelectedByDefaultItems = value;
			}
			List<String^>^ get() {
				return m_SelectedByDefaultItems;
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SuperComboBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:





	private: System::Windows::Forms::GroupBox^ groupBox;



	private: System::Windows::Forms::TableLayoutPanel^ Items_tableLayoutPanel;
	private: System::Windows::Forms::Panel^ panel;







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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->Items_tableLayoutPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox->SuspendLayout();
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->groupBox, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(130, 110);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// groupBox
			// 
			this->groupBox->AutoSize = true;
			this->groupBox->Controls->Add(this->panel1);
			this->groupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox->Location = System::Drawing::Point(0, 0);
			this->groupBox->Margin = System::Windows::Forms::Padding(0);
			this->groupBox->MinimumSize = System::Drawing::Size(0, 110);
			this->groupBox->Name = L"groupBox";
			this->groupBox->Size = System::Drawing::Size(130, 110);
			this->groupBox->TabIndex = 1;
			this->groupBox->TabStop = false;
			this->groupBox->Text = L"groupBox1";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 16);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(124, 91);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &SuperComboBox::panel1_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoSize = true;
			this->flowLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowLayoutPanel1->Controls->Add(this->textBox);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(124, 29);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Click += gcnew System::EventHandler(this, &SuperComboBox::flowLayoutPanel1_Click);
			this->flowLayoutPanel1->ControlAdded += gcnew System::Windows::Forms::ControlEventHandler(this, &SuperComboBox::flowLayoutPanel1_ControlAdded);
			this->flowLayoutPanel1->ControlRemoved += gcnew System::Windows::Forms::ControlEventHandler(this, &SuperComboBox::flowLayoutPanel1_ControlRemoved);
			// 
			// textBox
			// 
			this->textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox->Location = System::Drawing::Point(3, 6);
			this->textBox->Margin = System::Windows::Forms::Padding(3, 6, 3, 3);
			this->textBox->MinimumSize = System::Drawing::Size(0, 20);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(121, 20);
			this->textBox->TabIndex = 0;
			this->textBox->Click += gcnew System::EventHandler(this, &SuperComboBox::textBox_Click);
			this->textBox->TextChanged += gcnew System::EventHandler(this, &SuperComboBox::textBox_TextChanged);
			this->textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SuperComboBox::textBox_KeyDown);
			// 
			// panel
			// 
			this->panel->AutoScroll = true;
			this->panel->AutoSize = true;
			this->panel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel->Controls->Add(this->Items_tableLayoutPanel);
			this->panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel->Location = System::Drawing::Point(0, 110);
			this->panel->Margin = System::Windows::Forms::Padding(0);
			this->panel->MaximumSize = System::Drawing::Size(0, 200);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(130, 0);
			this->panel->TabIndex = 1;
			// 
			// Items_tableLayoutPanel
			// 
			this->Items_tableLayoutPanel->AutoSize = true;
			this->Items_tableLayoutPanel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Items_tableLayoutPanel->ColumnCount = 1;
			this->Items_tableLayoutPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Items_tableLayoutPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Items_tableLayoutPanel->Location = System::Drawing::Point(0, 0);
			this->Items_tableLayoutPanel->Margin = System::Windows::Forms::Padding(0);
			this->Items_tableLayoutPanel->Name = L"Items_tableLayoutPanel";
			this->Items_tableLayoutPanel->RowCount = 1;
			this->Items_tableLayoutPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->Items_tableLayoutPanel->Size = System::Drawing::Size(130, 0);
			this->Items_tableLayoutPanel->TabIndex = 2;
			this->Items_tableLayoutPanel->Visible = false;
			// 
			// SuperComboBox
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(0);
			this->MinimumSize = System::Drawing::Size(130, 0);
			this->Name = L"SuperComboBox";
			this->Size = System::Drawing::Size(130, 110);
			this->Click += gcnew System::EventHandler(this, &SuperComboBox::SuperComboBox_Click);
			this->Enter += gcnew System::EventHandler(this, &SuperComboBox::SuperComboBox_Enter);
			this->Leave += gcnew System::EventHandler(this, &SuperComboBox::SuperComboBox_Leave);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->groupBox->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Void SuperComboBox_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox->Focus();
		ButtonPanelsShowLogic();		
	}
private: System::Void SuperComboBox_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox->Focus();
	ButtonPanelsShowLogic();
}
private: System::Void textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Back) {
		if (textBox->Text == "" && m_lastLabel != nullptr) {	
			m_lastLabel->ButtonPanelParent->Show();
			items[m_lastLabel->Title]->Show();
			m_lastLabel->Parent->Controls->Remove(m_lastLabel);
			ButtonPanelsVisible = true;
		}		
		return;
	}
	if (e->KeyCode == Keys::Enter) {
		bool flag = false;
		String^ ExactItem;
		for each (String ^ item in textBox->AutoCompleteCustomSource) {
			if (textBox->Text->ToLower() == item->ToLower()) {
				flag = true;
				ExactItem = item;
				break;
			}
		}
		if (!flag)
			return;
		textBox->Parent->Controls->Remove(textBox);
		ButtonPanel^ b_panel = items[ExactItem];
		CustomLabelWithButton^ label = gcnew CustomLabelWithButton(ExactItem, b_panel);
		flowLayoutPanel1->Controls->Add(label);
		b_panel->Hide();
		flowLayoutPanel1->Controls->Add(textBox);
		textBox->Clear();
		textBox->Focus();
		ButtonPanelsVisible = true;
		return;
	}
	if (e->KeyCode == Keys::Tab) {
		ButtonPanelsVisible = false;
	}
	
	if (e->KeyCode == Keys::Down) {
		
	}
	else if (e->KeyCode == Keys::Up) {

	}

}
private: System::Void flowLayoutPanel1_ControlRemoved(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	if (dynamic_cast<CustomLabelWithButton^>(e->Control)) {
		int index = flowLayoutPanel1->Controls->Count - 2;
		CustomLabelWithButton^ removed_label = dynamic_cast<CustomLabelWithButton^>(e->Control);
		if (index >= 0) {
			m_lastLabel = dynamic_cast<CustomLabelWithButton^>(flowLayoutPanel1->Controls[index]);
			m_selected->Remove(removed_label->Title);
			ButtonPanelsVisible = true;
		}			
		else m_lastLabel = nullptr;
		if (m_rtb == nullptr)
			return;
		m_rtb->Text = m_rtb->Text->Remove(m_rtb->Text->ToLower()->IndexOf(removed_label->Title), removed_label->Title->Length);
		m_rtb->Text = m_rtb->Text->Trim(gcnew array<wchar_t>(2){',', ' '});
	}
}
private: System::Void flowLayoutPanel1_ControlAdded(System::Object^ sender, System::Windows::Forms::ControlEventArgs^ e) {
	if (dynamic_cast<CustomLabelWithButton^>(e->Control)) {
		int index = flowLayoutPanel1->Controls->IndexOf(e->Control);
		m_lastLabel = dynamic_cast<CustomLabelWithButton^>(flowLayoutPanel1->Controls[index]);
		m_selected->Add(m_lastLabel->Title);
		if (m_rtb == nullptr)
			return;
		m_rtb->Text += ", " + m_lastLabel->Title;
		m_rtb->Text = m_rtb->Text->Trim(gcnew array<wchar_t>(2) { ',', ' ' });
		m_rtb->Text = m_rtb->Text->Replace(m_rtb->Text[0], Char::ToUpper(m_rtb->Text[0]));		
	}
}
private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	ButtonPanelsVisible = true;
}
private: System::Void SuperComboBox_Leave(System::Object^ sender, System::EventArgs^ e) {
	ButtonPanelsVisible = false;
}
private: System::Void textBox_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   // Открытие списка при:
	   // 1) Клике мышкой
	   // 2) Переходе фокуса на контрол
	   // Закрытие списка при:
	   // 1) Повторном клике мышкой
	   // 2) Покидании контрола
	   //
private: Void ButtonPanelsShowLogic() {
	if (m_locker->isLocked()) {
		return;
	}
	else {
		if (ButtonPanelsVisible) {
			ButtonPanelsVisible = false;
		}
		else {
			ButtonPanelsVisible = true;
		}
		m_locker->Lock();
	}
}
private: System::Void textBox_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox->Focus();
	ButtonPanelsShowLogic();
}
private: System::Void panel1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox->Focus();
	ButtonPanelsShowLogic();
}
private: System::Void flowLayoutPanel1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox->Focus();
	ButtonPanelsShowLogic();
}
};

}
