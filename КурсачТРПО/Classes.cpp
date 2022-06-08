#pragma once
#include "Classes.h"

//class "Building"
wchar_t* Building::GetBName()							//Получение названия заведения
{
	return (BName);
}
void Building::SetBName(wchar_t* InBName)				//Установка названия заведения
{
	memset(BName, 0, sizeof(wchar_t) * 256);
	if (wcslen(InBName) <= 256)
		wcscpy(BName, InBName);
}
wchar_t* Building::GetBType()							//Получение названия типа
{
	return (BType);
}
void Building::SetBType(wchar_t* InBType)				//Установка названия типа
{
	memset(BType, 0,sizeof(wchar_t)*256);
	if (wcslen(InBType) <= 256)
		wcscpy(BType, InBType);
}
Building::Building()									//Конструктор
{
	memset(BType, 0, sizeof(wchar_t) * 256);
	memset(BName, 0, sizeof(wchar_t) * 256);
	BCode = 0;
}
Building::~Building() {};								//Деструктор
void Building::SetBCode(unsigned int InBCode)			//Установка кода
{
	BCode = InBCode;
}
unsigned int Building::GetBCode()						//Получение кода
{
	return BCode;
}
int Building::ReadFile(FILE* FNAME)						//Чтение файла
{
	if (fread(&this->BCode, sizeof(unsigned int), 1, FNAME) != 1)
		return 1;
	if (fread(this->BName, sizeof(wchar_t), 256, FNAME) != 256) 
		return 2;
	if (fread(this->BType, sizeof(wchar_t), 256, FNAME) != 256) 
		return 3;
	return 0;
}

int Building::WriteFile(FILE* FNAME)					//Запись в файл
{
	if ((fwrite(&this->BCode, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 1;
	if ((fwrite(this->BName, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 2;
	if ((fwrite(this->BType, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 3;
	
	return 0;
}
//end of class "Building"

/************************************************************************************************/

//class "Event"
wchar_t* Event::GetEName()								//Получение названия
{
	return (EName);
}
void Event::SetEName(wchar_t* InEName)					//Установка названия
{
	memset(EName, 0, sizeof(wchar_t) * 256);
	if (wcslen(InEName) <= 256)
		wcscpy(EName, InEName);
}
wchar_t* Event::GetEType()								//Получение типа
{
	return (EType);
}
void Event::SetEType(wchar_t* InEType)					//Установка типа
{
	memset(EType, 0, sizeof(wchar_t) * 256);
	if (wcslen(InEType) <= 256)
		wcscpy(EType, InEType);
}
unsigned int Event::GetAllTickets()						//Получение кол-ва билетов
{
	return (AllTickets);
}
void Event::SetAllTickets(unsigned int InAllTickets)	//Установка кол-ва билетов
{
	AllTickets = InAllTickets;
}
unsigned int Event::GetSoldTickets()					//Получение кол-ва проданных билетов
{
	return (SoldTickets);
}
void Event::SetSoldTickets(unsigned int InSoldTickets)	//Установка кол-ва проданных билетов
{
	SoldTickets = InSoldTickets;
}
unsigned int Event::GetPrice()							//Получение цены
{
	return (Price);
}
void Event::SetPrice(unsigned int InPrice)				//Установка цены
{
	Price = InPrice;
}
tm Event::GetDate()										//Получение даты
{
	return (Date);
}
void Event::SetDate(tm InDate)							//Установка даты
{
	Date = InDate;
}
void Event::SetECode(unsigned int InECode)				//Установка кода
{
	ECode = InECode;
}
unsigned int Event::GetECode()							//Получение кода
{
	return ECode;
}

int Event::ReadFile(FILE* FNAME)						//Чтение файла
{
	if (fread(&this->BCode, sizeof(unsigned int), 1, FNAME) != 1)
		return 1;
	if (fread(&this->ECode, sizeof(unsigned int), 1, FNAME) != 1)
		return 2;
	if (fread(this->EName, sizeof(wchar_t), 256, FNAME) !=256)
		return 3;
	if (fread(this->EType, sizeof(wchar_t), 256, FNAME) != 256)
		return 4;
	if (fread(&this->AllTickets, sizeof(unsigned int), 1, FNAME) != 1)
		return 5;
	if (fread(&this->SoldTickets, sizeof(unsigned int), 1, FNAME) != 1)
		return 6;
	if (fread(&this->Price, sizeof(unsigned int), 1, FNAME) != 1)
		return 7;
	if (fread(&this->Date, sizeof(tm), 1, FNAME) != 1)
		return 8;

	return 0;
}

int Event::WriteFile(FILE* FNAME)						//Запись в файл
{
	if ((fwrite(&this->BCode, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 1;
	if ((fwrite(&this->ECode, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 2;
	if ((fwrite(this->EName, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 3;
	if ((fwrite(this->EType, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 4;
	if ((fwrite(&this->AllTickets, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 5;
	if ((fwrite(&this->SoldTickets, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 6;
	if ((fwrite(&this->Price, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 7;
	if ((fwrite(&this->Date, sizeof(tm), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 8;
	return 0;
}
Event::Event() : Building()								//Конструктор
{
	memset(EName, 0, sizeof(wchar_t) * 256);
	memset(EType, 0, sizeof(wchar_t) * 256);
	AllTickets = 0;
	SoldTickets = 0;
	Price = 0;
	ECode = 0;
	Date.tm_mday = 0;
	Date.tm_mon = 0;
	Date.tm_year = 0;
	Date.tm_hour = 0;
	Date.tm_min = 0;
}
Event::~Event() {};										//Деструктор
//end of class "Event"

/************************************************************************************************/

//class "Visitor"
unsigned int Visitor::GetVCode()						//Получение кода
{
	return (VCode);
}
void Visitor::SetVCode(unsigned int InVCode)			//Установка кода
{
	VCode = InVCode;
}
unsigned int Visitor::GetAge()							//Получение возраста
{
	return (Age);
}
void Visitor::SetAge(unsigned int InAge)				//Установка возраста
{
	Age = InAge;
}
wchar_t* Visitor::GetVName()							//Получение фио
{
	return (VName);
}
void Visitor::SetVName(wchar_t* InVName)				//Установка фио
{
	memset(VName, 0, sizeof(wchar_t) * 256);
	if (wcslen(InVName) <= 256)
		wcscpy(VName, InVName);
}
wchar_t* Visitor::GetProfession()						//Получение профессии
{
	return (Profession);
}
void Visitor::SetProfession(wchar_t* InProfession)		//Установка профессии
{
	memset(Profession, 0, sizeof(wchar_t) * 256);
	if (wcslen(InProfession) <= 256)
		wcscpy(Profession, InProfession);
}
wchar_t* Visitor::GetEducation()						//Получение образования
{
	return (Education);
}
void Visitor::SetEducation(wchar_t* InEducation)		//Установка образования
{
	memset(Education, 0, sizeof(wchar_t) * 256);
	if (wcslen(InEducation) <= 256)
		wcscpy(Education, InEducation);
}
Visitor::Visitor() : Event()							//Конструктор
{
	memset(VName, 0, sizeof(wchar_t) * 256);
	memset(Profession, 0, sizeof(wchar_t) * 256);
	memset(Education, 0, sizeof(wchar_t) * 256);
	Age = 0;
	VCode = 0;

}

int Visitor::ReadFile(FILE* FNAME)						//Чтение файла
{
	if (fread(&this->VCode, sizeof(unsigned int), 1, FNAME) != 1)
		return 1;
	if (fread(&this->Age, sizeof(unsigned int), 1, FNAME) != 1)
		return 2;
	if (fread(this->VName, sizeof(wchar_t), 256, FNAME) != 256)
		return 3;
	if (fread(this->Profession, sizeof(wchar_t), 256, FNAME) != 256)
		return 4;
	if (fread(this->Education, sizeof(wchar_t), 256, FNAME) != 256)
		return 5;
	if (fread(&this->ECode, sizeof(unsigned int), 1, FNAME) != 1)
		return 6;
	if (fread(&this->AllTickets, sizeof(unsigned int), 1, FNAME) != 1)
		return 7;

	return 0;
}

int Visitor::WriteFile(FILE* FNAME)						//Запись в файл
{
	if ((fwrite(&this->VCode, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 1;
	if ((fwrite(&this->Age, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 2;
	if ((fwrite(this->VName, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 3;
	if ((fwrite(this->Profession, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 4;
	if ((fwrite(this->Education, sizeof(wchar_t), 256, FNAME) != 256) && (fflush(FNAME) != EOF))
		return 5;
	if ((fwrite(&this->ECode, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 6;
	if ((fwrite(&this->AllTickets, sizeof(unsigned int), 1, FNAME) != 1) && (fflush(FNAME) != EOF))
		return 7;

	return 0;
}
Visitor::~Visitor() {};									//Деструктор
//end of class "Visitor"
