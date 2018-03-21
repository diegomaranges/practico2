#include "Array_Stack.h"

int myarray[5];
int sector_array = 0;

void Array_Stack()
{
    int one;
    char option;
    cout << "***************************************************" << endl;
    cout << "* Selecciona una opcion y presiona enter:         *" << endl;
    cout << "* a - Actualizar valor                            *" << endl;
    cout << "* b - Mostrar array                               *" << endl;
    cout << "***************************************************" << endl;
    cout << "Opcion: ";

    while(!(cin.get(option))) {
       cin.clear();
       cin.ignore(999,'\n');
       cout << "Invalid data type! Please enter 'option' again";
    }
    cin.ignore(999,'\n');

    switch (option) {
    case 'a':
        cout << "ingrese el numero a agregar al array: ";
        cin >> one;
        myarray[sector_array] = one;
        sector_array = (sector_array + 1)%5;
        cin.ignore(999,'\n');
        break;
    case 'b':
        for (int i = 0; i < 5 ; i++)
            cout << myarray[i] << ", ";
        cout << endl;
        break;
    default:
        cout << "No es una opcion valida" << endl;
        break;
    }
}
