#pragma once
#include "Classes.h"
namespace КурсачТРПО {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ListVisitorForm
	/// </summary>
	public ref class ListVisitorForm : public System::Windows::Forms::Form
	{
	public:
		ListVisitorForm(void)
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
		~ListVisitorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ NameHeader;
	private: System::Windows::Forms::ColumnHeader^ AgeHeader;
	private: System::Windows::Forms::ColumnHeader^ ProHeader;
	private: System::Windows::Forms::ColumnHeader^ EdHeader;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->NameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->AgeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->ProHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->EdHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->NameHeader, this->AgeHeader,
					this->ProHeader, this->EdHeader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(7, 8);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(855, 481);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// NameHeader
			// 
			this->NameHeader->Text = L"ФИО";
			this->NameHeader->Width = 256;
			// 
			// AgeHeader
			// 
			this->AgeHeader->Text = L"Возраст";
			this->AgeHeader->Width = 79;
			// 
			// ProHeader
			// 
			this->ProHeader->Text = L"Профессия";
			this->ProHeader->Width = 256;
			// 
			// EdHeader
			// 
			this->EdHeader->Text = L"Образование";
			this->EdHeader->Width = 256;
			// 
			// ListVisitorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(865, 495);
			this->Controls->Add(this->listView1);
			this->Name = L"ListVisitorForm";
			this->Text = L"ListVisitorForm";
			this->Load += gcnew System::EventHandler(this, &ListVisitorForm::ListVisitorForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListVisitorForm_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (ListVis())
		{
		case 1: {this->Close(); exit(1); }//ошибка открытия файла
		case 2: {this->Close(); break; }//файл пуст
		}
	}
		   int ListVis()
		   {
			   String^ str;//строка
			   Visitor vis;//объект класса Visitor
			   FILE* FVisitir;//указатель для файла
			   Iface* pI;//указатель интерфейса
			   pI = &vis;//работаем с методами класса Visitor
			   FVisitir = fopen("Visitor.bin", "rb");
			   if (FVisitir == NULL)//проверка открытия файла
			   {
				   MessageBox::Show("Не удалось открыть файл Visitor.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 1;
			   }
			   if (pI->ReadFile(FVisitir) != 0)//Считываем файл
			   {
				   MessageBox::Show("База посетителей пуста", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
				   fclose(FVisitir);
				   return 2;
			   }
			   rewind(FVisitir);
			   while (pI->ReadFile(FVisitir) == 0)//считываем файл до конца
			   {
				   //создаем элементы списка
				   ListViewItem^ item1 = gcnew ListViewItem();
				   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
				   //заполняем элементы
				   str = gcnew String(vis.GetVName());
				   item1->Text = str;
				   subitem2->Text = Convert::ToString(vis.GetAge());
				   str = gcnew String(vis.GetProfession());
				   subitem3->Text = str;
				   str = gcnew String(vis.GetEducation());
				   subitem4->Text = str;
				   //добавляем элменты в список
				   item1->SubItems->Add(subitem2);
				   item1->SubItems->Add(subitem3);
				   item1->SubItems->Add(subitem4);
				   listView1->Items->Add(item1);
			   }
			   fclose(FVisitir);
			   vis.~Visitor();
			   return 0;
		   }
	};
}
