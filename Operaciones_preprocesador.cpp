#include "Operaciones_preprocesador.h"

#define SHOW(var) std::cout << #var << ": " << (var) << std::endl

void chain(string str1, string str2)
{
    SHOW(str1);
    SHOW(str2);
}
