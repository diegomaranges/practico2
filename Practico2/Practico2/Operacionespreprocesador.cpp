#include "stdafx.h"
#include "Operacionespreprocesador.h"

#include <random>
#include <chrono>

#define concatenate(var1, var2) std::cout << #var1 << #var2 << std::endl

#define result1 "La felicidad no se consigue sentandose a esperarla."
#define result2 "Un hombre que nunca cometio errores, nunca hizo nada."
#define result3 "No es mas limpio el que mas limpia, sino el que menos ensucia."
#define result4 "Trata de dejar a este mundo en mejores condiciones de como lo encontraste."
#define result5 "Una sonrisa es la llave secreta que abre muchos corazones."

void console_print()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	//random_device rd; obtain a random number from hardware
	mt19937 eng(seed); // seed the generator   {eng(rd())}
	uniform_int_distribution<> distr(0, 4); // define the range

	switch (distr(eng)) {
	case 0:
		cout << result1 << endl;
		break;
	case 1:
		cout << result2 << endl;
		break;
	case 2:
		cout << result3 << endl;
		break;
	case 3:
		cout << result4 << endl;
		break;
	default:
		cout << result5 << endl;
		break;
	}
}

void chain(string str1, string str2)
{
	concatenate(str1, str2);
}

