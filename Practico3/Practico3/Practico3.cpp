// Practico3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "MenuOpt.h"
#include "SizeofPrint.h"
#include "ArrayStak.h"
#include "AllMenus.h"

#include <iostream>

#define length 5


int main()
{ 
    // Array in stak initialize all values in 0.
    // If assing { 10, 20, 30 } initialize to three first elements and
    //eny left out with 0.
	int myarray[length] = {};
	MenuOpt menu;
	char opt;
	do {
		menu.menu();
		switch (opt = menu.options())
		{
		case 'a':
			menu.menu(callback_function(OptArray));//return menu of Array operation from AllMenu.h
			Array_Stack(myarray, length, menu.options());
			break;
		case 'b':
			menu.menu(callback_function(Optsizeof));//return menu of sizeof operation from AllMenu.h
			Print_Sizeof(menu.options());
			break;
		case 'q':
			std::cout << "\t\tNos vemos!!!" << std::endl;
			break;
		default:
			std::cout << "no es una opcion valida" << std::endl;
			break;
		}
	} while (opt != 'q');
	system("pause");//this function pause de system and not continue until user press any button
    return 0;
}

