#include "Operaciones_Binarias.h"
lint and_bin(lint one, lint two)//AND binario
{
    return one & two;
}


lint or_bin(lint one, lint two)//OR binario
{
    return one | two;
}


lint sleft(lint one)//Desplazamiento de 2 bits a la izquierda
{
    return one<<2;
}


lint sright(lint one)// Desplazamiento de 2 bits a la derecha
{
    return one>>2;
}

void sub_opt()
{
    lint one;
    lint two;
    char option;
    cout << "***************************************************" << endl;
    cout << "* Selecciona una opcion y presiona enter:         *" << endl;
    cout << "* a - AND binario                                 *" << endl;
    cout << "* b - OR binario                                  *" << endl;
    cout << "* c - Desplazamiento de 2 bits a la izquierda     *" << endl;
    cout << "* d - Desplazamiento de 2 bits a la derecha       *" << endl;
    cout << "***************************************************" << endl;
    while(!(cin.get(option))) {
       cin.clear();
       cin.ignore(999,'\n');
       cout << "Invalid data type! Please enter 'option' again";
    }
    cin.ignore(999,'\n');
    switch (option) {
    case 'a':
        cin >> one;
        cin >> two;
        cout << and_bin(one, two) << endl;
        cin.ignore(999,'\n');
        break;
    case 'b':
        cin >> one;
        cin >> two;
        cout << or_bin(one, two) << endl;
        cin.ignore(999,'\n');
        break;
    case 'c':
        cin >> one;
        cout << sleft(one) << endl;
        cin.ignore(999,'\n');
        break;
    case 'd':
        cin >> one;
        cout << sright(one) << endl;
        cin.ignore(999,'\n');
        break;
    default:
        cout << "no es una opcion valida" << endl;
        break;
    }
}
