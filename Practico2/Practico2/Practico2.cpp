// Practico2.cpp
// Diego Maranges

#include "stdafx.h"
#include "MenuOpt.h"
#include "AllMenus.h"
#include "OperacionesBinarias.h"
#include "Operacioneslogicas.h"
#include "OperacionesMatenaticas.h"
#include "Operacionespreprocesador.h"
#include "OperacionesString.h"

#include <string> //if i not includ library, the constructor << by cout not run

#define show(var1, var2 ) std::cout << #var1 << ": " << (var1) << " ; " << #var2 << ": " << (var2) << std::endl
//i have define show by show me if my swap its works
#define notvalid cout << "no es una de las opciones" << endl
//i define notvalid because it exprecion is used in multiple cases

using namespace std;

int main()
{
	string str1 = "";
	string str2 = "";
	MenuOpt menu; // var to class MenuOpt
	char option;
	do
	{
		menu.menu(); // return menu by default
		switch (option = menu.options()) {
		case 'a':
			menu.menu(callback_function(OptMath)); //return menu of mathematics operation from AllMenu.h
			switchOM(menu.options());
			break;
		case 'b':
			menu.menu(callback_function(Optpreproces)); //return menu of preprocessor operation from AllMenu.h
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
			menu.menu(callback_function(OptStr)); //return menu of strings operation from AllMenu.h
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
			menu.menu(callback_function(OptBin)); //return menu of binaries operation from AllMenu.h
			SwitchOB(menu.options());
			break;
		case 'e':
			menu.menu(callback_function(OptLgl)); //return menu of logicals operation from AllMenu.h
			switch (menu.options())
			{
			case 'a':
				str1 = menu.optionsFunct("ingrese el primer numero: ");
				str2 = menu.optionsFunct("ingrese el segundo numero: ");
				show(str1, str2);
				my_swap(&str1, &str2);
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
	system("pause"); //this function pause de system and not continue until user press any button
	return 0;
}

