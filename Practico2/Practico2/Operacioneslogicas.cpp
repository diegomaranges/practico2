#include "stdafx.h"
#include "Operacioneslogicas.h"

#include <string>
#define show(var1, var2 ) std::cout << #var1 << ": " << (var1) << " ; " << #var2 << ": " << (var2) << std::endl

void my_swap(std::string *n1, std::string *n2)
{
	(*n1).swap(*n2);
}
