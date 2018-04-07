#include "stdafx.h"
#include "MenuOpt.h"

#include <string>

using namespace std;

void MenuOpt::menu(callback_function funct)
{
	if (funct == nullptr) {
		cout << "***************************************************" << endl;
		cout << "* Selecciona una opcion y presiona enter:         *" << endl;
		cout << "* a - Operaciones matematicas                     *" << endl;
		cout << "* b - Operaciones Preprocesador                   *" << endl;
		cout << "* c - Operaciones de String                       *" << endl;
		cout << "* d - Operaciones binarias                        *" << endl;
		cout << "* e - Operaciones logicas                         *" << endl;
		cout << "* q - Salir                                       *" << endl;
		cout << "***************************************************" << endl;
		cout << "Opcion: ";
	}
	else {
		funct();
	}
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
	cin.ignore(999, '\n');
	return a;
}

string MenuOpt::optionsFunct(std::string comment)
{
	string a;
	cout << comment;
	cin >> a;
	cin.ignore(999, '\n');
	return a;
}

MenuOpt::MenuOpt()
{
}


MenuOpt::~MenuOpt()
{
}
