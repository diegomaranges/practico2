// ObjectOriented.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Point.h"

#include <iostream>

using namespace cpp_math;
using std::cout;
using std::endl;


void mp(const Point mpoint) {
}

int main()
{
    // create two element of class Point and calculate distance.
    Point mpoint(1.0f, 3.1f, 1.1f);
    Point mpoint2(2.1, 1.2, 2.2);
    cout << mpoint.distance(mpoint2) << endl;

    //create alement using copy constructor.
    Point other(&mpoint);
    cout << other.getX() << " " << other.getY() << " " << other.getZ() << endl;
    cout << mpoint.getX() << " " << mpoint.getY() << " " << mpoint.getZ() << endl;

    //use equal operator.
    other = &mpoint2;
    cout << other.getX() << " " << other.getY() << " " << other.getZ() << endl;
    cout << mpoint2.getX() << " " << mpoint2.getY() << " " << mpoint2.getZ() << endl;
    system("pause");
    return 0;
}

