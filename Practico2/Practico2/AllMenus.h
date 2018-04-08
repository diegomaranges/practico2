#pragma once
#include<iostream>
//This header contain multiple definitions of options by users.
//It header can be called by one file cpp because otherwise will give error
//since will have multiple definitions by each functions.

__callback void OptMath() {
	std::cout << "***************************************************" << std::endl;
	std::cout << "* Selecciona una opcion y presiona enter:         *" << std::endl;
	std::cout << "* a - El cuadrado de un numero                    *" << std::endl;
	std::cout << "* b - La suma de dos numeros                      *" << std::endl;
	std::cout << "* c - El area de un circulo                       *" << std::endl;
	std::cout << "* d - El maximo de dos numeros                    *" << std::endl;
	std::cout << "***************************************************" << std::endl;
	std::cout << "Opcion: ";
}

__callback void Optpreproces() {
	std::cout << "***************************************************" << std::endl;
	std::cout << "* a - Concatenacion de nombre de variables        *" << std::endl;
	std::cout << "* b - Imprimir por pantalla un texto              *" << std::endl;
	std::cout << "***************************************************" << std::endl;
	std::cout << "Opcion: ";
}

__callback void OptStr() {
	std::cout << "***************************************************" << std::endl;
	std::cout << "* a - Camparacion de cadena                       *" << std::endl;
	std::cout << "***************************************************" << std::endl;
	std::cout << "Opcion: ";
}

__callback void OptBin() {
	std::cout << "***************************************************" << std::endl;
	std::cout << "* Selecciona una opcion y presiona enter:         *" << std::endl;
	std::cout << "* a - AND binario                                 *" << std::endl;
	std::cout << "* b - OR binario                                  *" << std::endl;
	std::cout << "* c - Desplazamiento de 2 bits a la izquierda     *" << std::endl;
	std::cout << "* d - Desplazamiento de 2 bits a la derecha       *" << std::endl;
	std::cout << "***************************************************" << std::endl;
	std::cout << "Opcion: ";
}


__callback void OptLgl() {
	std::cout << "***************************************************" << std::endl;
	std::cout << "* a - intercambio de variables                    *" << std::endl;
	std::cout << "***************************************************" << std::endl;
	std::cout << "Opcion: ";
}
