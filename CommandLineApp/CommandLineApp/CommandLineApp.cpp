// CommandLineApp.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "WordsOpt.h"

#include <iostream>
#include <string>


int main()
{
	WordsOpt Mmap; //Here load of all words and create commands.
	string num; //Num inser vy user.
	do {
		num = ""; // Clean string.
        std::cout << "inser command number or inser q to exit: ";
		std::cin >> num;
		Mmap.serchComand(num);
	} while (num.compare("q"));
    return 0;
}

