#include "Operaciones_Binarias.h"

lint and_bin(lint one, lint two)
{
    return one & two;
}


lint or_bin(lint one, lint two)
{
    return one | two;
}


lint sleft(lint one)
{
    return one<<2;
}


lint sright(lint one)
{
    return one>>2;
}
