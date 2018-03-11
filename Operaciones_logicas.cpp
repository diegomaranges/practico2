#include "Operaciones_logicas.h"
#include <string.h>

template <typename T>
void myc_swap(T n1, T n2) // Note the &
{
     T temp=n1; // Note use the type T
     n1=n2;
     n2=temp;
}
