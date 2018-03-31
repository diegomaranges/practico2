#ifndef OPERACIONES_LOGICAS_H
#define OPERACIONES_LOGICAS_H

#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>

void my_swap(T &n1, T &n2);
// swaps n1 and n2
extern template void my_swap<string>(string &n1 , string &n2);

#endif // OPERACIONES_LOGICAS_H
