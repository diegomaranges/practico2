#pragma once
#include <iostream>

class MenuOpt
{
public:
    //Constructor
    MenuOpt();

    //Call a menu if you print out the menu of posible options.
    //If not receive argument or this argument is NULL, this function return a principal menu.
    //else execute function passing by argument (callback).
    void menu();

    //return a char that user pass for console.
    char options();

    //print string of argument and return int that user pass for console.
    int optionsFun(std::string);

    //Destructor
    ~MenuOpt();
};

