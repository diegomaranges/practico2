#include "Operaciones_Matenaticas.h"

#define PI 3.1415

float cal_square(float num1)
{
    return num1 * num1;
}

float cal_addition(float num1, float num2)
{
    return num1 + num2;
}

float circle_area(float radius)
{
    return PI * radius * radius;
}

float maximal(float num1, float num2)
{
    if(num1 > num2)
        return num1;
    return num2;
}
