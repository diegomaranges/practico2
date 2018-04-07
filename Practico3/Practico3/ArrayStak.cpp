#include "stdafx.h"
#include "ArrayStak.h"
#include "MenuOpt.h"

#include <iostream>

using namespace std;

void Array_Stack(int *myarray, int length, char option)
{
	static int sector_array = 0;
	MenuOpt menu;
	int one;
	switch (option) {
	case 'a':
		one = menu.optionsFun("ingrese el numero a agregar al array: ");
		myarray[sector_array] = one;
		sector_array = (sector_array + 1) % length;
		break;
	case 'b':
		for (int i = 0; i < 5; i++)
			cout << myarray[i] << ", ";
		cout << endl;
		break;
	default:
		cout << "No es una opcion valida" << endl;
		break;
	}
}

