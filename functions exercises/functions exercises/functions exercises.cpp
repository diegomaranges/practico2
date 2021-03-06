// functions exercises.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h> 

typedef float(*val)(char);

using std::cout;
using std::endl;

int array[8] = { 12, 15, 2354, 48, 156, 1, 2, 3 };
void f(int&) { cout << "A"; }
void f(const int&) { cout << "B"; }

__callback int funct(double);

__callback int mymax(const void * a, const void * b) {
    return *(int*)a - *(int*)b;
}

__callback float funct2(char) {
    return 1.0;
}

__callback val funct1(int) {
    return funct2;
}

void sort(int *a, int length) {
    qsort(a, length, sizeof(int), mymax);
}

int callfunct(int(*f)(double)) {
    int a;
    a = f(2.0);
    return a;
}

int main() {
    int i = 10;
    const int ci = 11;
    for (int i = 0; i < 8; ++i) { cout << array[i] << "   "; }
    cout << endl;
    sort(array, 8);
    for (int i = 0; i < 8; ++i) { cout << array[i] << "   "; }
    cout << endl;
    f(i);
    f(ci);
    cout << endl;
    cout << callfunct(funct) << endl;
    cout << funct1(2)('a') << endl;
    system("pause");
}

int funct(double) {
    return 10;
}
