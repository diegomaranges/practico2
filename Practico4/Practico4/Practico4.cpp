// Practico4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "MenuOpt.h"
#include "LinkedList.h"

#include <algorithm> //defined function swap.

#define SHOW(var1, var2) std::cout << #var1 << ": " << (var1) << " ; " << #var2 << ": " << (var2) << std::endl

using namespace std;


// Swap using template, I cant use this function using header and file in visual studio.
template<typename T>
void SwapElements(T n1, T n2)
{
	SHOW(n1, n2);
	swap(n1, n2);
	SHOW(n1, n2);
}


int main()
{
	char value = '\0';
	MenuOpt myMenu; //menu class.
	LinkedList list; //doubly linked list class.
	int a;
	int b;
	do
	{
		myMenu.menu();
		switch (value = myMenu.options())
		{
		case 'a':
			a = myMenu.optionsFun("ingrese primer numero a intercambiar: ");
			b = myMenu.optionsFun("ingrese segundo numero a intercambiar: ");
			SwapElements(&a, &b);
			cin.ignore(999, '\n');
			break;
		case 'b':
			a = myMenu.optionsFun("ingrese primer numero a intercambiar: ");
			b = myMenu.optionsFun("ingrese segundo numero a intercambiar: ");
			SwapElements(a, b);
			cin.ignore(999, '\n');
			break;
		case 'c':
			a = myMenu.optionsFun("ingrese el nuevo numero de la lista: ");
			list.addToElement(a);
			cin.ignore(999, '\n');
			break;
		case 'd':
			list.pintList();
			break;
		default:
			break;
		}
	} while (value != 'q');
    return 0;

}

