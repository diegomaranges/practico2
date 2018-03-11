#include <iostream>
#include <string.h>
#include "Operaciones_Binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_Matenaticas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"

using namespace std;

void menu()
{
    cout << "***************************************************" << endl;
    cout << "* a - El cuadrado de un numer                     *" << endl;
    cout << "* b - La suma de dos numeros                      *" << endl;
    cout << "* c - El area de un circulo                       *" << endl;
    cout << "* d - El maximo de dos numeros                    *" << endl;
    cout << "* e - Concatenacion de nombre de variables        *" << endl;
    cout << "* f - Imprimir por pantalla un texto              *" << endl;
    cout << "* g - Camparacion de cadena                       *" << endl;
    cout << "* h - Operaciones binarias                        *" << endl;
    cout << "* i - Operaciones logicas                         *" << endl;
    cout << "* q - Salir                                       *" << endl;
    cout << "***************************************************" << endl;
}

char options()
{
    char option_in = '\0';
    while(!(cin.get(option_in))) {
       cin.clear();
       cin.ignore(999,'q');
       cout<<"Invalid data type! Please enter 'option' again";
    }
    return option_in;
}

int main()
{
    char option = 'q';
    char *suboption = '\0';
    char *subopt = '\0';
    do
    {
        menu();
        option = options();
        switch (option) {
        case 'h':
            cout << and_bin(31, 21);
        case 'i':
            cin >> subopt;
            cin >> suboption;
            myc_swap(subopt, suboption);
            cout << subopt << "    " << suboption << endl;
        default:
            break;
        }
        if(option == 'z')
            return 0;
    } while(option != 'q');
    return 0;
}
