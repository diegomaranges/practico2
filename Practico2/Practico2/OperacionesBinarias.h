#pragma once
//Operaciones binarias

#include <iostream>

using namespace std;

int and_bin(int one, int two);
//take two numbers.
//retun result for do one.two (. = binary operation)

int or_bin(int one, int two);
//take two numbers.
//retun result for do one+two (+ = binary operation)

int sleft(int one);
//take a numbers.
//retun result for do one shift left two bits.

int sright(int one);
//take a numbers.
//retun result for do one shift rigth two bits.

void SwitchOB(char);
//represents switch for cases
// User can determine if perform bainary and else perform bainary or else perform bainary shift right
//and finally else shift left
