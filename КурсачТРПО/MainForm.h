#pragma once
#include "Forms.h"
#include "Refresh.h"

namespace КурсачТРПО {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ AdminButton;
	private: System::Windows::Forms::Button^ CreatProgButton;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::Button^ TicketButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->AdminButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->CreatProgButton = (gcnew System::Windows::Forms::Button());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->TicketButton = (gcnew System::Windows::Forms::Button());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->AdminButton });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip1->Size = System::Drawing::Size(465, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// AdminButton
			// 
			this->AdminButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->AdminButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AdminButton.Image")));
			this->AdminButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->AdminButton->Name = L"AdminButton";
			this->AdminButton->Size = System::Drawing::Size(29, 24);
			this->AdminButton->Text = L"Admin";
			this->AdminButton->Click += gcnew System::EventHandler(this, &MainForm::AdminButton_Click);
			// 
			// CreatProgButton
			// 
			this->CreatProgButton->Location = System::Drawing::Point(110, 60);
			this->CreatProgButton->Name = L"CreatProgButton";
			this->CreatProgButton->Size = System::Drawing::Size(224, 39);
			this->CreatProgButton->TabIndex = 1;
			this->CreatProgButton->Text = L"Составление программы отдых";
			this->CreatProgButton->UseVisualStyleBackColor = true;
			this->CreatProgButton->Click += gcnew System::EventHandler(this, &MainForm::CreatProgButton_Click);
			// 
			// SearchButton
			// 
			this->SearchButton->Location = System::Drawing::Point(110, 134);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(224, 39);
			this->SearchButton->TabIndex = 2;
			this->SearchButton->Text = L"Поиск мероприятия";
			this->SearchButton->UseVisualStyleBackColor = true;
			this->SearchButton->Click += gcnew System::EventHandler(this, &MainForm::SearchButton_Click);
			// 
			// TicketButton
			// 
			this->TicketButton->Location = System::Drawing::Point(110, 211);
			this->TicketButton->Name = L"TicketButton";
			this->TicketButton->Size = System::Drawing::Size(221, 39);
			this->TicketButton->TabIndex = 3;
			this->TicketButton->Text = L"Покупка билетов";
			this->TicketButton->UseVisualStyleBackColor = true;
			this->TicketButton->Click += gcnew System::EventHandler(this, &MainForm::TicketButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 340);
			this->Controls->Add(this->TicketButton);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->CreatProgButton);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//При нажатии кнопки управления
	private: System::Void AdminButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (RefreshFunc() != 0)
		{
			MessageBox::Show("Ошибка обновления информации", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			exit(1);
		}
		PasswordBox^ pasb = gcnew PasswordBox();
		pasb->ShowDialog();//Вызов окна ввода пароля
		if (pasb->DialogResult == System::Windows::Forms::DialogResult::OK) {//Если пароль верный
			AdminForm^ admfrm = gcnew AdminForm();
			admfrm->ShowDialog();//вызов окна управления
		}
	}
		   //При нажатии на кнопку составления программы
private: System::Void CreatProgButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RefreshFunc() != 0)
	{
		MessageBox::Show("Ошибка обновления информации", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(1);
	}
	CreatProgForm^ cpfrm = gcnew CreatProgForm();
	cpfrm->Show();//Вызов окна составления программы

}
	   //При нажатии на кнопку поиска мероприятия
private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RefreshFunc() != 0)
	{
		MessageBox::Show("Ошибка обновления информации", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(1);
	}
	SearchEventForm^ sefrm = gcnew SearchEventForm();
	sefrm->Show();//Вызов окна поиска
}
	   //При нажатии на кнопку покупки
private: System::Void TicketButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (RefreshFunc() != 0)
	{
		MessageBox::Show("Ошибка обновления информации", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(1);
	}
	BuyTicketForm^ btfrm = gcnew BuyTicketForm();
	btfrm->Show();//Вызов окна покупки

}
	   //При загрузке формы
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (RefreshFunc() != 0) //Вызов функции обновления баз
	{
		MessageBox::Show("Ошибка обновления информации", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(1);
	}
}
};
}
