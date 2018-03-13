#include "Operaciones_logicas.h"

#define SHOW(var) std::cout << #var << ": " << (var) << std::endl

template <typename T>
void my_swap(T &n1, T &n2) // Note the &
{
    SHOW(n1);
    SHOW(n2);
    swap(n1, n2);
    SHOW(n1);
    SHOW(n2);
}

template void my_swap<string>(string &n1 , string &n2);
