#include "MyForm.h"
#include "Adauga-echipa.h"
#include <conio.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;



void Main(array<String^>^ args)
{
	printf("mesaj");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Raluca_proiect::MyForm form;
	Application::Run(%form);
}
