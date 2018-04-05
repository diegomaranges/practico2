#include "Operaciones_Binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_Matenaticas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_String.h"
#include "Print_Sizeof.h"
#include "Array_Stack.h"
#include "LinkedList.h"

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
    cout << "* j - Editar array de enteros                     *" << endl;
    cout << "* k - Imprimir valor de variables                 *" << endl;
    cout << "* l - Agregar elemento a la lista enlazada        *" << endl;
    cout << "* m - Imprimir lista enlazada                     *" << endl;
    cout << "* n - Vaciar lista enlazada                       *" << endl;
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
    int length = 5;
    int myarray[length] = { }; // if assing { 10, 20, 30 } initialize to three first elements and
                               // eny left out with 0.
    char option = 'q';
    double number1 = 0;
    double number2 = 0;
    string str1 = "";
    string str2 = "";
    LinkedList *list;
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
            if(compare_string(str1, str2)) {
                cout << "El resultado es: Son iguales!!" << endl;
            } else {
                cout << "El resultado es: Son distintas :(" << endl;
            }
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

        case 'j':
            Array_Stack(myarray, length);
            break;
        case 'k':
            Print_Sizeof();
            break;

        case 'l':
            cout << "Ingrese el elemento: ";
            cin>>number1;
            if (!list->AddElement(number1))
            {
                cout << "error al recibir el numero" << endl;
            }
            break;

        case 'm':
            list->PrintList();
            break;

        case 'n':
            list->~LinkedList();
            //list();
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
