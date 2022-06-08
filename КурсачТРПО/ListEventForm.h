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
	/// Сводка для ListEventForm
	/// </summary>
	public ref class ListEventForm : public System::Windows::Forms::Form
	{
	public:
		ListEventForm(void)
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
		~ListEventForm()
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
	private: System::Windows::Forms::ColumnHeader^ AllTicketHeader;
	private: System::Windows::Forms::ColumnHeader^ TicketHeader;
	private: System::Windows::Forms::ColumnHeader^ PriceHeader;
	private: System::Windows::Forms::ColumnHeader^ BuildNameHeader;
	private: System::Windows::Forms::ColumnHeader^ DateHeader;

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
			this->AllTicketHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->TicketHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->PriceHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->BuildNameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->CodeHeader, this->NameHeader,
					this->TypeHeader, this->AllTicketHeader, this->TicketHeader, this->PriceHeader, this->BuildNameHeader, this->DateHeader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 14);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1195, 441);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// CodeHeader
			// 
			this->CodeHeader->Text = L"Код";
			// 
			// NameHeader
			// 
			this->NameHeader->Text = L"Название";
			this->NameHeader->Width = 180;
			// 
			// TypeHeader
			// 
			this->TypeHeader->Text = L"Тип";
			this->TypeHeader->Width = 138;
			// 
			// AllTicketHeader
			// 
			this->AllTicketHeader->Text = L"Кол-во билетов";
			this->AllTicketHeader->Width = 132;
			// 
			// TicketHeader
			// 
			this->TicketHeader->Text = L"Кол-во оставшихся билетов";
			this->TicketHeader->Width = 205;
			// 
			// PriceHeader
			// 
			this->PriceHeader->Text = L"Стоимость билета";
			this->PriceHeader->Width = 151;
			// 
			// BuildNameHeader
			// 
			this->BuildNameHeader->Text = L"Место проведения";
			this->BuildNameHeader->Width = 181;
			// 
			// DateHeader
			// 
			this->DateHeader->Text = L"Дата и время";
			this->DateHeader->Width = 130;
			// 
			// ListEventForm
			// (
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1219, 467);
			this->Controls->Add(this->listView1);
			this->Name = L"ListEventForm";
			this->Text = L"ListEventForm";
			this->Load += gcnew System::EventHandler(this, &ListEventForm::ListEventForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListEventForm_Load(System::Object^ sender, System::EventArgs^ e) {
		switch (ListEvent())
		{
		case 1: {ListEventForm::Close(); exit(1); }//ошибка открытия файла
		case 2: {ListEventForm::Close(); break; }//файл пуст
		case 3: {ListEventForm::Close(); exit(3); }//ошибка открытия файла
		}
	}

		   int ListEvent()
		   {
			   String^ str;//строка
			   //объект классов
			   Event ev;
			   Building build;
			   //указатели для файла
			   FILE* FEvent;
			   FILE* FBuild;
			   DateTime date;//пременная для работы с датой/временем
			   Iface* pI = &ev;//указатель интерфейса
			   FEvent = fopen("Event.bin", "rb+");
			   if (FEvent == NULL)//проверка открытия файла
			   {
				   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 1;
			   }
			   if (pI->ReadFile(FEvent) != 0)//Считываем файл
			   {
				   MessageBox::Show("База мепроприятий пуста", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
				   fclose(FEvent);
				   return 2;
			   }
			   FBuild = fopen("Building.bin", "rb+");
			   if (FBuild == NULL)//проверка открытия файла
			   {
				   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 3;
			   }
			   rewind(FEvent);
			   while (pI->ReadFile(FEvent) == 0)//считываем файл до конца
			   {
				   //создаем элементы списка
				   ListViewItem^ item1 = gcnew ListViewItem();
				   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem6 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem7 = gcnew ListViewItem::ListViewSubItem();
				   ListViewItem::ListViewSubItem^ subitem8 = gcnew ListViewItem::ListViewSubItem();
				   //заполняем элементы
				   item1->Text = Convert::ToString(ev.GetECode());
				   str = gcnew String(ev.GetEName());
				   subitem2->Text = str;
				   str = gcnew String(ev.GetEType());
				   subitem3->Text = str;
				   subitem4->Text = Convert::ToString(ev.GetAllTickets());
				   subitem5->Text = Convert::ToString(ev.GetAllTickets() - ev.GetSoldTickets());
				   subitem6->Text = Convert::ToString(ev.GetPrice());
				   pI = &build;
				   while (pI->ReadFile(FBuild) == 0)
				   {
					   if (build.GetBCode() == ev.GetBCode())
						   break;
				   }
				   str = gcnew String(build.GetBName());
				   subitem7->Text = str;
				   date = date.AddHours(ev.GetDate().tm_hour);
				   date = date.AddMinutes(ev.GetDate().tm_min);
				   date = date.AddDays(ev.GetDate().tm_mday-1);
				   date = date.AddMonths(ev.GetDate().tm_mon-1);
				   date = date.AddYears(ev.GetDate().tm_year-1);
				   subitem8->Text = Convert::ToString(date);
				   fseek(FBuild, 0, SEEK_SET);
				   //добавляем элменты в список
				   item1->SubItems->Add(subitem2);
				   item1->SubItems->Add(subitem3);
				   item1->SubItems->Add(subitem4);
				   item1->SubItems->Add(subitem5);
				   item1->SubItems->Add(subitem6);
				   item1->SubItems->Add(subitem7);
				   item1->SubItems->Add(subitem8);
				   listView1->Items->Add(item1);
				   date = date.AddHours(-date.Hour);
				   date = date.AddMinutes(-date.Minute);
				   date = date.AddDays(-date.Day + 1);
				   date = date.AddMonths(-date.Month + 1);
				   date = date.AddYears(-date.Year + 1);
				   pI = &ev;
			   }
			   fclose(FBuild);
			   fclose(FEvent);
			   build.~Building();
			   ev.~Event();
			   return 0;
		   }
};
}
