#pragma once
#include <iostream>
#include <random>
#include <chrono>

using namespace std;

#define SHOW(var) std::cout << #var << ": " << (var) << std::endl

string console_print();
//Print from console a text

void chain(string str1, string str2);
//Concatenate two name of variable


