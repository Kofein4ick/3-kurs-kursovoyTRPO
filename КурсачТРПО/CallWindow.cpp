#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array <System::String^> ^args)
{
	Application::EnableVisualStyles();//Включение визуальных стилей
	Application::SetCompatibleTextRenderingDefault(false);//Установка способа отрисовки текста
	КурсачТРПО::MainForm mainform;//Выбор главной формы
	Application::Run(% mainform);//Привязка работы приложения к работе формы, запуск приложения
	return 0;
}