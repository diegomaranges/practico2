#include "Operaciones_Binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_Matenaticas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"

using namespace std;

void menu()
{
    cout << "***************************************************" << endl;
    cout << "* Selecciona una opcion y presiona enter:         *" << endl;
    cout << "* a - El cuadrado de un numero                    *" << endl;
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
    cout << "Opcion: ";
}

char options()
{
    char option_in = '\0';
    while(!(cin.get(option_in))) {
       cin.clear();
       cin.ignore(999,'\n');
       cout << "Invalid data type! Please enter 'option' again";
    }
    cin.ignore(999,'\n');
    return option_in;
}

int main()
{
    char option = 'q';
    float number1 = 0;
    float number2 = 0;
    string str1 = "";
    string str2 = "";
    do
    {
        menu();
        option = options();
        switch (option) {
        case 'a':
            cout << "Ingrese el numero: ";
            cin>>number1;
            cout << "El resultado es: " << cal_square(number1) <<endl;
            cin.ignore(999,'\n');
            break;
        case 'b':
            cout << "Ingrese el primer numero: ";
            cin>>number1;
            cout << "Ingrese el segundo numero: ";
            cin>>number2;
            cout << "El resultado es: " << cal_addition(number1, number2) << endl;
            cin.ignore(999,'\n');
            break;
        case 'c':
            cout << "Ingrese el radio del circulo: ";
            cin>>number1;
            cout << "El resultado es: " << circle_area(number1) << endl;
            cin.ignore(999,'\n');
            break;
        case 'd':
            cout << "Ingrese el primer numero: ";
            cin>>number1;
            cout << "Ingrese el segundo numero: ";
            cin>>number2;
            cout << "El resultado es: " << maximal(number1, number2) << endl;
            cin.ignore(999,'\n');
            break;
        case 'e':
            cout << "Ingrese primer valor: ";
            cin>>str1;
            cout << "Ingrese segundo valor: ";
            cin>>str2;
            chain(str1, str2);
            cin.ignore(999,'\n');
            break;
        case 'f':
            cout << "Literal: " << console_print() << endl;
            break;
        case 'g':
            cout << "Ingrese la primera oracion: ";
            cin>>str1;
            cout << "Ingrese la segunda oracion: ";
            cin>>str2;
            if(compare_string(str1, str2))
                cout << "El resultado es: True" << endl;
            else
                cout << "El resultado es: False" << endl;
            cin.ignore(999,'\n');
            break;
        case 'h':
            sub_opt();
            break;
        case 'i':
            cout << "Ingrese la primera oracion: ";
            cin >> str1;
            cout << "Ingrese la segunda oracion: ";
            cin >> str2;
            SHOW(str1);
            SHOW(str2);
            my_swap(str1, str2);
            SHOW(str1);
            SHOW(str2);
            cin.ignore(999,'\n');
            break;
        case 'q':
            cout << "\t\tNos vemos!!!" << endl;
            break;
        default:
            cout << "No es una opcion valida" << endl;
            break;
        }
    } while(option != 'q');
    return 0;
}
