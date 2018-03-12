#include "Operaciones_String.h"

string console_print();
//Imprimir por pantalla un texto

bool compare_string(string string1, string string2)
{
    if (string1.compare(string2) == 0)
        return true;
    return false;
}
//Camparacion de cadena
