// functions exercises.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h> 
using std::cout;
using std::endl;

void f(int&) { cout << "A"; }
void f(const int&) { cout << "B"; }

int main() {
    int i = 10;
    const int ci = 11;
    f(i);
    f(ci);
    system("pause");
}
