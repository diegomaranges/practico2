#pragma once
namespace cpp_math {
    class Point
    {
    private:
        float *mX;
        float *mY;
        float *mZ;
    public:
        //Constructors.
        Point();
        Point(float, float, float);
        Point(const Point *);
        Point operator=(const Point *);
        //Functions get.
        float getX();
        float getY();
        float getZ();
        //Functions set.
        void setX(float);
        void setY(float);
        void setZ(float);
        void setXY(float, float);
        void setYZ(float, float);
        void setXYZ(float, float, float);
        //Return new Point with addition of p and this.
        Point getAddition(const Point& p);
        //Return this Point with addition of p and this.
        const Point& add(const Point& p);
        //Return new Point with subtraction of p and this.
        Point getSubtract(const Point& p);
        //Return this Point with subtraction of p and this.
        const Point& subtract(const Point& p);
        //calculate distance from this Point to p Point.
        float distance(const Point& p);
        //Return true if they are a equal points or false on the contrary.
        bool ifEqualPoint(const Point&);
        //destructor.
        ~Point();
    };
}
