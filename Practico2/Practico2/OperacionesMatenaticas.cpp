#include "stdafx.h"
#include "OperacionesMatenaticas.h"
#include "MenuOpt.h"

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

void switchOM(char option)
{
	double number1 = 0;
	double number2 = 0;
	MenuOpt menu;
	switch (option)
	{
	case 'a':
		number1 = menu.optionsFun("ingrese el numero: ");
		std::cout << "a ^ 2 = " << cal_square(number1) << std::endl;
		break;
	case 'b':
		number1 = menu.optionsFun("ingrese el primer numero: ");
		number2 = menu.optionsFun("ingrese el segundo numero: ");
		std::cout << "a + b = " << cal_addition(number1, number2) << std::endl;
		break;
	case 'c':
		number1 = menu.optionsFun("ingrese el radio: ");
		std::cout << "pi * radius ^ 2 = " << circle_area(number1) << std::endl;
		break;
	case 'd':
		number1 = menu.optionsFun("ingrese el primer numero: ");
		number2 = menu.optionsFun("ingrese el segundo numero: ");
		std::cout << "max(a, b) = " << maximal(number1, number2) << std::endl;
		break;
	default:
		std::cout << "no es una de las opciones" << std::endl;
		break;
	}
}
