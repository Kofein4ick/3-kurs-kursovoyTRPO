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
	/// Сводка для DeleteEventForm
	/// </summary>
	public ref class DeleteEventForm : public System::Windows::Forms::Form
	{
	public:
		DeleteEventForm(void)
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
		~DeleteEventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ BuildingTypetextBox;
	private: System::Windows::Forms::TextBox^ BuildingNametextBox;
	private: System::Windows::Forms::TextBox^ EventTypetextBox;
	private: System::Windows::Forms::TextBox^ EventNametextBox;
	private: System::Windows::Forms::Button^ OKButton;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BuildingTypetextBox = (gcnew System::Windows::Forms::TextBox());
			this->BuildingNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->EventTypetextBox = (gcnew System::Windows::Forms::TextBox());
			this->EventNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->OKButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Введите дату и время мероприятия";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy, HH:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(351, 239);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 17);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Введите тип заведения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(255, 17);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Введите название места проведения";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 17);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Введите тип мероприятия";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 17);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Введите название мероприятия";
			// 
			// BuildingTypetextBox
			// 
			this->BuildingTypetextBox->Location = System::Drawing::Point(351, 186);
			this->BuildingTypetextBox->Name = L"BuildingTypetextBox";
			this->BuildingTypetextBox->Size = System::Drawing::Size(423, 22);
			this->BuildingTypetextBox->TabIndex = 13;
			// 
			// BuildingNametextBox
			// 
			this->BuildingNametextBox->Location = System::Drawing::Point(351, 136);
			this->BuildingNametextBox->Name = L"BuildingNametextBox";
			this->BuildingNametextBox->Size = System::Drawing::Size(424, 22);
			this->BuildingNametextBox->TabIndex = 12;
			// 
			// EventTypetextBox
			// 
			this->EventTypetextBox->Location = System::Drawing::Point(350, 85);
			this->EventTypetextBox->Name = L"EventTypetextBox";
			this->EventTypetextBox->Size = System::Drawing::Size(425, 22);
			this->EventTypetextBox->TabIndex = 11;
			// 
			// EventNametextBox
			// 
			this->EventNametextBox->Location = System::Drawing::Point(350, 36);
			this->EventNametextBox->Name = L"EventNametextBox";
			this->EventNametextBox->Size = System::Drawing::Size(425, 22);
			this->EventNametextBox->TabIndex = 10;
			// 
			// OKButton
			// 
			this->OKButton->Location = System::Drawing::Point(687, 315);
			this->OKButton->Name = L"OKButton";
			this->OKButton->Size = System::Drawing::Size(87, 31);
			this->OKButton->TabIndex = 20;
			this->OKButton->Text = L"OK";
			this->OKButton->UseVisualStyleBackColor = true;
			this->OKButton->Click += gcnew System::EventHandler(this, &DeleteEventForm::OKButton_Click);
			// 
			// DeleteEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(836, 371);
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
			this->Name = L"DeleteEventForm";
			this->Text = L"DeleteEventForm";
			this->Load += gcnew System::EventHandler(this, &DeleteEventForm::DeleteEventForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (DeleteEventFunc())
		{

			//ошибки некорректного ввода
		case 1: break;	//Некорректный ввод названия мероприятия(Превышена длина или пустая строка)
		case 2: break;	//Некорректный ввод типа мероприятия(Превышена длина или пустая строка)
		case 3: break;	//Некорректный ввод названия заведения(Превышена длина или пустая строка)
		case 4: break;	//Некорректный ввод типа заведения(Превышена длина или пустая строка)
		case 5: break;	//Некорректое время мероприятия
		
			//ошибки работы с файлами
		case 6: exit(6);	//Не удалось открыть файл Building.bin
		case 7: exit(7);	//Не удалось открыть файл Event.bin
		case 8: exit(8);	//Не удалось открыть файл Temp.bin
		case 9: exit(9);	//Ошибка записи в файл Temp.bin
		case 10: exit(10);	//Не удалось открыть файл Temp.bin
		case 11: exit(11);	//Не удалось открыть файл Event.bin
		case 12: exit(12);	//Ошибка записи в Event.bin
		case 13: exit(13);	//Не удалось открыть файл Temp.bin
		case 14: exit(14);	//Ошибка записи в файл Temp.bin
		case 15: exit(15);	//Не удалось открыть файл Temp.bin
		case 16: exit(16);	//Не удалось открыть файл Building.bin
		case 17: exit(17);	//Ошибка записи в Building.bin
		case 18: 
		{
			MessageBox::Show("Данное мероприятие найдено не было", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			break;
		}
		case 0:
		{
			MessageBox::Show("Мероприятие удалено", "Информация", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			break;
		}
		}

	}
		   int DeleteEventFunc()//Функция удаления
		   {
			   //Объекты классов
			   Building build;
			   Event ev;
			   //Указатели для работы с файлами
			   FILE* FBuild;
			   FILE* FEvent;
			   //Указатель интерфейса
			   Iface* pI;
			   unsigned int BuildCode = 1;//Код заведения
			   unsigned int EventCode = 1;//Код мероприятия
			   //Массивы для имен и типов мероприятия и заведения
			   wchar_t BuildName[256];
			   wchar_t BuildType[256];
			   wchar_t EventName[256];
			   wchar_t EventType[256];
			   //Вспомогательные флаги
			   bool flag = false;
			   bool flag2 = false;
			   //очистка массивов
			   memset(EventType, 0, sizeof(wchar_t) * 256);
			   memset(EventName, 0, sizeof(wchar_t) * 256);
			   memset(BuildType, 0, sizeof(wchar_t) * 256);
			   memset(BuildName, 0, sizeof(wchar_t) * 256);

			   //Проверки корректности ввода
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
			 
			   if ((dateTimePicker1->Value.Year < DateTime::Now.Year) || ((dateTimePicker1->Value.Month < DateTime::Now.Month) && (dateTimePicker1->Value.Year == DateTime::Now.Year)) || ((dateTimePicker1->Value.Day < DateTime::Now.Day) && (dateTimePicker1->Value.Month == DateTime::Now.Month)) || ((dateTimePicker1->Value.Day == DateTime::Now.Day) && (dateTimePicker1->Value.Hour < DateTime::Now.Hour)))
			   {
				   MessageBox::Show("Некорректое время мероприятия", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 5;
			   }
			   //открытие файла
			   FBuild = fopen("Building.bin", "rb+");
			   if (FBuild == NULL)
			   {
				   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				   return 6;
			   }
			  
			   pI = &build;//Работаем с методами класса Building
			   while (pI->ReadFile(FBuild) == 0)//считываем файл полностью
			   {
				   if ((wcscmp(BuildType, build.GetBType()) == 0) && (wcscmp(BuildName, build.GetBName()) == 0))//сравнение строк
				   {
					   pI = &ev;//Работаем с методами класса Event
					   FEvent = fopen("Event.bin", "rb+");//Открытие файла
					   if (FEvent == NULL)
					   {
						   MessageBox::Show("Не удалось открыть файл Event.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
						   fclose(FBuild);
						   return 7;
					   }
					   while (pI->ReadFile(FEvent) == 0)//Чтение файла
					   {
						   if ((wcscmp(EventType, ev.GetEType()) == 0) && (wcscmp(EventName, ev.GetEName()) == 0) && (ev.GetDate().tm_year == dateTimePicker1->Value.Year) && (ev.GetDate().tm_mon == dateTimePicker1->Value.Month) && (ev.GetDate().tm_mday == dateTimePicker1->Value.Day) && (ev.GetDate().tm_hour == dateTimePicker1->Value.Hour) && (ev.GetDate().tm_min == dateTimePicker1->Value.Minute))//сравнение строк
						   {
							   flag = true;
							   //Перезапись с помощью вспомогательного файла
							   FILE* Temp;
							   Temp = fopen("Temp.bin", "wb+");
							   if (Temp == NULL)
							   {
								   MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
								   return 8;
							   }
							   EventCode = ev.GetECode();//Сохранение кода мероприятия
							   BuildCode = ev.GetBCode();//Сохранение кода заведения
							   fseek(FEvent, 0, SEEK_SET);
							   while (pI->ReadFile(FEvent) == 0)
							   {
								   if (ev.GetECode() == EventCode)
									   continue;
								   if (pI->WriteFile(Temp) != 0)
								   {
									   fclose(Temp);
									   fclose(FEvent);
									   fclose(FBuild);
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
							   remove("Temp.bin");
							   fseek(FEvent, 0, SEEK_SET);
							   while (pI->ReadFile(FEvent) == 0)
							   {
								   if (BuildCode == ev.GetBCode()) {//Если в данном заведении еще есть мероприятия
									   flag2 = true;
									   break;
								   }
							   }
							   fclose(FEvent);
							   break;
						   }
						   
					   }
					   fclose(FEvent);
					   if ((flag2 == false)&&(flag == true)) {//Если в данном заведении больше нет мероприятий, его так же удаляем
						   FILE* Temp;
						   Temp = fopen("Temp.bin", "wb+");
						   if (Temp == NULL)
						   {
							   MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
							   return 13;
						   }
						   pI = &build;
						   fseek(FBuild, 0, SEEK_SET);
						   while (pI->ReadFile(FBuild) == 0)
						   {
							   if (build.GetBCode() == BuildCode)
								   continue;
							   if (pI->WriteFile(Temp) != 0)
							   {
								   fclose(Temp);
								   fclose(FBuild);
								   remove("Temp.bin");
								   MessageBox::Show("Ошибка записи в файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
								   return 14;
							   }
						   }
						   fclose(FBuild);
						   fclose(Temp);
						   Temp = fopen("Temp.bin", "rb+");
						   if (Temp == NULL)
						   {
							   MessageBox::Show("Не удалось открыть файл Temp.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
							   return 15;
						   }
						   FBuild = fopen("Building.bin", "wb+");
						   if (FBuild == NULL)
						   {
							   fclose(Temp);
							   remove("Temp.bin");
							   MessageBox::Show("Не удалось открыть файл Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
							   return 16;
						   }
						   while (pI->ReadFile(Temp) == 0)
						   {
							   if (pI->WriteFile(FBuild) != 0)
							   {
								   fclose(Temp);
								   fclose(FBuild);
								   remove("Temp.bin");
								   MessageBox::Show("Ошибка записи в Building.bin", "Ошибка", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
								   return 17;
							   }
						   }
						   fclose(Temp);
						   fclose(FBuild);
						   remove("Temp.bin");
						   break;
					   }
				   }
				  
			   }
			   //удаляем объекты
			   ev.~Event();
			   build.~Building();
			   fclose(FBuild);
			   if (flag == false)
				   return 18;
			   return 0;
		   }
		   //При загрузке формы
private: System::Void DeleteEventForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Очистка всех полей ввода
	EventNametextBox->Clear();
	EventTypetextBox->Clear();
	BuildingNametextBox->Clear();
	BuildingTypetextBox->Clear();
}
};
}
