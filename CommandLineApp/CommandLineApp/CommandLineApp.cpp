// CommandLineApp.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "WordsOpt.h"


int main()
{
	WordsOpt Mmap;
	string num;
	do {
		num = "";
		cin >> num;
		Mmap.serchComand(num);
		//system("pause");
	} while (num.compare("exit"));
    return 0;
}

