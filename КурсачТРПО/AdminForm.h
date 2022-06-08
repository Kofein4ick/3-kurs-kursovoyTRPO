#pragma once
#include "AddEventForm.h"//Окно добавления мероприятия
#include "DeleteEventForm.h"//Окно удаления мероприятия
#include "ListBuildingForm.h"//Окно списка заведений
#include "ListEventForm.h"//Окно списка мероприятий
#include "ListVisitorForm.h"//Окно списка посетителей


namespace КурсачТРПО {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::Button^ LEButton;
	private: System::Windows::Forms::Button^ LVButton;
	private: System::Windows::Forms::Button^ ClearButton;
	protected:

	protected:




	private: System::Windows::Forms::Button^ LBButton;


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
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->LEButton = (gcnew System::Windows::Forms::Button());
			this->LVButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->LBButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(41, 32);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(234, 29);
			this->AddButton->TabIndex = 0;
			this->AddButton->Text = L"Добавить мероприятие";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &AdminForm::AddButton_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->Location = System::Drawing::Point(42, 82);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(233, 29);
			this->DeleteButton->TabIndex = 1;
			this->DeleteButton->Text = L"Удалить мероприятие";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &AdminForm::DeleteButton_Click);
			// 
			// LEButton
			// 
			this->LEButton->Location = System::Drawing::Point(42, 138);
			this->LEButton->Name = L"LEButton";
			this->LEButton->Size = System::Drawing::Size(233, 48);
			this->LEButton->TabIndex = 2;
			this->LEButton->Text = L"Вывести список все мероприятий";
			this->LEButton->UseVisualStyleBackColor = true;
			this->LEButton->Click += gcnew System::EventHandler(this, &AdminForm::LEButton_Click);
			// 
			// LVButton
			// 
			this->LVButton->Location = System::Drawing::Point(41, 254);
			this->LVButton->Name = L"LVButton";
			this->LVButton->Size = System::Drawing::Size(234, 48);
			this->LVButton->TabIndex = 3;
			this->LVButton->Text = L"Вывести список всех посетителей";
			this->LVButton->UseVisualStyleBackColor = true;
			this->LVButton->Click += gcnew System::EventHandler(this, &AdminForm::LVButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Location = System::Drawing::Point(42, 321);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(233, 29);
			this->ClearButton->TabIndex = 4;
			this->ClearButton->Text = L"Очистка всех файлов";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &AdminForm::ClearButton_Click);
			// 
			// LBButton
			// 
			this->LBButton->Location = System::Drawing::Point(42, 207);
			this->LBButton->Name = L"LBButton";
			this->LBButton->Size = System::Drawing::Size(233, 29);
			this->LBButton->TabIndex = 5;
			this->LBButton->Text = L"Вывести список всех заведений";
			this->LBButton->UseVisualStyleBackColor = true;
			this->LBButton->Click += gcnew System::EventHandler(this, &AdminForm::LBButton_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(325, 386);
			this->Controls->Add(this->LBButton);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->LVButton);
			this->Controls->Add(this->LEButton);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->AddButton);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->ResumeLayout(false);

		}
#pragma endregion
		//По нажатию кнопки добавления мероприятия
private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AddEventForm^ adefrm = gcnew AddEventForm();
	adefrm->ShowDialog();//Вызов окна добавления как модальное
}
	   //По нажатию кнопки удаления мероприятия
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteEventForm^ defrm = gcnew DeleteEventForm();
	defrm->ShowDialog();//Вызов окна удаления как модальное
}
	   //По нажатию кнопки списка мероприятий
private: System::Void LEButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ListEventForm^ lefrm = gcnew ListEventForm();
	lefrm->Show();//Вызов окна списка мероприятий
}
	   //По нажатию кнопки списка заведений
private: System::Void LBButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ListBuildingForm^ lbfrm = gcnew ListBuildingForm();
	lbfrm->Show();//Вызов окна списка заведений
}
	   //По нажатию кнопки списка посетителей
private: System::Void LVButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ListVisitorForm^ lvfrm = gcnew ListVisitorForm();
	lvfrm->Show();//Вызов окна списка посетителей
}
	   //По нажатию кнопки очистки файлов
private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* f;
	f = fopen("Building.bin", "wb+");//Открываем файл в формате чтения с удалениеми содержимого
	if (f == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit (1);
	}
	fclose(f);
	f = fopen("Visitor.bin", "wb+");//Открываем файл в формате чтения с удалениеми содержимого
	if (f == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Visitor.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(2);
	}
	fclose(f);
	f = fopen("Event.bin", "wb+");//Открываем файл в формате чтения с удалениеми содержимого
	if (f == NULL)
	{
		MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		exit(3);
	}
	fclose(f);
	MessageBox::Show("Базы успешно очищены", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
}
};
}
