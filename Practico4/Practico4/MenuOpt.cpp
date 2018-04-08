#include "stdafx.h"
#include "MenuOpt.h"

#include <string>

using namespace std;

void MenuOpt::menu()
{
    //Default menu in this proyect.
	cout << "***************************************************" << endl;
	cout << "* Selecciona una opcion y presiona enter:         *" << endl;
	cout << "* a - Swap referencia                             *" << endl;
	cout << "* b - Swap valor                                  *" << endl;
	cout << "* c - Agregar elemento a la lista                 *" << endl;
	cout << "* d - Imprimir lista                              *" << endl;
	cout << "* q - Salir                                       *" << endl;
	cout << "***************************************************" << endl;
	cout << "Opcion: ";
}

char MenuOpt::options()
{
	char option_in = '\0';
	while (!(cin.get(option_in))) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Invalid data type! Please enter 'option' again";
	}
	cin.ignore(999, '\n');
	return option_in;
}

int MenuOpt::optionsFun(std::string comment)
{
	int a;
	cout << comment;
	cin >> a;
	return a;
}

MenuOpt::MenuOpt()
{
}


MenuOpt::~MenuOpt()
{
}
