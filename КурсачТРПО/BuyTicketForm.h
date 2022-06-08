#pragma once

namespace КурсачТРПО {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BuyTicketForm
	/// </summary>
	public ref class BuyTicketForm : public System::Windows::Forms::Form
	{
	public:
		BuyTicketForm(void)
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
		~BuyTicketForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TextLable;
	protected:

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TypeBTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ NameBTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TypeETextBox;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ NameETextBox;
	private: System::Windows::Forms::Button^ OkButton;
	private: System::Windows::Forms::Button^ ResetButton;
	private: System::Windows::Forms::Button^ ConButton;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ NameHeader;
	private: System::Windows::Forms::ColumnHeader^ TypeHeader;
	private: System::Windows::Forms::ColumnHeader^ AllTicketHeader;
	private: System::Windows::Forms::ColumnHeader^ TicketHeader;
	private: System::Windows::Forms::ColumnHeader^ PriceHeader;
	private: System::Windows::Forms::ColumnHeader^ BuildNameHeader;
	private: System::Windows::Forms::ColumnHeader^ DateHeader;

	private: System::Windows::Forms::Button^ OKbutton2;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;




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
			this->TextLable = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TypeBTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NameBTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TypeETextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NameETextBox = (gcnew System::Windows::Forms::TextBox());
			this->OkButton = (gcnew System::Windows::Forms::Button());
			this->ResetButton = (gcnew System::Windows::Forms::Button());
			this->ConButton = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->NameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->TypeHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->AllTicketHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->TicketHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->PriceHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->BuildNameHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateHeader = (gcnew System::Windows::Forms::ColumnHeader());
			this->OKbutton2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// TextLable
			// 
			this->TextLable->AutoSize = true;
			this->TextLable->Location = System::Drawing::Point(436, 16);
			this->TextLable->Name = L"TextLable";
			this->TextLable->Size = System::Drawing::Size(273, 17);
			this->TextLable->TabIndex = 0;
			this->TextLable->Text = L"Заполните хотя бы один из параметров";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 268);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Введите дату и время мероприятия";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy, HH:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(354, 268);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 17);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Введите тип заведения";
			// 
			// TypeBTextBox
			// 
			this->TypeBTextBox->Location = System::Drawing::Point(354, 226);
			this->TypeBTextBox->Name = L"TypeBTextBox";
			this->TypeBTextBox->Size = System::Drawing::Size(464, 22);
			this->TypeBTextBox->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Введите название заведения";
			// 
			// NameBTextBox
			// 
			this->NameBTextBox->Location = System::Drawing::Point(354, 184);
			this->NameBTextBox->Name = L"NameBTextBox";
			this->NameBTextBox->Size = System::Drawing::Size(464, 22);
			this->NameBTextBox->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 137);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Введите тип мероприятия";
			// 
			// TypeETextBox
			// 
			this->TypeETextBox->Location = System::Drawing::Point(354, 137);
			this->TypeETextBox->Name = L"TypeETextBox";
			this->TypeETextBox->Size = System::Drawing::Size(464, 22);
			this->TypeETextBox->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 17);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Введите название мероприятия";
			// 
			// NameETextBox
			// 
			this->NameETextBox->Location = System::Drawing::Point(354, 89);
			this->NameETextBox->Name = L"NameETextBox";
			this->NameETextBox->Size = System::Drawing::Size(464, 22);
			this->NameETextBox->TabIndex = 12;
			// 
			// OkButton
			// 
			this->OkButton->Location = System::Drawing::Point(702, 326);
			this->OkButton->Name = L"OkButton";
			this->OkButton->Size = System::Drawing::Size(116, 29);
			this->OkButton->TabIndex = 22;
			this->OkButton->Text = L"OK";
			this->OkButton->UseVisualStyleBackColor = true;
			this->OkButton->Click += gcnew System::EventHandler(this, &BuyTicketForm::OkButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->Location = System::Drawing::Point(898, 16);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(112, 42);
			this->ResetButton->TabIndex = 23;
			this->ResetButton->Text = L"Изменить параметры";
			this->ResetButton->UseVisualStyleBackColor = true;
			this->ResetButton->Visible = false;
			this->ResetButton->Click += gcnew System::EventHandler(this, &BuyTicketForm::ResetButton_Click);
			// 
			// ConButton
			// 
			this->ConButton->Location = System::Drawing::Point(1034, 16);
			this->ConButton->Name = L"ConButton";
			this->ConButton->Size = System::Drawing::Size(112, 29);
			this->ConButton->TabIndex = 24;
			this->ConButton->Text = L"Продолжить";
			this->ConButton->UseVisualStyleBackColor = true;
			this->ConButton->Visible = false;
			this->ConButton->Click += gcnew System::EventHandler(this, &BuyTicketForm::ConButton_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->NameHeader, this->TypeHeader,
					this->AllTicketHeader, this->TicketHeader, this->PriceHeader, this->BuildNameHeader, this->DateHeader
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 88);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1125, 398);
			this->listView1->TabIndex = 25;
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
			// OKbutton2
			// 
			this->OKbutton2->Location = System::Drawing::Point(702, 326);
			this->OKbutton2->Name = L"OKbutton2";
			this->OKbutton2->Size = System::Drawing::Size(116, 29);
			this->OKbutton2->TabIndex = 27;
			this->OKbutton2->Text = L"OK";
			this->OKbutton2->UseVisualStyleBackColor = true;
			this->OKbutton2->Visible = false;
			this->OKbutton2->Click += gcnew System::EventHandler(this, &BuyTicketForm::OKbutton2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(354, 227);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 29;
			this->numericUpDown1->Visible = false;
			// 
			// BuyTicketForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1158, 560);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->OKbutton2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->ConButton);
			this->Controls->Add(this->ResetButton);
			this->Controls->Add(this->OkButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TypeBTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->NameBTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TypeETextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameETextBox);
			this->Controls->Add(this->TextLable);
			this->Name = L"BuyTicketForm";
			this->Text = L"BuyTicketForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//По нажатию кнопки OK
	private: System::Void OkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (SearchFunc())//Вызов функции поиска
		{

		case 1: break;//Некорректный ввод параметров
		case 2: exit(2);//Ошибка открытия файла Building.bin
		case 3: exit(3);//Ошибка открытия файла Event.bin
		case 4:
		{
			MessageBox::Show("Поиск не дал результатов", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			break;
		}
		}
	}
		   int SearchFunc()//Функция поиска
		   {
			   Building build;//Объект класса Building
			   Event ev;//Объект класса Event
			   //Указатели для работы с файлами
			   FILE* FBuild;
			   FILE* FEvent;
			   Iface* pI;//Указатель интерфейса
			   DateTime Date;//Переменная для работы с датой/временем
			   String^ str;//Указатель на строку
			   unsigned int BuildCode;//Код заведения
			   wchar_t BuildName[256];//Название заведения
			   wchar_t BuildType[256];//Тип заведения
			   wchar_t EventName[256];//Название мероприятия
			   wchar_t EventType[256];//Тип мероприятия
			   bool flags[5];//Массив проверочных флагов
			   bool flag = false;//Вспомогательный флаг
			   unsigned short count = 0;//Счётчик
			   //очистка массивов
			   memset(EventType, 0, sizeof(wchar_t) * 256);
			   memset(EventName, 0, sizeof(wchar_t) * 256);
			   memset(BuildType, 0, sizeof(wchar_t) * 256);
			   memset(BuildName, 0, sizeof(wchar_t) * 256);
			   memset(flags, false, sizeof(bool) * 5);
			   //Проверки корректности ввода
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
			   if ((dateTimePicker1->Value.Year < DateTime::Now.Year) || ((dateTimePicker1->Value.Month < DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day < DateTime::Now.Day) && (dateTimePicker1->Value.Month == DateTime::Now.Month)) || ((dateTimePicker1->Value.Day == DateTime::Now.Day) && (dateTimePicker1->Value.Hour <= DateTime::Now.Hour)))
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
				   fclose(FEvent);
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
						   {
							   //Проверка считанной информации
							   if ((ev.GetAllTickets() - ev.GetSoldTickets() != 0) && ((BuildCode == ev.GetBCode()) && ((wcscmp(EventType, ev.GetEType()) == 0) && (wcscmp(EventName, ev.GetEName()) == 0))))
							   {
								   flag = true;//Установка флага
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
			   else//Поиск по имени или типу или дате мероприятия
				   if ((flags[0] == false) || (flags[1] == false) || (flags[4] == false))
				   {
					   pI = &ev;//Работаем с мтеодами класса Event
					   while (pI->ReadFile(FEvent) == 0)//считываем файл полностью
					   {
						   if (flags[4] == false)//Если дата не введена
						   {
							   if (((ev.GetAllTickets() - ev.GetSoldTickets() != 0) && (wcscmp(EventType, ev.GetEType()) == 0) || (wcscmp(EventName, ev.GetEName()) == 0) && ((ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute))))//сравнение строк
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
							   if ((wcscmp(BuildType, build.GetBType()) == 0) || (wcscmp(BuildName, build.GetBName()) == 0))//сравнение строк
							   {
								   BuildCode = build.GetBCode();
								   pI = &ev;
								   while (pI->ReadFile(FEvent) == 0)
								   {
									   if ((ev.GetAllTickets() - ev.GetSoldTickets()!=0)&&((BuildCode == ev.GetBCode()) || ((wcscmp(EventType, ev.GetEType()) == 0) || (wcscmp(EventName, ev.GetEName()) == 0) || ((ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute)))))//сравнение строк
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
			   this->ConButton->Visible = true;
			   this->TextLable->Text = "Выберите желаемое мероприятие и нажмите продолжить";
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
			   //удаляем объекты
			   ev.~Event();
			   build.~Building();
			   //закрываем файлы
			   fclose(FBuild);
			   fclose(FEvent);
			   return 0;
		   }
private: int EventCode;//атрибут класса-код мероприятия
	   //По нажатию кнопки прододжить
private: System::Void ConButton_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (ConFunc())//Вызов функции
	{
	case 1:break;//не выбрано мероприятие
	case 2:exit(2);//не удалось открыть файл
	case 3:exit(3);//не совпдает кол-во билетов
	}
}
	   int ConFunc()
	   {
		   //Очистка полей ввода
		   this->NameBTextBox->Clear();
		   this->NameETextBox->Clear();
		   this->TypeBTextBox->Clear();
		   this->TypeETextBox->Clear();
		   if (listView1->SelectedItems->Count == 0)
		   {
			   MessageBox::Show("Выберите мероприятие(Нажмите на название)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 1;
		   }
		   Event ev;//объект класса Event 
		   FILE* FEvent;//Указатель для работы с файлом
		   Iface* pI;//указатель интерфейса
		   DateTime Date;//переменная для работы с датой/временем
		   //Массивы для названия и типов мероприятия и заведения
		   wchar_t BuildName[256];
		   wchar_t BuildType[256];
		   wchar_t EventName[256];
		   wchar_t EventType[256];
		   unsigned int tickets;
		   //очистка массивов
		   memset(EventType, 0, sizeof(wchar_t) * 256);
		   memset(EventName, 0, sizeof(wchar_t) * 256);
		   memset(BuildType, 0, sizeof(wchar_t) * 256);
		   memset(BuildName, 0, sizeof(wchar_t) * 256);
		   //Полученние информации по выбранному мероприятию
		   String^ str = listView1->SelectedItems[0]->SubItems[6]->Text;//Дата
		   Date = Convert::ToDateTime(str);
		   str = listView1->SelectedItems[0]->SubItems[5]->Text;//Место
		   for (int i = 0; i < str->Length; i++)
			   BuildName[i] = str->ToCharArray()[i];
		   str = listView1->SelectedItems[0]->SubItems[3]->Text;//Кол-во оставшихся билетов
		   tickets = Convert::ToUInt32(str);
		   str = listView1->SelectedItems[0]->SubItems[1]->Text;//Тип
		   for (int i = 0; i < str->Length; i++)
			   EventType[i] = str->ToCharArray()[i];
		   str = listView1->SelectedItems[0]->SubItems[0]->Text;//Название
		   for (int i = 0; i < str->Length; i++)
			   EventName[i] = str->ToCharArray()[i];
		   FEvent = fopen("Event.bin", "rb+");
		   if (FEvent == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 2;
		   }
		   pI = &ev;//работаем с методами класса Event
		   while (pI->ReadFile(FEvent) == 0)
		   {
			   if ((wcscmp(EventName, ev.GetEName()) == 0) && (wcscmp(EventType, ev.GetEType()) == 0) && ((ev.GetDate().tm_year == Date.Year) && (ev.GetDate().tm_mon == Date.Month) && (ev.GetDate().tm_mday == Date.Day) && (ev.GetDate().tm_hour == Date.Hour) && (ev.GetDate().tm_min == Date.Minute)))
			   {
				   EventCode = ev.GetECode();//сохраняем код мероприятия
				   if ((ev.GetAllTickets() - ev.GetSoldTickets()) != tickets)
				   {
					   MessageBox::Show("Несовпадение кол-ва проданных билетов", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
					   fclose(FEvent);
					   return 3;
				   }
				   //Меняем элементы формы
				   this->listView1->Visible = false;
				   this->ResetButton->Visible = false;
				   this->ConButton->Visible = false;
				   TextLable->Text = "Введите ваши данные";
				   this->label1->Visible = true;
				   this->label2->Visible = true;
				   this->label3->Visible = true;
				   this->label4->Visible = true;
				   this->label5->Visible = true;
				   this->numericUpDown1->Visible = true;
				   this->NameBTextBox->Visible = true;
				   this->NameETextBox->Visible = true;
				   this->TypeETextBox->Visible = true;
				   this->OKbutton2->Visible = true;
				   this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
				   this->dateTimePicker1->Visible = true;
				   this->numericUpDown1->Maximum = tickets;
				   this->numericUpDown1->Minimum = 1;
				   label1->Text = "Введите ваше ФИО";
				   label2->Text = "Введите ваше образование\n(если есть)";
				   label3->Text = "Введите вашу профессию\n(если есть)";
				   label4->Text = "Выберите желаемое кол-во билетов";
				   label5->Text = "Укажите вашу дату рождения";
				   break;
			   }
		   }
		   ev.~Event();//удаляем объект
		   fclose(FEvent);
		   return 0;
	   }
	   //По нажатию кнопки новый поиск
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//меняем элементы формы
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
	this->ConButton->Visible = false;
	this->TextLable->Text = "Заполните хотя бы один из параметров";
	//очищаем поля ввода
	NameBTextBox->Clear();
	NameETextBox->Clear();
	TypeBTextBox->Clear();
	TypeETextBox->Clear();
	listView1->Items->Clear();
}
	   //По нажатию кнопки OK
private: System::Void OKbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (BuyTicketFunc())//Вызов функции покупки
	{
	//Ошибки некорректного ввода
	case 1:break;
	case 2:break;
	case 3:break;
	case 4:break;
	//Ошибки работы с файлами
	case 5:exit(5);
	case 6:exit(6);
	case 7:exit(7);
	case 8:exit(8);
	case 9:exit(9);
	case 10:exit(10);
	case 11:exit(11);
	case 12:exit(12);
	case 0: {
		MessageBox::Show("Покупка совершена", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		this->Close();
		break;
	}
	}

}
	   int BuyTicketFunc()//Функция покупки
	   {
		   Event ev;//Объект класса Event
		   Visitor vis;//Объект класса Visitor
		   //Указатели для работы с файлами
		   FILE* FVisitor;
		   FILE* FEvent;
		   Iface* pI;//Указатель интерфейса
		   wchar_t Name[256];//массив для имени
		   wchar_t Prof[256];//массив для профессии
		   wchar_t Education[256];//массив для образования
		   unsigned int Age;//возраст
		   unsigned int VCode=1;//код
		   //очистка массивов
		   memset(Name, 0, sizeof(wchar_t) * 256);
		   memset(Prof, 0, sizeof(wchar_t) * 256);
		   memset(Education, 0, sizeof(wchar_t) * 256);

		   //Проверки корректности ввода
		   if ((NameETextBox->Text->Length < 256) && (NameETextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < NameETextBox->Text->Length; i++)
				   Name[i] = NameETextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод ФИО(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   NameETextBox->Clear();
			   return 1;
		   }
		   if ((TypeETextBox->Text->Length < 256))
		   {
			   for (int i = 0; i < TypeETextBox->Text->Length; i++)
				   Education[i] = TypeETextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод образования(Превышена длина)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   TypeETextBox->Clear();
			   return 2;
		   }
		   if ((NameBTextBox->Text->Length < 256))
		   {
			   for (int i = 0; i < NameBTextBox->Text->Length; i++)
				   Prof[i] = NameBTextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод профессии(Превышена длина )", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   NameBTextBox->Clear();
			   return 3;
		   }
		   if ((dateTimePicker1->Value.Year > DateTime::Now.Year) || ((dateTimePicker1->Value.Month > DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day > DateTime::Now.Day) && (dateTimePicker1->Value.Month == DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)))
		   {
			   MessageBox::Show("Некорректная дата рождения", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 4;
		   }
		   //Открытие файлов
		   FEvent = fopen("Event.bin", "rb+");
		   if (FEvent == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 5;
		   }
		   FVisitor = fopen("Visitor.bin", "rb+");
		   if (FVisitor == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   fclose(FEvent);
			   return 6;
		   }
		   pI = &vis;//работаем с методами класса Visitor
		   while (pI->ReadFile(FVisitor) == 0)
		   {
			   VCode = vis.GetVCode()+1;//Проверяем есть ли в базе другие посетители,устанавливаем код
		   }
		   //Получаем возраст через введеную дату
		   Age = DateTime::Now.Year - dateTimePicker1->Value.Year;
		   if (DateTime::Now.DayOfYear < dateTimePicker1->Value.DayOfYear)
			   Age--;
		   //Установка параметров
		   vis.SetAge(Age);
		   vis.SetVCode(VCode);
		   vis.SetVName(Name);
		   vis.SetEducation(Education);
		   vis.SetProfession(Prof);
		   vis.SetECode(EventCode);
		   vis.SetAllTickets(Convert::ToUInt32(numericUpDown1->Value));
		   if (pI->WriteFile(FVisitor) != 0)//Запись в файл
		   {
			   MessageBox::Show("Ошибка записи в файл Visitor.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   fclose(FEvent);
			   return 7;
		   }
		   fclose(FVisitor);
		   pI = &ev;//Работаем с методами класса Event
		   //Редактируем информацию о мероприятии с помощью перезаписи в вспомогательный файл
		   FILE* Temp;
		   Temp = fopen("Temp.bin", "wb+");
		   if (Temp == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 8;
		   }
		   fseek(FEvent, 0, SEEK_SET);
		   while (pI->ReadFile(FEvent) == 0)
		   {
			   if (ev.GetECode() == EventCode)
				   ev.SetSoldTickets(ev.GetSoldTickets()+Convert::ToUInt32(numericUpDown1->Value));
			   if (pI->WriteFile(Temp) != 0)
			   {
				   fclose(Temp);
				   fclose(FEvent);
				   remove("Temp.bin");
				   MessageBox::Show("Ошибка записи в файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 9;
			   }
		   }
		   fclose(FEvent);
		   fclose(Temp);
		   Temp = fopen("Temp.bin", "rb+");
		   if (Temp == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 10;
		   }
		   FEvent = fopen("Event.bin", "wb+");
		   if (FEvent == NULL)
		   {
			   fclose(Temp);
			   remove("Temp.bin");
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 11;
		   }
		   while (pI->ReadFile(Temp) == 0)
		   {
			   if (pI->WriteFile(FEvent) != 0)
			   {
				   fclose(Temp);
				   fclose(FEvent);
				   remove("Temp.bin");
				   MessageBox::Show("Ошибка записи в Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 12;
			   }
		   }
		   fclose(Temp);
		   fclose(FEvent);
		   remove("Temp.bin");

		   return 0;
	   }
};
}
