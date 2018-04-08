#pragma once
#include <iostream>

typedef void(*callback_function)(void);

class MenuOpt
{
public:
    //Constructor
    MenuOpt();

    //Call a menu if you print out the menu of posible options.
    //If not receive argument or this argument is NULL, this function return a principal menu.
    //else execute function passing by argument (callback).
    void menu(callback_function funct = nullptr);

    //return a char that user pass for console.
    char options();

    //print string of argument and return int that user pass for console.
    int optionsFun(std::string);

    //print string of argument and return string that user pass for console.
    std::string optionsFunct(std::string);

    //Destructor
    ~MenuOpt();
};

