#include "stdafx.h"
#include "OperacionesBinarias.h"

#define AND(a, b) one & two
#define OR(a, b) one | two
#define SL(a) a<<2
#define SR(a) a>>2

lint and_bin(lint one, lint two)
{
	return AND(one, two);
}


lint or_bin(lint one, lint two)
{
	return OR(one, two);
}


lint sleft(lint one)
{
	return SL(one);
}


lint sright(lint one)
{
	return SR(one);
}

void munuBin() {

	cout << "***************************************************" << endl;
	cout << "* Selecciona una opcion y presiona enter:         *" << endl;
	cout << "* a - AND binario                                 *" << endl;
	cout << "* b - OR binario                                  *" << endl;
	cout << "* c - Desplazamiento de 2 bits a la izquierda     *" << endl;
	cout << "* d - Desplazamiento de 2 bits a la derecha       *" << endl;
	cout << "***************************************************" << endl;
	cout << "Opcion: ";
}

void sub_opt()
{
	lint one;
	lint two;
	char option;
	

	while (!(cin.get(option))) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Invalid data type! Please enter 'option' again";
	}
	cin.ignore(999, '\n');

	switch (option) {
	case 'a':
		cout << "Ingrese el primer numero: ";
		cin >> one;
		cout << "Ingrese el segundo numero: ";
		cin >> two;
		cout << "El resultado es: " << and_bin(one, two) << endl;
		cin.ignore(999, '\n');
		break;
	case 'b':
		cout << "Ingrese el primer numero: ";
		cin >> one;
		cout << "Ingrese el segundo numero: ";
		cin >> two;
		cout << "El resultado es: " << or_bin(one, two) << endl;
		cin.ignore(999, '\n');
		break;
	case 'c':
		cout << "Ingrese el numero: ";
		cin >> one;
		cout << "El resultado es: " << sleft(one) << endl;
		cin.ignore(999, '\n');
		break;
	case 'd':
		cout << "Ingrese el numero: ";
		cin >> one;
		cout << "El resultado es: " << sright(one) << endl;
		cin.ignore(999, '\n');
		break;
	default:
		cout << "No es una opcion valida" << endl;
		break;
	}
}
