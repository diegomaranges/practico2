// Practico2.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "MenuOpt.h"
#include "AllMenus.h"
#include "OperacionesBinarias.h"
#include "Operacioneslogicas.h"
#include "OperacionesMatenaticas.h"
#include "Operacionespreprocesador.h"
#include "OperacionesString.h"

using namespace std;

int main()
{
	int myarray[5] = {}; // if assing { 10, 20, 30 } initialize to three first elements and
							  // eny left out with 0.
	double number1 = 0;
	double number2 = 0;
	string str1 = "";
	string str2 = "";
	MenuOpt menu;
	char option;
	do
	{
		menu.menu();
		switch (option = menu.options()) {
		case 'a':
			menu.menu(callback_function(OptMath));
			break;
		case 'b':
			menu.menu(callback_function(Optpreproces));
			break;
		case 'c':
			menu.menu(callback_function(OptStr));
			break;
		case 'd':
			menu.menu(callback_function(OptLgl));
			break;
		case 'q':
			cout << "\t\tNos vemos!!!" << endl;
			break;

		default:
			cout << "No es una opcion valida" << endl;
			break;
		}
	} while (option != 'q');
	return 0;
}

