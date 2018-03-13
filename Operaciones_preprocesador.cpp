#include "Operaciones_preprocesador.h"

#define result1 "La felicidad no se consigue sentandose a esperarla."
#define result2 "Un hombre que nunca cometio errores, nunca hizo nada."
#define result3 "No es mas limpio el que mas limpia, sino el que menos ensucia."
#define result4 "Trata de dejar a este mundo en mejores condiciones de como lo encontraste."
#define result5 "Una sonrisa es la llave secreta que abre muchos corazones."

string console_print()
{
    string final_str = "";
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //random_device rd; obtain a random number from hardware
    mt19937 eng(seed); // seed the generator   {eng(rd())}
    uniform_int_distribution<> distr(0, 4); // define the range

    switch (distr(eng)) {
    case 0:
        final_str = result1;
        break;
    case 1:
        final_str = result2;
        break;
    case 2:
        final_str = result3;
        break;
    case 3:
        final_str = result4;
        break;
    default:
        final_str = result5;
        break;
    }
    return final_str;
}

void chain(string str1, string str2)
{
    SHOW(str1);
    SHOW(str2);
    concatenate(str1, str2);
}
