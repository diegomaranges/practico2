// Practico3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "MenuOpt.h"
#include "SizeofPrint.h"
#include "ArrayStak.h"
#include "AllMenus.h"

#define length 5


int main()
{
	int myarray[length] = {};
	MenuOpt menu;
	char opt;
	do {
		menu.menu();
		switch (opt = menu.options())
		{
		case 'a':
			menu.menu(callback_function(OptArray));
			Array_Stack(myarray, length, menu.options());
			break;
		case 'b':
			menu.menu(callback_function(Optsizeof));
			Print_Sizeof(menu.options());
			break;
		case 'q':
			cout << "\t\tNos vemos!!!" << endl;
			break;
		default:
			std::cout << "no es una opcion valida" << std::endl;
			break;
		}
	} while (opt != 'q');
	system("pause");
    return 0;
}

