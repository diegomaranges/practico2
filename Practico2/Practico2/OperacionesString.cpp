#include "stdafx.h"
#include "OperacionesString.h"

#include <string.h>

bool compare_string(string string1, string string2)
{
	return !(string1.compare(string2));
    // Function compare return 0 if a equal numbers
	// Negative number if Either the value of the first 
    //character that does not match is lower in the compared string,
    //or all compared characters match but the compared string is shorter.
    // Positive number if Either the value of the first character that does
    //not match is greater in the compared string, or all compared characters
    //match but the compared string is longer.
}
