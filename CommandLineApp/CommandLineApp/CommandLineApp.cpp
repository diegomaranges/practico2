// CommandLineApp.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "WordsOpt.h"

#include <iostream>
#include <string>


int main()
{
	WordsOpt Mmap;
	string num;
	do {
		num = "";
		std::cin >> num;
		Mmap.serchComand(num);
	} while (num.compare("q"));
    return 0;
}

