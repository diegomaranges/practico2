#include "stdafx.h"
#include "OperacionesString.h"

#include <string.h>

bool compare_string(string string1, string string2)
{
	return !(string1.compare(string2));
}
