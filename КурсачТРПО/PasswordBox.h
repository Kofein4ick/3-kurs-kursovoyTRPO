#pragma once

namespace КурсачТРПО {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PasswordBox
	/// </summary>
	public ref class PasswordBox : public System::Windows::Forms::Form
	{
	public:
		PasswordBox(void)
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
		~PasswordBox()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OkButton;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	protected:

	private: System::Windows::Forms::Label^ label1;

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
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// OkButton
			// 
			this->OkButton->Location = System::Drawing::Point(531, 88);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(89, 30);
			this->OkButton->TabIndex = 0;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &PasswordBox::OkButton_Click);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(12, 55);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->PasswordChar = '*';
			this->PasswordTextBox->Size = System::Drawing::Size(495, 22);
			this->PasswordTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите пароль";
			// 
			// PasswordBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 128);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->OkButton);
			this->Name = L"PasswordBox";
			this->Text = L"PasswordBox";
			this->Load += gcnew System::EventHandler(this, &PasswordBox::PasswordBox_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//По нажатию кнопки Ok
	private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ pas = L"12345";
		if (PasswordTextBox->Text == pas) {//Проверка введного пароля
			this->DialogResult = System::Windows::Forms::DialogResult::OK;
		}
		else{
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		}
	}
		   //При загрузке формы
	private: System::Void PasswordBox_Load(System::Object^ sender, System::EventArgs^ e) {
		//Очистка полей ввода
		PasswordTextBox->Clear();
	}
};
}
