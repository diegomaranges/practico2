#pragma once
#include<iostream>
//This header contain multiple definitions of options by users.
//It header can be called by one file cpp because otherwise will give error
//since will have multiple definitions by each functions.

__callback void OptArray() {
    std::cout << "***************************************************" << std::endl;
    std::cout << "* Selecciona una opcion y presiona enter:         *" << std::endl;
    std::cout << "* a - Actualizar valor                            *" << std::endl;
    std::cout << "* b - Mostrar array                               *" << std::endl;
    std::cout << "***************************************************" << std::endl;
    std::cout << "Opcion: ";
}

__callback void Optsizeof() {
    std::cout << "***************************************************" << std::endl;
    std::cout << "* a - Imprimir el valor maximo de las variables   *" << std::endl;
    std::cout << "* b - Imprimir el valor minimo de las variables   *" << std::endl;
    std::cout << "* c - Imprimir la magnitud de tipos de variables  *" << std::endl;
    std::cout << "* d - Imprimir a,b,c                              *" << std::endl;
    std::cout << "***************************************************" << std::endl;
    std::cout << "Opcion: ";
}
