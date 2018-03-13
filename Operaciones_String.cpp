#include "Operaciones_String.h"

string console_print()
{
    string final_str = "";
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //random_device rd; obtain a random number from hardware
    mt19937 eng(seed); // seed the generator   {eng(rd())}
    uniform_int_distribution<> distr(0, 4); // define the range

    switch (distr(eng)) {
    case 0:
        final_str = "La felicidad no se consigue sentandose a esperarla.";
        break;
    case 1:
        final_str = "Un hombre que nunca cometio errores, nunca hizo nada.";
        break;
    case 2:
        final_str = "No es mas limpio el que mas limpia, sino el que menos ensucia.";
        break;
    case 3:
        final_str = "Trata de dejar a este mundo en mejores condiciones de como lo encontraste.";
        break;
    default:
        final_str = "Una sonrisa es la llave secreta que abre muchos corazones.";
        break;
    }
    return final_str;
}
//Imprimir por pantalla un texto

bool compare_string(string string1, string string2)
{
    if (string1.compare(string2) == 0)
        return true;
    return false;
}
//Camparacion de cadena
