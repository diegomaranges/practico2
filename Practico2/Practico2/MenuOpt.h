#pragma once
#include <iostream>

typedef void(*callback_function)(void);

class MenuOpt
{
public:
	MenuOpt();
	void menu(callback_function funct = nullptr);
	char options();
	int optionsFun(std::string);
	std::string optionsFunct(std::string);
	~MenuOpt();
};

