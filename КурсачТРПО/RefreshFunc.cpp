#include "Classes.h"
#include "Refresh.h"

int RefreshFunc()
{
	Building build;//Объект класс Building(Заведения)
	Event ev;//Объект класс Event(Мероприятия)
	Visitor vis;//Объект класс Visitor(Посетители)
	Iface* pI;//Указатель интерфейса
	//Указатели для работы с файлами
	FILE* FBuild;
	FILE* FEvent;
	FILE* FVisitor;
	FILE* Temp;
	unsigned int BuildCode;//Код заведения
	unsigned int EventCode;//Код мероприятия
	System::DateTime Date;//Переменная для работы с датой/временем
	bool flag2 = false;//Вспомогательный флаг
	Date = System::DateTime::Now;//Получение текущей даты
	//открытие файла
	FEvent = fopen("Event.bin", "rb+");
	if (FEvent == NULL)
		return 1;
	pI = &ev;//Работаем с методами класса Event
	while (pI->ReadFile(FEvent) == 0)//считываем файл полностью
	{
		//Проверяем дату мероприятия
		if ((ev.GetDate().tm_year <= Date.Year) && (((ev.GetDate().tm_mon < Date.Month) && (ev.GetDate().tm_year == Date.Year)) || ((ev.GetDate().tm_mon == Date.Month) && (ev.GetDate().tm_mday < Date.Day)) || ((ev.GetDate().tm_mday == Date.Day) && (ev.GetDate().tm_hour < Date.Hour))))
		{
			Temp = fopen("Temp.bin", "wb+");//Открывай файл для перезаписи
			if (Temp == NULL)
				return 2;
			//Сохраняем код мероприятия и заведения
			EventCode = ev.GetECode();
			BuildCode = ev.GetBCode();
			fseek(FEvent, 0, SEEK_SET);//Перемещаем каретку в начало файла
			while (pI->ReadFile(FEvent) == 0)//Читаем файл
			{
				if (ev.GetECode() == EventCode)//Если встретили нужное мероприятие, переходим к след. итерации цикла
					continue;
				if (pI->WriteFile(Temp) != 0)//Записываем в вспомогательный файл
				{//Если произошла ошибка, закрываем все открытые файлы и удаляем вспомогательный
					fclose(Temp);
					fclose(FEvent);
					remove("Temp.bin");
					return 3;
				}
			}
			fclose(FEvent);
			fclose(Temp);
			//Отркываем вспомогательный файл в формате чтения-записи
			Temp = fopen("Temp.bin", "rb+");
			if (Temp == NULL)
				return 4;
			//Открываем файл мероприятий в формате записи с удалением всего содержимого
			FEvent = fopen("Event.bin", "wb+");
			if (FEvent == NULL)
			{
				fclose(Temp);
				remove("Temp.bin");
				return 5;
			}
			while (pI->ReadFile(Temp) == 0)//Читаем вспомогательный файл и перезаписываем в файл мероприятий
			{
				if (pI->WriteFile(FEvent) != 0)
				{
					fclose(Temp);
					fclose(FEvent);
					remove("Temp.bin");
					return 6;
				}
			}
			fclose(Temp);
			remove("Temp.bin");
			fseek(FEvent, 0, SEEK_SET);//Перемещаем каретку в начало файла
			while (pI->ReadFile(FEvent) == 0)
			{
				if (BuildCode == ev.GetBCode()) {//Если в данном заведении еще есть мероприятия
					flag2 = true;//Устанавливаем флаг
					break;//Прерываем цикл
				}
			}
			fclose(FEvent);
			if (flag2 == false) //Если мероприятий в данном заведении нет
			{
				FBuild = fopen("Building.bin", "rb+");
				if (FBuild == NULL)
					return 7;
				
				Temp = fopen("Temp.bin", "wb+");
				if (Temp == NULL)
				{
					return 8;
				}
				pI = &build;//Работаем с методами класса Building

				fseek(FBuild, 0, SEEK_SET);
				//Аналогично мероприятиям ищем нужное заведение, и перезаписываем всю информацию из файла заведений в вспомогательный файл, за исключением нужного заведения
				while (pI->ReadFile(FBuild) == 0)
				{
					if (build.GetBCode() == BuildCode)
						continue;
					if (pI->WriteFile(Temp) != 0)
					{
						fclose(Temp);
						fclose(FBuild);
						remove("Temp.bin");
						return 9;
					}
				}
				fclose(FBuild);
				fclose(Temp);
				Temp = fopen("Temp.bin", "rb+");
				if (Temp == NULL)
					return 10;
				FBuild = fopen("Building.bin", "wb+");
				if (FBuild == NULL)
				{
					fclose(Temp);
					remove("Temp.bin");
					return 11;
				}
				//Перезапись из вспомогательного файла в файл заведений
				while (pI->ReadFile(Temp) == 0)
				{
					if (pI->WriteFile(FBuild) != 0)
					{
						fclose(Temp);
						fclose(FBuild);
						remove("Temp.bin");
						return 12;
					}
				}
				fclose(Temp);
				fclose(FBuild);
				remove("Temp.bin");
			}
			flag2 = false;

			FVisitor = fopen("Visitor.bin", "rb+");
			if (FVisitor == NULL)
				return 13;

			Temp = fopen("Temp.bin", "wb+");
			if (Temp == NULL)
			{
				return 14;
			}
			pI = &vis;//Работаем с методами класса Visitor
			//Аналогично заведениям и мероприятиям, ищем нужного посетителя, перезаписываем всю информацию, за исключением нужного посетителя
			fseek(FVisitor, 0, SEEK_SET);
			while (pI->ReadFile(FVisitor) == 0)
			{
				if (vis.GetECode() == EventCode)
					continue;
				if (pI->WriteFile(Temp) != 0)
				{
					fclose(Temp);
					fclose(FVisitor);
					remove("Temp.bin");
					return 15;
				}
			}
			fclose(FVisitor);
			fclose(Temp);
			Temp = fopen("Temp.bin", "rb+");
			if (Temp == NULL)
				return 16;
			FVisitor = fopen("Visitor.bin", "wb+");
			if (FVisitor == NULL)
			{
				fclose(Temp);
				remove("Temp.bin");
				return 17;
			}
			//Перезаписываем из всопомгательного файла в файл посетителей
			while (pI->ReadFile(Temp) == 0)
			{
				if (pI->WriteFile(FVisitor) != 0)
				{
					fclose(Temp);
					fclose(FVisitor);
					remove("Temp.bin");
					return 18;
				}
			}
			fclose(Temp);
			fclose(FVisitor);
			remove("Temp.bin");
		}
	}
	fclose(FEvent);
	//Удаляем объекты классов
	ev.~Event();
	build.~Building();
	vis.~Visitor();
	return 0;

}