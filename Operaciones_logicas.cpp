#include "Operaciones_logicas.h"

template <typename T>
void my_swap(T &n1, T &n2)
{
    swap(n1, n2);
}

template void my_swap<string>(string &n1 , string &n2);
