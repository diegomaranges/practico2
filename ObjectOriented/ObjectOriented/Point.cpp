#include "stdafx.h"
#include "Point.h"

namespace cpp_math {

    Point::Point() : mX(new float(0)), mY(new float(0)), mZ(new float(0))
    {

    }

    Point::Point(float x, float y, float z) : mX(new float(x)), mY(new float(y)),
        mZ(new float(z))
    {

    }

    Point::Point(const Point *other) : mX(new float(*other->mX)),
        mY(new float(*other->mY)), mZ(new float(*other->mZ))
    {

    }

    Point Point::operator=(const Point *other)
    {
        *mX = *other->mX;
        *mY = *other->mY;
        *mZ = *other->mZ;
        return this;
    }

    float Point::getX()
    {
        return *mX;
    }

    float Point::getY()
    {
        return *mY;
    }

    float Point::getZ()
    {
        return *mZ;
    }

    void Point::setX(float x)
    {
        *mX = x;
    }

    void Point::setY(float y)
    {
        *mY = y;
    }

    void Point::setZ(float z)
    {
        *mZ = z;
    }

    void Point::setXY(float x, float y)
    {
        *mX = x;
        *mY = y;
    }

    void Point::setYZ(float y, float z)
    {
        *mY = y;
        *mZ = z;
    }

    void Point::setXYZ(float x, float y, float z)
    {
        *mX = x;
        *mY = y;
        *mZ = z;
    }

    Point Point::getAddition(const Point & p)
    {
        return Point(*mX + *p.mX, *mY + *p.mY, *mZ + *p.mZ);
    }

    const Point & Point::add(const Point & p)
    {
        *mX += *p.mX;
        *mY += *p.mY;
        *mZ += *p.mZ;
        return this;
    }

    Point Point::getSubtract(const Point & p)
    {
        return Point(*mX - *p.mX, *mY - *p.mY, *mZ - *p.mZ);
    }

    const Point & Point::subtract(const Point & p)
    {
        *mX -= *p.mX;
        *mY -= *p.mY;
        *mZ -= *p.mZ;
        return this;
    }

    float Point::distance(const Point & p)
    {
        //square root of (x1 - x2) ^ 2 + (y1 - y2) ^ 2 + (z1 + z2) ^ 2
        float calculate = 0.0f;
        calculate = (*mX - *p.mX)*(*mX - *p.mX);
        calculate += (*mY - *p.mY)*(*mY - *p.mY);
        calculate += (*mZ - *p.mZ)*(*mZ - *p.mZ);
        return calculate / calculate;
    }


    Point::~Point()
    {
        delete mX;
        mX = nullptr;
        delete mY;
        mY = nullptr;
        delete mZ;
        mZ = nullptr;
    }
}
