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
	/// Сводка для AddEventForm
	/// </summary>
	public ref class AddEventForm : public System::Windows::Forms::Form
	{
	public:
		AddEventForm(void)
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
		~AddEventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ EventNametextBox;
	private: System::Windows::Forms::TextBox^ EventTypetextBox;
	private: System::Windows::Forms::TextBox^ BuildingNametextBox;
	private: System::Windows::Forms::TextBox^ BuildingTypetextBox;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ OKButton;
	private: System::Windows::Forms::TextBox^ TicketBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ PriceBox;
	private: System::Windows::Forms::Label^ label7;


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
			this->EventNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->EventTypetextBox = (gcnew System::Windows::Forms::TextBox());
			this->BuildingNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->BuildingTypetextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->TicketBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PriceBox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// EventNametextBox
			// 
			this->EventNametextBox->Location = System::Drawing::Point(373, 44);
			this->EventNametextBox->Name = L"EventNametextBox";
			this->EventNametextBox->Size = System::Drawing::Size(425, 22);
			this->EventNametextBox->TabIndex = 0;
			// 
			// EventTypetextBox
			// 
			this->EventTypetextBox->Location = System::Drawing::Point(373, 93);
			this->EventTypetextBox->Name = L"EventTypetextBox";
			this->EventTypetextBox->Size = System::Drawing::Size(425, 22);
			this->EventTypetextBox->TabIndex = 1;
			// 
			// BuildingNametextBox
			// 
			this->BuildingNametextBox->Location = System::Drawing::Point(374, 144);
			this->BuildingNametextBox->Name = L"BuildingNametextBox";
			this->BuildingNametextBox->Size = System::Drawing::Size(424, 22);
			this->BuildingNametextBox->TabIndex = 2;
			// 
			// BuildingTypetextBox
			// 
			this->BuildingTypetextBox->Location = System::Drawing::Point(374, 194);
			this->BuildingTypetextBox->Name = L"BuildingTypetextBox";
			this->BuildingTypetextBox->Size = System::Drawing::Size(423, 22);
			this->BuildingTypetextBox->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите название мероприятия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите тип мероприятия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Введите название места проведения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введите тип заведения";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy, HH:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(374, 247);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Введите дату и время мероприятия";
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(689, 412);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(109, 34);
			this->OKButton->TabIndex = 10;
			this->OKButton->Text = L"OK";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &AddEventForm::OKButton_Click);
			// 
			// TicketBox
			// 
			this->TicketBox->Location = System::Drawing::Point(373, 296);
			this->TicketBox->Name = L"TicketBox";
			this->TicketBox->Size = System::Drawing::Size(201, 22);
			this->TicketBox->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 296);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Введите кол-во билетов";
			// 
			// PriceBox
			// 
			this->PriceBox->Location = System::Drawing::Point(373, 345);
			this->PriceBox->Name = L"PriceBox";
			this->PriceBox->Size = System::Drawing::Size(201, 22);
			this->PriceBox->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 345);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Введите стоимость билета";
			// 
			// AddEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 489);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->PriceBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TicketBox);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BuildingTypetextBox);
			this->Controls->Add(this->BuildingNametextBox);
			this->Controls->Add(this->EventTypetextBox);
			this->Controls->Add(this->EventNametextBox);
			this->Name = L"AddEventForm";
			this->Text = L"AddEventForm";
			this->Load += gcnew System::EventHandler(this, &AddEventForm::AddEventForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Действия при загрузке формы
private: System::Void AddEventForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Очистка всех полей ввода
	EventNametextBox->Clear();
	EventTypetextBox->Clear();
	BuildingNametextBox->Clear();
	BuildingTypetextBox->Clear();
	PriceBox->Clear();
	TicketBox->Clear();
}
//Действия при нажатии кнопки OK
private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (AddEventFunc())//Вызов функции добавления
	{
	
	//ошибки некорректного ввода
	case 1: break;
	case 2: break;
	case 3: break;
	case 4: break;
	case 5: break;
	case 6: break;
	case 7: break;
	case 10: break;
	//ошибки работы с файлами
	case 8: exit(8);	//ошибка открытия файла Building.bin
	case 9: exit(9);	//ошибка открытия файла Event.bin
	case 11: exit(11);	//ошибка открытия файла Event.bin
	case 12: exit(12);	//ошибка записи в файл Event.bin
	case 13: exit(13);	//ошибка записи в файл Building.bin
	case 0:
	{
		MessageBox::Show("Мероприятие успешно добавлено", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
		break;
	}
	}
}
	   int AddEventFunc()//Функция добавления
	   {
		   Building build;//Объект класса Building
		   Event ev;//Объект класса Event
		   //Указатели для работы с файлами
		   FILE* FBuild;
		   FILE* FEvent;
		   Iface* pI;//Указатель интерфейса
		   tm Date;//Структура для работы с датой/временем
		   unsigned int BuildCode = 1;//Код заведения
		   unsigned int EventCode = 1;//Код мероприятия
		   wchar_t BuildName[256];//Массив для названия заведения
		   wchar_t BuildType[256];//Массив для типа заведения
		   wchar_t EventName[256];//Массив для названия мероприятия
		   wchar_t EventType[256];//Массив для типа мероприятия
		   unsigned int Ticket;//Кол-во билетов
		   unsigned int Price;//Цена за билет
		   bool flag = false;//Вспомогательный флаг
		   //очистка массивов
		   memset(EventType, 0, sizeof(wchar_t) * 256);
		   memset(EventName, 0, sizeof(wchar_t) * 256);
		   memset(BuildType, 0, sizeof(wchar_t) * 256);
		   memset(BuildName, 0, sizeof(wchar_t) * 256);
		   
		   //Проверки кооректности ввода
		   if ((EventNametextBox->Text->Length < 256) && (EventNametextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < EventNametextBox->Text->Length; i++)
				   EventName[i] = EventNametextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод названия мероприятия(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   EventNametextBox->Clear();
			   return 1;
		   }
		   if ((EventTypetextBox->Text->Length < 256) && (EventTypetextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < EventTypetextBox->Text->Length; i++)
				   EventType[i] = EventTypetextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод типа мероприятия(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   EventTypetextBox->Clear();
			   return 2;
		   }
		   if ((BuildingNametextBox->Text->Length < 256) && (BuildingNametextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < BuildingNametextBox->Text->Length; i++)
				   BuildName[i] = BuildingNametextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод названия заведения(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   BuildingNametextBox->Clear();
			   return 3;
		   }
		   if ((BuildingTypetextBox->Text->Length < 256) && (BuildingTypetextBox->Text->Length > 0))
		   {
			   for (int i = 0; i < BuildingTypetextBox->Text->Length; i++)
				   BuildType[i] = BuildingTypetextBox->Text->ToCharArray()[i];
		   }
		   else
		   {
			   MessageBox::Show("Некорректный ввод типа заведения(Превышена длина или пустая строка)", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   BuildingTypetextBox->Clear();
			   return 4;
		   }
		   if (Convert::ToInt32(PriceBox->Text) <= 0)//проверка на корректность года
		   {
			   MessageBox::Show("Некорректная стоимость билета", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   PriceBox->Clear();
			   return 5;
		   }
		   else
			   Price = Convert::ToInt32(PriceBox->Text);
		   if (Convert::ToInt32(TicketBox->Text) <= 0)//проверка на корректность кол-ва
		   {
			   MessageBox::Show("Некорректное кол-во билетов", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   TicketBox->Clear();
			   return 6;
		   }
		   else
			   Ticket = Convert::ToInt32(TicketBox->Text);
		   if ((dateTimePicker1->Value.Year < DateTime::Now.Year) || ((dateTimePicker1->Value.Month< DateTime::Now.Month)&&(dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day < DateTime::Now.Day) && (dateTimePicker1->Value.Month == DateTime::Now.Month)) || ((dateTimePicker1->Value.Day == DateTime::Now.Day) && (dateTimePicker1->Value.Hour < DateTime::Now.Hour)))
		   {
			   MessageBox::Show("Некорректое время мероприятия", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 7;
		   }
		   //открытие файлов
		   FBuild = fopen("Building.bin", "rb+");
		   if (FBuild == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 8;
		   }
		   FEvent = fopen("Event.bin", "rb+");
		   if (FEvent == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   fclose(FBuild);
			   return 9;
		   }
		   pI = &build;//Работаем с методами класса Building
		   while (pI->ReadFile(FBuild) == 0)//считываем файл полностью
		   {
			   if ((wcscmp(BuildType, build.GetBType()) == 0)&&(wcscmp(BuildName, build.GetBName()) == 0))//Сравнение введеных названий с прочитанными
			   {
				   flag = true;
				   BuildCode = build.GetBCode();//Сохранение кода заведения
				   pI = &ev;//Работаем с методами класса Event
				   while (pI->ReadFile(FEvent) == 0)//Считываем файл
				   {
					   //Проверяем было ли данное мероприятие уже в базе
					   if ((wcscmp(EventType, ev.GetEType()) == 0) && (wcscmp(EventName, ev.GetEName()) == 0)&&(ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute))//сравнение строк
					   {
						   MessageBox::Show("Данное мероприятие уже есть в базе", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
						   fclose(FBuild);
						   fclose(FEvent);
						   return 10;

					   }
				   }
			   }
			   if ((build.GetBName()[0] != L'\0')&&(flag==false))//Если в базе уже есть заведения
				   BuildCode = build.GetBCode() + 1;
		   }
		   fseek(FEvent, 0, SEEK_SET);
		   pI = &ev;//Работаем с методами класса Event
		   while (pI->ReadFile(FEvent) == 0)
			   if (ev.GetEName()[0] != L'\0')//Если в базе уже есть мероприятия
				   EventCode = ev.GetECode() + 1;
		   fclose(FEvent);
		   FEvent = fopen("Event.bin", "ab+");
		   if (FEvent == NULL)
		   {
			   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   return 11;
		   }
		   //Устанавливаем дату/время
		   Date.tm_hour = dateTimePicker1->Value.Hour;
		   Date.tm_min = dateTimePicker1->Value.Minute;
		   Date.tm_mday = dateTimePicker1->Value.Day;
		   Date.tm_year = dateTimePicker1->Value.Year;
		   Date.tm_mon = dateTimePicker1->Value.Month;
		   ev.SetECode(EventCode);//устанавливаем код
		   ev.SetBCode(BuildCode);//устанавливаем код
		   ev.SetEName(EventName);//установка названия книги
		   ev.SetEType(EventType);//установка имени автора
		   ev.SetAllTickets(Ticket);//Кол-во всех билетов
		   ev.SetSoldTickets(0);//Кол-во проданных билетов
		   ev.SetPrice(Price);//Установка цены
		   ev.SetDate(Date);//Установка даты
		   pI = &ev;//Работаем с методами класса Event
		   if (pI->WriteFile(FEvent) != 0)//запись в файл
		   {
			   MessageBox::Show("Ошибка записи в файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			   fclose(FBuild);
			   fclose(FEvent);
			   return 12;
		   }
		   if (flag == false)//Если введено новое заведение
		   {
			   //Устанавливаем параметры
			   build.SetBName(BuildName);
			   build.SetBType(BuildType);
			   build.SetBCode(BuildCode);
			   pI = &build;//Работаем с методами класса Building
			   if (pI->WriteFile(FBuild) != 0)//запись в файл
			   {
				   MessageBox::Show("Ошибка записи в файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   fclose(FBuild);
				   fclose(FEvent);
				   return 13;
			   }
		   }
		   //удаляем объекты
		   ev.~Event();
		   build.~Building();
		   //Закрываем файлы
		   fclose(FBuild);
		   fclose(FEvent);
		   return 0;
	   }
};
}
