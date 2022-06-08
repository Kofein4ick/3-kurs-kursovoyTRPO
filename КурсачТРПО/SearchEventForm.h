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
	/// Сводка для SearchEventForm
	/// </summary>
	public ref class SearchEventForm : public System::Windows::Forms::Form
	{
	public:
		SearchEventForm(void)
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
		~SearchEventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ NameETextBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ OkButton;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ NameHeader;
	private: System::Windows::Forms::ColumnHeader^ TypeHeader;
	private: System::Windows::Forms::ColumnHeader^ AllTicketHeader;
	private: System::Windows::Forms::ColumnHeader^ TicketHeader;
	private: System::Windows::Forms::ColumnHeader^ PriceHeader;
	private: System::Windows::Forms::ColumnHeader^ BuildNameHeader;
	private: System::Windows::Forms::ColumnHeader^ DateHeader;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TypeETextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ NameBTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TypeBTextBox;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ ResetButton;

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
			this->NameETextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->NameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->TypeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->AllTicketHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->TicketHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->PriceHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->BuildNameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TypeETextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NameBTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TypeBTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NameETextBox
			// 
			this->NameETextBox->Location = System::Drawing::Point(369, 33);
			this->NameETextBox->Name = L"NameETextBox";
			this->NameETextBox->Size = System::Drawing::Size(464, 22);
			this->NameETextBox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите название мероприятия";
			// 
			// OkButton
			// 
			this->OkButton->Location = System::Drawing::Point(989, 12);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(116, 29);
			this->OkButton->TabIndex = 2;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &SearchEventForm::OkButton_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->NameHeader, this->TypeHeader,
					this->AllTicketHeader, this->TicketHeader, this->PriceHeader, this->BuildNameHeader, this->DateHeader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 61);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1125, 398);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Visible = false;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите тип мероприятия";
			// 
			// TypeETextBox
			// 
			this->TypeETextBox->Location = System::Drawing::Point(369, 81);
			this->TypeETextBox->Name = L"TypeETextBox";
			this->TypeETextBox->Size = System::Drawing::Size(464, 22);
			this->TypeETextBox->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите название заведения";
			// 
			// NameBTextBox
			// 
			this->NameBTextBox->Location = System::Drawing::Point(369, 128);
			this->NameBTextBox->Name = L"NameBTextBox";
			this->NameBTextBox->Size = System::Drawing::Size(464, 22);
			this->NameBTextBox->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Введите тип заведения";
			// 
			// TypeBTextBox
			// 
			this->TypeBTextBox->Location = System::Drawing::Point(369, 170);
			this->TypeBTextBox->Name = L"TypeBTextBox";
			this->TypeBTextBox->Size = System::Drawing::Size(464, 22);
			this->TypeBTextBox->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 212);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Введите дату и время мероприятия";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy, HH:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(369, 212);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// ResetButton
			// 
			this->ResetButton->Location = System::Drawing::Point(993, 12);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(112, 29);
			this->ResetButton->TabIndex = 12;
			this->ResetButton->Text = L"Новый поиск";
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Visible = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &SearchEventForm::ResetButton_Click);
			// 
			// SearchEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 471);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TypeBTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NameBTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TypeETextBox);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->OkButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameETextBox);
			this->Name = L"SearchEventForm";
			this->Text = L"SearchEventForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//При нажатии кнопки Ok
private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (SearchFunc())//Вызов функции поиска
	{

	case 1: break;//Ошибка некорректного ввода
	//Ошибки файлов
	case 2: exit(2);
	case 3: exit(3);
	case 4: 
	{
		MessageBox::Show("Поиск не дал результатов", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		break;
	}
	}
}
	   int SearchFunc()
	   {
		   //Объекты классов
		   Building build;
		   Event ev;
		   //Указатели для файлов
		   FILE* FBuild;
		   FILE* FEvent;
		   Iface* pI;//Указатель интерфейса
		   DateTime Date;//Переменная для работы с датой/временем
		   String^ str;//указатель на строку
		   unsigned int BuildCode;//Код заведения
		   //Массивы для имен и типов заведения и мероприятия
		   wchar_t BuildName[256];
		   wchar_t BuildType[256];
		   wchar_t EventName[256];
		   wchar_t EventType[256];
		   bool flags[5];//Массив флагов проверки ввода
		   bool flag = false;//Вспомогательный флаг
		   unsigned short count = 0;//Счётчик
		   //очистка массивов
		   memset(EventType, 0, sizeof(wchar_t) * 256);
		   memset(EventName, 0, sizeof(wchar_t) * 256);
		   memset(BuildType, 0, sizeof(wchar_t) * 256);
		   memset(BuildName, 0, sizeof(wchar_t) * 256);
		   memset(flags, false, sizeof(bool) * 5);
		   //Проверка корректности ввода
		   if ((NameETextBox->Text->Length < 256) && (NameETextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < NameETextBox->Text->Length; i++)
				   EventName[i] = NameETextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   flags[0] = true;
			   NameETextBox->Clear();
		   }
		   if ((TypeETextBox->Text->Length < 256) && (TypeETextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < TypeETextBox->Text->Length; i++)
				   EventType[i] = TypeETextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   flags[1] = true;
			   TypeETextBox->Clear();
		   }
		   if ((NameBTextBox->Text->Length < 256) && (NameBTextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < NameBTextBox->Text->Length; i++)
				   BuildName[i] = NameBTextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   flags[2] = true;
			   NameBTextBox->Clear();
		   }
		   if ((TypeBTextBox->Text->Length < 256) && (TypeBTextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < TypeBTextBox->Text->Length; i++)
				   BuildType[i] = TypeBTextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   flags[3] = true;
			   TypeBTextBox->Clear();
		   }
		   if ((dateTimePicker1->Value.Year < DateTime::Now.Year) || ((dateTimePicker1->Value.Month < DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day < DateTime::Now.Day) && (dateTimePicker1->Value.Month == DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day == DateTime::Now.Day) && (dateTimePicker1->Value.Hour <= DateTime::Now.Hour) && (dateTimePicker1->Value.Month == DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)))
		   {
			   flags[4] = true;
		   }
		   for (int i = 0; i < 5; i++)
			   if (flags[i] == true)
				   count++;
		   if (count == 5)
		   {
			   MessageBox::Show("Заполните хотя бы одно поле", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 1;
		   }
		   //открытие файлов
		   FBuild = fopen("Building.bin", "rb+");
		   if (FBuild == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 2;
		   }
		   FEvent = fopen("Event.bin", "rb+");
		   if (FEvent == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   fclose(FBuild);
			   return 3;
		   }
		   //Поиск по именам и типам заведения и мероприятия
		   if ((flags[0] == false) && (flags[1] == false) && (flags[2] == false) && (flags[3] == false))
		   {
			   pI = &build;//Работаем с методами класса Building
			   while (pI->ReadFile(FBuild) == 0)//считываем файл полностью
			   {
				   if ((wcscmp(BuildType, build.GetBType()) == 0) && (wcscmp(BuildName, build.GetBName()) == 0))//сравнение строк
				   {
					   BuildCode = build.GetBCode();//Сохранение кода заведения
					   pI = &ev;//Работаем с методами класса Event
					   while (pI->ReadFile(FEvent) == 0)//Считываем файл
					   { //Проверка считанной информации
						   if ((ev.GetAllTickets() - ev.GetSoldTickets() != 0) && ((BuildCode == ev.GetBCode()) && ((wcscmp(EventType, ev.GetEType()) == 0) && (wcscmp(EventName, ev.GetEName()) == 0))))//сравнение строк
						   {
							   flag = true;
							   //Выделение памяти под элементы списка
							   ListViewItem^ item1 = gcnew ListViewItem();
							   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem6 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem7 = gcnew ListViewItem::ListViewSubItem();
							   //заполняем элементы
							   str = gcnew String(ev.GetEName());
							   item1->Text = str;
							   str = gcnew String(ev.GetEType());
							   subitem2->Text = str;
							   subitem3->Text = Convert::ToString(ev.GetAllTickets());;
							   subitem4->Text = Convert::ToString(ev.GetAllTickets() - ev.GetSoldTickets());
							   subitem5->Text = Convert::ToString(ev.GetPrice());
							   str = gcnew String(build.GetBName());
							   subitem6->Text = str;
							   Date = Date.AddHours(ev.GetDate().tm_hour);
							   Date = Date.AddMinutes(ev.GetDate().tm_min);
							   Date = Date.AddDays(ev.GetDate().tm_mday - 1);
							   Date = Date.AddMonths(ev.GetDate().tm_mon - 1);
							   Date = Date.AddYears(ev.GetDate().tm_year - 1);
							   subitem7->Text = Convert::ToString(Date);
							   //добавляем элменты в список
							   item1->SubItems->Add(subitem2);
							   item1->SubItems->Add(subitem3);
							   item1->SubItems->Add(subitem4);
							   item1->SubItems->Add(subitem5);
							   item1->SubItems->Add(subitem6);
							   item1->SubItems->Add(subitem7);
							   listView1->Items->Add(item1);
							   Date = Date.AddHours(-Date.Hour);
							   Date = Date.AddMinutes(-Date.Minute);
							   Date = Date.AddDays(-Date.Day + 1);
							   Date = Date.AddMonths(-Date.Month + 1);
							   Date = Date.AddYears(-Date.Year + 1);
						   }
					   }
					   fseek(FEvent, 0, SEEK_SET);//Возвращаем каретку в начало файла
					   pI = &build;//Работаем с методами класса Building
				   }
			   }
		   }
		   else //Поиск по имени или типу или дате мероприятия
			   if ((flags[0] == false) || (flags[1] == false) || (flags[4] == false))
			   {
				   pI = &ev;//Работаем с мтеодами класса Event
				   while (pI->ReadFile(FEvent) == 0)//считываем файл полностью
				   {
					   if (flags[4] == false)//Если дата не введена
					   {
						   if ((ev.GetAllTickets() - ev.GetSoldTickets() != 0) && ((wcscmp(EventType, ev.GetEType()) == 0) || (wcscmp(EventName, ev.GetEName()) == 0) && ((ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute))))//сравнение строк
						   {
							   flag = true;
							   ListViewItem^ item1 = gcnew ListViewItem();
							   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem6 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem7 = gcnew ListViewItem::ListViewSubItem();
							   //заполняем элементы
							   str = gcnew String(ev.GetEName());
							   item1->Text = str;
							   str = gcnew String(ev.GetEType());
							   subitem2->Text = str;
							   subitem3->Text = Convert::ToString(ev.GetAllTickets());;
							   subitem4->Text = Convert::ToString(ev.GetAllTickets() - ev.GetSoldTickets());
							   subitem5->Text = Convert::ToString(ev.GetPrice());
							   pI = &build;
							   while (pI->ReadFile(FBuild) == 0)
							   {
								   if (build.GetBCode() == ev.GetBCode())
									   break;
							   }
							   str = gcnew String(build.GetBName());
							   subitem6->Text = str;
							   Date = Date.AddHours(ev.GetDate().tm_hour);
							   Date = Date.AddMinutes(ev.GetDate().tm_min);
							   Date = Date.AddDays(ev.GetDate().tm_mday - 1);
							   Date = Date.AddMonths(ev.GetDate().tm_mon - 1);
							   Date = Date.AddYears(ev.GetDate().tm_year - 1);
							   subitem7->Text = Convert::ToString(Date);
							   fseek(FBuild, 0, SEEK_SET);
							   //добавляем элменты в список
							   item1->SubItems->Add(subitem2);
							   item1->SubItems->Add(subitem3);
							   item1->SubItems->Add(subitem4);
							   item1->SubItems->Add(subitem5);
							   item1->SubItems->Add(subitem6);
							   item1->SubItems->Add(subitem7);
							   listView1->Items->Add(item1);
							   pI = &ev;
							   Date = Date.AddHours(-Date.Hour);
							   Date = Date.AddMinutes(-Date.Minute);
							   Date = Date.AddDays(-Date.Day + 1);
							   Date = Date.AddMonths(-Date.Month + 1);
							   Date = Date.AddYears(-Date.Year + 1);
						   }
					   }
					   else//Если дата введена
						   if ((ev.GetAllTickets() - ev.GetSoldTickets() != 0) && ((wcscmp(EventType, ev.GetEType()) == 0) || (wcscmp(EventName, ev.GetEName()) == 0) || ((ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute))))//сравнение строк
						   {
							   flag = true;
							   ListViewItem^ item1 = gcnew ListViewItem();
							   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem6 = gcnew ListViewItem::ListViewSubItem();
							   ListViewItem::ListViewSubItem^ subitem7 = gcnew ListViewItem::ListViewSubItem();
							   //заполняем элементы
							   str = gcnew String(ev.GetEName());
							   item1->Text = str;
							   str = gcnew String(ev.GetEType());
							   subitem2->Text = str;
							   subitem3->Text = Convert::ToString(ev.GetAllTickets());;
							   subitem4->Text = Convert::ToString(ev.GetAllTickets() - ev.GetSoldTickets());
							   subitem5->Text = Convert::ToString(ev.GetPrice());
							   pI = &build;
							   while (pI->ReadFile(FBuild) == 0)
							   {
								   if (build.GetBCode() == ev.GetBCode())
									   break;
							   }
							   str = gcnew String(build.GetBName());
							   subitem6->Text = str;
							   Date = Date.AddHours(ev.GetDate().tm_hour);
							   Date = Date.AddMinutes(ev.GetDate().tm_min);
							   Date = Date.AddDays(ev.GetDate().tm_mday - 1);
							   Date = Date.AddMonths(ev.GetDate().tm_mon - 1);
							   Date = Date.AddYears(ev.GetDate().tm_year - 1);
							   subitem7->Text = Convert::ToString(Date);
							   fseek(FBuild, 0, SEEK_SET);
							   //добавляем элменты в список
							   item1->SubItems->Add(subitem2);
							   item1->SubItems->Add(subitem3);
							   item1->SubItems->Add(subitem4);
							   item1->SubItems->Add(subitem5);
							   item1->SubItems->Add(subitem6);
							   item1->SubItems->Add(subitem7);
							   listView1->Items->Add(item1);
							   pI = &ev;
							   Date = Date.AddHours(-Date.Hour);
							   Date = Date.AddMinutes(-Date.Minute);
							   Date = Date.AddDays(-Date.Day + 1);
							   Date = Date.AddMonths(-Date.Month + 1);
							   Date = Date.AddYears(-Date.Year + 1);
						   }
				   }
			   }
			   else//Поиск по имени или типу заведения
				   if ((flags[2] == false) || (flags[3] == false))
				   {
					   pI = &build;
					   while (pI->ReadFile(FBuild) == 0)//считываем файл полностью
					   {
						   if (((wcscmp(BuildType, build.GetBType()) == 0) || (wcscmp(BuildName, build.GetBName()) == 0)))//сравнение строк
						   {
							   BuildCode = build.GetBCode();
							   pI = &ev;
							   while (pI->ReadFile(FEvent) == 0)
							   {
								   if ((ev.GetAllTickets() - ev.GetSoldTickets() != 0) && ((BuildCode == ev.GetBCode()) || ((wcscmp(EventType, ev.GetEType()) == 0) || (wcscmp(EventName, ev.GetEName()) == 0) || ((ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute)))))//сравнение строк
								   {
									   flag = true;
									   ListViewItem^ item1 = gcnew ListViewItem();
									   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
									   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
									   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
									   ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
									   ListViewItem::ListViewSubItem^ subitem6 = gcnew ListViewItem::ListViewSubItem();
									   ListViewItem::ListViewSubItem^ subitem7 = gcnew ListViewItem::ListViewSubItem();
									   //заполняем элементы
									   str = gcnew String(ev.GetEName());
									   item1->Text = str;
									   str = gcnew String(ev.GetEType());
									   subitem2->Text = str;
									   subitem3->Text = Convert::ToString(ev.GetAllTickets());;
									   subitem4->Text = Convert::ToString(ev.GetAllTickets() - ev.GetSoldTickets());
									   subitem5->Text = Convert::ToString(ev.GetPrice());
									   str = gcnew String(build.GetBName());
									   subitem6->Text = str;
									   Date = Date.AddHours(ev.GetDate().tm_hour);
									   Date = Date.AddMinutes(ev.GetDate().tm_min);
									   Date = Date.AddDays(ev.GetDate().tm_mday - 1);
									   Date = Date.AddMonths(ev.GetDate().tm_mon - 1);
									   Date = Date.AddYears(ev.GetDate().tm_year - 1);
									   subitem7->Text = Convert::ToString(Date);
									   //добавляем элменты в список
									   item1->SubItems->Add(subitem2);
									   item1->SubItems->Add(subitem3);
									   item1->SubItems->Add(subitem4);
									   item1->SubItems->Add(subitem5);
									   item1->SubItems->Add(subitem6);
									   item1->SubItems->Add(subitem7);
									   listView1->Items->Add(item1);
									   Date = Date.AddHours(-Date.Hour);
									   Date = Date.AddMinutes(-Date.Minute);
									   Date = Date.AddDays(-Date.Day + 1);
									   Date = Date.AddMonths(-Date.Month + 1);
									   Date = Date.AddYears(-Date.Year + 1);
								   }
							   }
							   fseek(FEvent, 0, SEEK_SET);
							   pI = &build;
						   }
					   }
				   }
		   
		   if (flag == false)
			   return 4;
		   //Изменение элементов формы
		   this->listView1->Visible = true;
		   this->ResetButton->Visible = true;
		   this->label1->Visible = false;
		   this->label2->Visible = false;
		   this->label3->Visible = false;
		   this->label4->Visible = false;
		   this->label5->Visible = false;
		   this->dateTimePicker1->Visible = false;
		   this->NameBTextBox->Visible = false;
		   this->NameETextBox->Visible = false;
		   this->TypeBTextBox->Visible = false;
		   this->TypeETextBox->Visible = false;
		   this->OkButton->Visible = false;
		   ev.~Event();//удаляем объект
		   build.~Building();
		   fclose(FBuild);
		   fclose(FEvent);
		   return 0;
		   }
	   //По нажатию кнопки повтор
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//Изменение элементов формы
	this->listView1->Visible = false;
	this->ResetButton->Visible = false;
	this->label1->Visible = true;
	this->label2->Visible = true;
	this->label3->Visible = true;
	this->label4->Visible = true;
	this->label5->Visible = true;
	this->OkButton->Visible = true;
	this->dateTimePicker1->Visible = true;
	this->NameBTextBox->Visible = true;
	this->NameETextBox->Visible = true;
	this->TypeBTextBox->Visible = true;
	this->TypeETextBox->Visible = true;
	//Очистка полей ввода
	NameBTextBox->Clear();
	NameETextBox->Clear();
	TypeBTextBox->Clear();
	TypeETextBox->Clear();
	listView1->Items->Clear();
}
};
}
