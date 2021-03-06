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
    // create two element of class Point.
    Point mpoint(1.0f, 3.1f, 1.1f); //whit parameters.
    Point mpoint2;//without parameters.
    cout << "(constructor with parameters)mpoint = " << mpoint.getX() << ", " <<
        mpoint.getY() << ", " << mpoint.getZ() << endl;
    cout << "(constructor without parameters)mpoint2 = " << mpoint2.getX() <<
        ", " << mpoint2.getY() << ", " << mpoint2.getZ() << endl;

    //set elements x, y and z to mpoint2.
    mpoint2.setX(2.1f);
    mpoint2.setY(1.2f);
    mpoint2.setZ(2.2f);
    cout << "(using setX, setY and setZ)mpoint2 = " << mpoint2.getX() <<
        ", " << mpoint2.getY() << ", " << mpoint2.getZ() << endl;
    cout << "distance between mpoint to mpoint2 = " << mpoint.distance(mpoint2) << endl;

    //create alement using copy constructor.
    Point other(&mpoint);
    cout << "(copy constructor using point mpoint)other = " << other.getX() <<
        ", " << other.getY() << ", " << other.getZ() << endl;
    cout << "if equal to mpoint :" << other.ifEqualPoint(mpoint) << endl;
    cout << "if equal to mpoint2 :" << other.ifEqualPoint(mpoint2) << endl;

    //use equal operator.
    other = &mpoint2;
    cout << "(equal operator using mpoint2)other = " << other.getX() <<
        ", " << other.getY() << ", " << other.getZ() << endl;
    cout << "if equal to mpoint :" << other.ifEqualPoint(mpoint) << endl;
    cout << "if equal to mpoint2 :" << other.ifEqualPoint(mpoint2) << endl;

    //set elements X and Y to mpoint
    mpoint.setXY(0.12f, 1.11f);
    cout << "(using setXY)mpoint = " << mpoint.getX() << " " << mpoint.getY() <<
        " " << mpoint.getZ() << endl;

    //set elements Y and Z to mpoint
    mpoint.setYZ(1.12f, 2.14f);
    cout << "(using setYZ)mpoint = " << mpoint.getX() << " " << mpoint.getY() <<
        " " << mpoint.getZ() << endl;

    //set elements X, Y and Z to mpoint
    mpoint2.setXYZ(0.111f, 0.123f, 0.456f);
    cout << "(using setXYZ)mpoint2 = " << mpoint2.getX() << " " << mpoint2.getY() <<
        " " << mpoint2.getZ() << endl;

    //obtain addition from mpoint and mpoint2
    Point var1 = mpoint2.getAddition(mpoint);
    cout << "(addition operation between mpoint and mpoint2)var1 = " << var1.getX() <<
        ", " << var1.getY() << ", " << var1.getZ() << endl;

    //obtain subtract from mpoint and mpoint2
    Point var2 = mpoint2.getSubtract(mpoint);
    cout << "(subtract operation between mpoint and mpoint2)var2 = " << var2.getX() <<
        ", " << var2.getY() << ", " << var2.getZ() << endl;


    //obtain subtract from mpoint and mpoint2 and asigned valut to mpoint2
    mpoint2 = &mpoint2.subtract(mpoint);
    cout << "(subtract operation with mpoint)mpoint2 = " << mpoint2.getX() <<
        " " << mpoint2.getY() << " " << mpoint2.getZ() << endl;


    //obtain addition from mpoint and mpoint2 and asigned valut to mpoint2
    mpoint.add(mpoint2);
    cout << "(add operation with mpoint2)mpoint = " << mpoint.getX() << ", " <<
        mpoint.getY() << ", " << mpoint.getZ() << endl;

    system("pause");
    return 0;
}

