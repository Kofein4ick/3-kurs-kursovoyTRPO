#pragma once
#include <ctime>
#include <iostream>
#include <cwchar>

class Iface											//Интерфейс
{
public:
	//чистые функции
	virtual int ReadFile(FILE* FNAME) = 0;			//Функция чтения из файла
	virtual int WriteFile(FILE* FNAME) = 0;			//Функция записи в файл
	virtual ~Iface() {};
};
	
class Building: public Iface						//Класс заведение
{
protected:
	wchar_t BName[256];								//Название заведения
	wchar_t BType[256];								//Название типа
	unsigned int BCode;								//Код
public:
	wchar_t* GetBName();							//Получение названия заведения
	void SetBName(wchar_t* InBName);				//Установка названия заведения
	wchar_t* GetBType();							//Получение названия типа
	void SetBType(wchar_t* InBType);				//Установка названия типа
	Building();										//конструктор
	virtual ~Building();							//деструктор
	unsigned int GetBCode();						//Получение кода
	void SetBCode(unsigned int InBCode);			//Установка кода
	virtual int ReadFile(FILE* FNAME) override;		//Функция чтения из файла
	virtual int WriteFile(FILE* FNAME) override;	//Функция записи в файл
};
class Event: public Building						//Класс мероприятие
{
protected: 
	wchar_t EName[256];								//название мероприятия
	wchar_t EType[256];								//тип мероприятия
	unsigned int AllTickets;						//кол-во билетов
	unsigned int SoldTickets;						//кол-во проданных билетов
	unsigned int Price;								//цена за билет
	unsigned int ECode;								//код
	tm Date;										//дата проведения
public:
	wchar_t* GetEName();							//Получение названия
	void SetEName(wchar_t* InEName);				//Установка названия
	wchar_t* GetEType();							//Получение типа
	void SetEType(wchar_t* InEType);				//Установка типа
	unsigned int GetAllTickets();					//Получение кол-ва билетов
	void SetAllTickets(unsigned int InAllTickets);	//Установка кол-ва билетов
	unsigned int GetECode();						//Получение кода
	void SetECode(unsigned int InECode);			//Установка кода
	unsigned int GetSoldTickets();					//Получение кол-ва проданных билетов
	void SetSoldTickets(unsigned int InSoldTickets);//Установка кол-ва проданных билетов
	unsigned int GetPrice();						//Получение цены
	void SetPrice(unsigned int InPrice);			//Установка цены
	tm GetDate();									//Получение даты
	void SetDate(tm InDate);						//Установка даты
	virtual int ReadFile(FILE* FNAME) override;		//Функция чтения из файла
	virtual int WriteFile(FILE* FNAME) override;	//Функция записи в файл
	Event();										//конструктор
	virtual ~Event();								//деструктор
};

class Visitor : public Event						//Класс посетитель
{
protected:
	wchar_t VName[256];								//фио посетителя
	unsigned int VCode;								//код
	unsigned int Age;								//возраст
	wchar_t Profession[256];						//профессия
	wchar_t Education[256];							//образование
public:
	wchar_t* GetVName();							//получение имени
	void SetVName(wchar_t* InVName);				//установка имени
	wchar_t* GetProfession();						//получение профессии
	void SetProfession(wchar_t* InProfession);		//установка профессии
	wchar_t* GetEducation();						//получение образования
	void SetEducation(wchar_t* InEducation);		//установка образования
	unsigned int GetVCode();						//Получение кода
	void SetVCode(unsigned int InVCode);			//Установка кода
	unsigned int GetAge();							//Получение возраста
	void SetAge(unsigned int InAge);				//Установка возраста
	virtual int ReadFile(FILE* FNAME) override;		//Функция чтения из файла
	virtual int WriteFile(FILE* FNAME) override;	//Функция записи в файл
	Visitor();										//коунструктор
	virtual ~Visitor();								//деструктор
};

