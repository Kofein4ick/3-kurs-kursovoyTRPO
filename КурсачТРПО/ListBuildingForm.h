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
	/// Сводка для ListBuildingForm
	/// </summary>
	public ref class ListBuildingForm : public System::Windows::Forms::Form
	{
	public:
		ListBuildingForm(void)
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
		~ListBuildingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ CodeHeader;
	private: System::Windows::Forms::ColumnHeader^ NameHeader;
	private: System::Windows::Forms::ColumnHeader^ TypeHeader;

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
			this->CodeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->NameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->TypeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->CodeHeader, this->NameHeader,
					this->TypeHeader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(4, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(936, 486);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CodeHeader
			// 
			this->CodeHeader->Text = L"Код";
			this->CodeHeader->Width = 70;
			// 
			// NameHeader
			// 
			this->NameHeader->Text = L"Название";
			this->NameHeader->Width = 283;
			// 
			// TypeHeader
			// 
			this->TypeHeader->Text = L"Тип";
			this->TypeHeader->Width = 328;
			// 
			// ListBuildingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(952, 510);
			this->Controls->Add(this->listView1);
			this->Name = L"ListBuildingForm";
			this->Text = L"ListBuildingForm";
			this->Load += gcnew System::EventHandler(this, &ListBuildingForm::ListBuildingForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListBuildingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (ListBuild())
		{
		case 1: {ListBuildingForm::Close(); exit(1); }//ошибка открытия файла
		case 2: {ListBuildingForm::Close(); break; }//файл пуст
		}

	}
		   int ListBuild()
		   {
			   String^ str;//строка
			   Building build;//объект класса  Building
			   FILE* FBuild;//указатель для файла
			   Iface* pI;//указатель интерфейса
			   pI = &build;//работаем с методами класса Building
			   FBuild = fopen("Building.bin", "rb");
			   if (FBuild == NULL)//проверка открытия файла
			   {
				   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 1;
			   }
			   if (pI->ReadFile(FBuild) != 0)//Считываем файл
			   {
				   MessageBox::Show("База заведений пуста", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
				   fclose(FBuild);
				   return 2;
			   }
			   rewind(FBuild);
			   while (pI->ReadFile(FBuild) == 0)//считываем файл до конца
			   {
				   //создаем элементы списка
				   ListViewItem^ item1 = gcnew ListViewItem();
				   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
				   //заполняем элементы
				   str = Convert::ToString(build.GetBCode());
				   item1->Text = str;
				   str = gcnew String(build.GetBName());
				   subitem2->Text = str;
				   str = gcnew String(build.GetBType());
				   subitem3->Text = str;
				   //добавляем элменты в список
				   item1->SubItems->Add(subitem2);
				   item1->SubItems->Add(subitem3);
				   listView1->Items->Add(item1);
			   }
			   fclose(FBuild);
			   build.~Building();
			   return 0;
		   }
	};
}
