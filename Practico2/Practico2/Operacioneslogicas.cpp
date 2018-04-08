#include "stdafx.h"
#include "Operacioneslogicas.h"

#include <string>

// swap value of two pointers to strings
void my_swap(std::string *n1, std::string *n2)
{
	(*n1).swap(*n2); // Operation of string class.
}
