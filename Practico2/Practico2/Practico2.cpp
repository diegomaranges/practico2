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

#include <string>

#define show(var1, var2 ) std::cout << #var1 << ": " << (var1) << " ; " << #var2 << ": " << (var2) << std::endl
#define notvalid cout << "no es una de las opciones" << endl

using namespace std;

int main()
{
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
			switchOM(menu.options());
			break;
		case 'b':
			menu.menu(callback_function(Optpreproces));
			switch (menu.options())
			{
			case 'a':
				str1 = menu.optionsFunct("ingrese el valor de str1: ");
				str2 = menu.optionsFunct("ingrese el valor de str1 : ");
				chain(str1, str2);
				break;
			case 'b':
				console_print();
				break;
			default:
				notvalid;
				break;
			}
			break;
		case 'c':
			menu.menu(callback_function(OptStr));
			switch (menu.options())
			{
			case 'a':
				str1 = menu.optionsFunct("ingrese el valor de str1: ");
				str2 = menu.optionsFunct("ingrese el valor de str1 : ");
				if (compare_string(str1, str2)) {
					cout << "Son iguales" << endl;
				}
				else {
					cout << "No son iguales" << endl;
				}
				break;
			default:
				break;
			}
			break;
		case 'd':
			menu.menu(callback_function(OptBin));
			SwitchOB(menu.options());
			break;
		case 'e':
			menu.menu(callback_function(OptLgl));
			switch (menu.options())
			{
			case 'a':
				str1 = menu.optionsFunct("ingrese el primer numero: ");
				str2 = menu.optionsFunct("ingrese el segundo numero: ");
				show(str1, str2);
				my_swap(str1, str2);
				show(str1, str2);
				break;
			default:
				notvalid;
				break;
			}
			break;
		case 'q':
			cout << "\t\tNos vemos!!!" << endl;
			break;

		default:
			notvalid;
			break;
		}
	} while (option != 'q');
	system("pause");
	return 0;
}

