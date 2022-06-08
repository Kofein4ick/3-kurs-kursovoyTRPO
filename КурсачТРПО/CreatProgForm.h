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
	/// Сводка для CreatProgForm
	/// </summary>
	public ref class CreatProgForm : public System::Windows::Forms::Form
	{
	public:
		CreatProgForm(void)
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
		~CreatProgForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ EventNameCl;
	private: System::Windows::Forms::ColumnHeader^ TypeEventCl;
	private: System::Windows::Forms::ColumnHeader^ BuildingCl;
	private: System::Windows::Forms::ColumnHeader^ DateCl;
	private: System::Windows::Forms::ColumnHeader^ TicketCl;
	private: System::Windows::Forms::ColumnHeader^ PriceCl;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ OKButton;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;


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
			this->EventNameCl = (gcnew System::Windows::Forms::ColumnHeader());
			this->TypeEventCl = (gcnew System::Windows::Forms::ColumnHeader());
			this->BuildingCl = (gcnew System::Windows::Forms::ColumnHeader());
			this->DateCl = (gcnew System::Windows::Forms::ColumnHeader());
			this->TicketCl = (gcnew System::Windows::Forms::ColumnHeader());
			this->PriceCl = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->EventNameCl, this->TypeEventCl,
					this->BuildingCl, this->DateCl, this->TicketCl, this->PriceCl
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 241);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1085, 311);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// EventNameCl
			// 
			this->EventNameCl->Text = L"Название мероприятия";
			this->EventNameCl->Width = 223;
			// 
			// TypeEventCl
			// 
			this->TypeEventCl->Text = L"Тип мероприятия";
			this->TypeEventCl->Width = 136;
			// 
			// BuildingCl
			// 
			this->BuildingCl->Text = L"Место проведения";
			this->BuildingCl->Width = 198;
			// 
			// DateCl
			// 
			this->DateCl->Text = L"Дата и время проведения";
			this->DateCl->Width = 198;
			// 
			// TicketCl
			// 
			this->TicketCl->Text = L"Кол-во оставшихся билетов";
			this->TicketCl->Width = 194;
			// 
			// PriceCl
			// 
			this->PriceCl->Text = L"Цена";
			this->PriceCl->Width = 107;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сформировать список на";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(318, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(409, 51);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Выберите любой день(если список на день)\r\nЛибо любой день желаемой недели(если сп"
				L"исок на неделю)\r\nЛибо любой день желаемого месяца(если список на месяц)";
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(988, 94);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(84, 32);
			this->OKButton->TabIndex = 5;
			this->OKButton->Text = L"OK";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &CreatProgForm::OKButton_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(191, 85);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 6;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(744, 85);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// CreatProgForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 564);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"CreatProgForm";
			this->Text = L"CreatProgForm";
			this->Load += gcnew System::EventHandler(this, &CreatProgForm::CreatProgForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//По нажатию кнопки ОК
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e) {
		listView1->Items->Clear();//Очистка элементов списка
		switch (CreateProgFunc()) {//Вызов функции составления программы
		case 0: break;
		case 1: exit(1);//Ошибка открытия файла Building.bin
		case 2: exit(2); //Ошибка открытия файла Event.bin
		case 3: {this->Close(); break; }//Пустой файл мероприятий
		case 4: break;//Некорректный ввод
		}
	}
		   int CreateProgFunc()
		   {
			   //Указаетли для работы с файлами
			   FILE* FEvent;
			   FILE* FBuild;
			   Iface* pi;//Указатель интрефейса
			   //Объекты классов
			   Building build;
			   Event ev;
			   //Переменные для работы с датой/временем
			   DateTime Mdate;
			   DateTime mdate;
			   //Вспомогательная переменная
			   int max=0;
			   int min=0;
			   //Строка, содержащая выбор пользователя
			   String^ str = comboBox1->SelectedItem->ToString();
			   //открытие файла
			   FBuild = fopen("Building.bin", "rb+");
			   if (FBuild == NULL)
			   {
				   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 1;
			   }
			   FEvent = fopen("Event.bin", "rb+");
			   if (FEvent == NULL)
			   {
				   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   fclose(FBuild);
				   return 2;
			   }
			   if ((dateTimePicker1->Value.Year < DateTime::Now.Year) || ((dateTimePicker1->Value.Month < DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day < DateTime::Now.Day) && (dateTimePicker1->Value.Month == DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)))
			   {
				   MessageBox::Show("Выбрана прошедшая дата", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 4;
			   }
			   pi = &ev;//Работаем с методами класса Event
			   if (pi->ReadFile(FEvent) != 0)//Считываем файл
			   {
				   MessageBox::Show("База мепроприятий пуста", "Предупреждение", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Warning);
				   fclose(FEvent);
				   return 3;
			   }
			   rewind(FEvent);//Возвращение каретки в начало файла
			   if (str == "День")//Если пользователь выбрал День
			   {
				   while (pi->ReadFile(FEvent) == 0)//считываем файл до конца
				   {
					   if ((dateTimePicker1->Value.Day == ev.GetDate().tm_mday) && (dateTimePicker1->Value.Month == ev.GetDate().tm_mon) && (dateTimePicker1->Value.Year == ev.GetDate().tm_year))
						   ListEv(FBuild, FEvent, ev, build, pi);//Составляем список
				   }
			   }
			   else
				   if (str == "Неделя")//Если пользователь выбрал Неделя(выбранного месяца)
				   {
					   //Определяем начало и конец недели от текущего дня(т.е. понедельник и воскресенье) 
					   Mdate = dateTimePicker1->Value;
					   while (Mdate.DayOfWeek!=DayOfWeek::Sunday) {
						   max++;
						   Mdate = Mdate.AddDays(1);
					   }
					   mdate = dateTimePicker1->Value;
					   while (mdate.DayOfWeek != DayOfWeek::Monday) {
						   min++;
						   mdate = mdate.AddDays(-1);
					   }
					   if (Mdate.Month != dateTimePicker1->Value.Month)
					   {
						   Mdate = dateTimePicker1->Value;
						   Mdate = Mdate.AddDays(-Mdate.Day + DateTime::DaysInMonth(Mdate.Year,Mdate.Month));
					   }
					   if (mdate.Month != dateTimePicker1->Value.Month)
					   {
						   mdate = dateTimePicker1->Value;
						   mdate = mdate.AddDays(-mdate.Day + 1);
					   }
					   while (pi->ReadFile(FEvent) == 0)//считываем файл до конца
					   {
						   if ((ev.GetDate().tm_mday <= Mdate.Day) && (ev.GetDate().tm_mday >= mdate.Day) && (dateTimePicker1->Value.Year == ev.GetDate().tm_year))
							   ListEv(FBuild, FEvent, ev, build, pi);//Составление списка
					   }
				   }
				   else//Если выбран Месяц
				   {
					   while (pi->ReadFile(FEvent) == 0)//считываем файл до конца
					   {
						   if ((dateTimePicker1->Value.Month == ev.GetDate().tm_mon) && (dateTimePicker1->Value.Year == ev.GetDate().tm_year))
							   ListEv(FBuild, FEvent, ev, build, pi);
					   }
				   }

			   return 0;
		   }
		   void ListEv(FILE* FBuild, FILE* FEvent, Event ev, Building build, Iface* pi)//Функция составления списка
			{
			   String^ str;//строка
			   DateTime date;
			   ListViewItem^ item1 = gcnew ListViewItem();
			   ListViewItem::ListViewSubItem^ subitem2 = gcnew ListViewItem::ListViewSubItem();
			   ListViewItem::ListViewSubItem^ subitem3 = gcnew ListViewItem::ListViewSubItem();
			   ListViewItem::ListViewSubItem^ subitem4 = gcnew ListViewItem::ListViewSubItem();
			   ListViewItem::ListViewSubItem^ subitem5 = gcnew ListViewItem::ListViewSubItem();
			   ListViewItem::ListViewSubItem^ subitem6 = gcnew ListViewItem::ListViewSubItem();
			   //заполняем элементы
			   str = gcnew String(ev.GetEName());
			   item1->Text = str;
			   str = gcnew String(ev.GetEType());
			   subitem2->Text = str;
			   pi = &build;
			   while (pi->ReadFile(FBuild) == 0)
			   {
				   if (build.GetBCode() == ev.GetBCode())
					   break;
			   }
			   str = gcnew String(build.GetBName());
			   subitem3->Text = str;
			   date = date.AddHours(ev.GetDate().tm_hour);
			   date = date.AddMinutes(ev.GetDate().tm_min);
			   date = date.AddDays(ev.GetDate().tm_mday - 1);
			   date = date.AddMonths(ev.GetDate().tm_mon - 1);
			   date = date.AddYears(ev.GetDate().tm_year - 1);
			   subitem4->Text = Convert::ToString(date);
			   subitem5->Text = Convert::ToString(ev.GetAllTickets() - ev.GetSoldTickets());
			   subitem6->Text = Convert::ToString(ev.GetPrice());
			   fseek(FBuild, 0, SEEK_SET);
			   //добавляем элменты в список
			   item1->SubItems->Add(subitem2);
			   item1->SubItems->Add(subitem3);
			   item1->SubItems->Add(subitem4);
			   item1->SubItems->Add(subitem5);
			   item1->SubItems->Add(subitem6);
			   listView1->Items->Add(item1);
			   date = date.AddHours(-date.Hour);
			   date = date.AddMinutes(-date.Minute);
			   date = date.AddDays(-date.Day + 1);
			   date = date.AddMonths(-date.Month + 1);
			   date = date.AddYears(-date.Year + 1);
			   pi = &ev;
		   }
		   //При загрузке формы
private: System::Void CreatProgForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Заполняем элемент формы
	comboBox1->Items->Add("День");
	comboBox1->Items->Add("Неделя");
	comboBox1->Items->Add("Месяц");
	
}
};
}
