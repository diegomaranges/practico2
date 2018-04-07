#pragma once
#include<iostream>

using namespace std;

__callback void OptArray() {
	cout << "***************************************************" << endl;
	cout << "* Selecciona una opcion y presiona enter:         *" << endl;
	cout << "* a - Actualizar valor                            *" << endl;
	cout << "* b - Mostrar array                               *" << endl;
	cout << "***************************************************" << endl;
	cout << "Opcion: ";
}

__callback void Optsizeof() {
	cout << "***************************************************" << endl;
	cout << "* a - Imprimir el valor maximo de las variables   *" << endl;
	cout << "* b - Imprimir el valor minimo de las variables   *" << endl;
	cout << "* c - Imprimir la magnitud de tipos de variables  *" << endl;
	cout << "* d - Imprimir a,b,c                              *" << endl;
	cout << "***************************************************" << endl;
	cout << "Opcion: ";
}
