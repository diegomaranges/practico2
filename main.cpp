#include "Operaciones_Binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_Matenaticas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"

#define SHOW(var) std::cout << #var << ": " << (var) << std::endl

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
//    char *suboption = '\0';
//    char *subopt = '\0';
    do
    {
        menu();
        option = options();
        switch (option) {
        case 'a':
            cin>>number1;
            cout << cal_square(number1) <<endl;
            cin.ignore(999,'\n');
            break;
        case 'b':
            cin>>number1;
            cin>>number2;
            cout << cal_addition(number1, number2) << endl;
            cin.ignore(999,'\n');
            break;
        case 'c':
            cin>>number1;
            cout << circle_area(number1) << endl;
            cin.ignore(999,'\n');
            break;
        case 'd':
            cin>>number1;
            cin>>number2;
            cout << maximal(number1, number2) << endl;
            cin.ignore(999,'\n');
            break;
        case 'e':
            cin>>str1;
            cin>>str2;
            chain(str1, str2);
            cin.ignore(999,'\n');
            break;
        case 'f':
            cout << console_print() << endl;
//            cin.ignore(999,'\n');
            break;
        case 'g':
            cin>>str1;
            cin>>str2;
            cout << compare_string(str1, str2) << endl;
            cin.ignore(999,'\n');
            break;
        case 'h':
            sub_opt();
            break;
        case 'i':
            cin >> str1;
            cin >> str2;
            SHOW(str1);
            SHOW(str2);
            my_swap(str1, str2);
            cout << str1 << "    " << str2 << endl;
            SHOW(str1);
            SHOW(str2);
            cin.ignore(999,'\n');
            break;
        case 'q':
            break;
        default:
            cout << "no es una opcion valida" << endl;
            break;
        }
    } while(option != 'q');
    return 0;
}
