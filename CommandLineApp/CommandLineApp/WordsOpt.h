#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class WordsOpt
{
public:
	multimap<const int, string>mult;
	WordsOpt();
	void serchComand(int);
	~WordsOpt();
};

