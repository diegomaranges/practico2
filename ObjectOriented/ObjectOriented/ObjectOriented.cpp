// ObjectOriented.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Point.h"

#include <iostream>

using namespace cpp_math;
using std::cout;
using std::endl;


int main()
{
    Point mp(1.0f, 3.1f, 1.1f);
    cout << mp.getX() << " " << mp.getY() << " " << mp.getZ() << endl;
    system("pause");
    return 0;
}

