#ifndef OPERACIONES_PREPROCESADOR_H
#define OPERACIONES_PREPROCESADOR_H

#include <iostream>
#include <random>
#include <chrono>

#define SHOW(var) std::cout << #var << ": " << (var) << std::endl
#define concatenate(var1, var2) std::cout << #var1 << #var2 << std::endl

using namespace std;

string console_print();
//Print from console a text

void chain(string str1, string str2);
//Concatenate two name of variable

#endif // OPERACIONES_PREPROCESADOR_H
