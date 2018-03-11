#include "Operaciones_Matenaticas.h"

#define PI 3.14159

float cal_square(float num1)
{
    return num1 * num1;
}
//El cuadrado de un numer

float cal_addition(float num1, float num2)
{
    return num1 + num2;
}
//La suma de dos numeros

float circle_area(float radius)
{
    return PI * radius * radius;
}
//El area de un circulo

float maximal(float num1, float num2)
{
    if(num1 > num2)
        return num1;
    return num2;
}
//El maximo de dos numeros
