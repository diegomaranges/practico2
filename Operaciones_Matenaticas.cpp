#include "Operaciones_Matenaticas.h"

#define PI 3.1415

#define ADD(a, b) a + b
#define SQu(a) a * a
#define MAX(a, b) a > b ? a : b

double cal_square(double num1)
{
    return SQu(num1);
}

double cal_addition(double num1, double num2)
{
    return ADD(num1, num2);
}

double circle_area(double radius)
{
    return PI * SQu(radius);
}

double maximal(double num1, double num2)
{
    return MAX(num1, num2);
}
