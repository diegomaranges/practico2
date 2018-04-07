#include "stdafx.h"
#include "OperacionesBinarias.h"
#include "MenuOpt.h"

#define AND(a, b) one & two
#define OR(a, b) one | two
#define SL(a) a<<2
#define SR(a) a>>2

int and_bin(int one, int two)
{
	return AND(one, two);
}


int or_bin(int one, int two)
{
	return OR(one, two);
}


int sleft(int one)
{
	return SL(one);
}


int sright(int one)
{
	return SR(one);
}

void SwitchOB(char opt)
{
	MenuOpt menu;
	int one;
	int two;
	switch (opt) {
	case 'a':
		one = menu.optionsFun("Ingrese el primer numero: ");
		two = menu.optionsFun("Ingrese el segundo numero: ");
		cout << "El resultado es: " << and_bin(one, two) << endl;
		break;
	case 'b':
		one = menu.optionsFun("Ingrese el primer numero: ");
		two = menu.optionsFun("Ingrese el segundo numero: ");
		cout << "El resultado es: " << or_bin(one, two) << endl;
		break;
	case 'c':
		one = menu.optionsFun("Ingrese el primer numero: ");
		cout << "El resultado es: " << sleft(one) << endl;
		break;
	case 'd':
		one = menu.optionsFun("Ingrese el primer numero: ");
		cout << "El resultado es: " << sright(one) << endl;
		break;
	default:
		cout << "No es una opcion valida" << endl;
		break;
	}
}
