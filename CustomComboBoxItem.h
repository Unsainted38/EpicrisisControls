#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UnsaintedControls {

	/// <summary>
	/// ������ ��� CustomComboBoxItem
	/// </summary>
	public ref class CustomComboBoxItem : public System::Windows::Forms::UserControl
	{
	public:
		CustomComboBoxItem(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		CustomComboBoxItem(String^ text)
		{
			this->InitializeComponent();
			this->label->Text = text;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CustomComboBoxItem()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Label^ label;
		Button^ deleteButton;
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
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->label = gcnew Label();
			this->deleteButton = gcnew Button();

			// ��������� Label
			this->label->AutoSize = true;
			this->label->Location = Point(10, 10);

			// ��������� ������ ��������
			this->deleteButton->Size = System::Drawing::Size(20, 20);
			this->deleteButton->Image = Image::FromFile("C:\\Users\\erik\\develop\\host\\common\\libs\\UnsaintedControls\\Icons\\trash_can_icon.png"); // ���������� ���� � ������ �������
			this->deleteButton->Location = Point(100, 5); // ���������������� ������
			this->deleteButton->Click += gcnew EventHandler(this, &CustomComboBoxItem::OnDeleteClicked);

			// ��������� �������� � ���������������� �������
			this->Controls->Add(this->label);
			this->Controls->Add(this->deleteButton);

			this->Size = System::Drawing::Size(150, 30);
		}
#pragma endregion
		void OnDeleteClicked(Object^ sender, EventArgs^ e)
		{
			// ������ ��� �������� ��� ������ ��������
			MessageBox::Show("������� �����: " + this->label->Text);
		}

	};
	
}
