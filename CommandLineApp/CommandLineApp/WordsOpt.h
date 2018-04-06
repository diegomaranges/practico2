#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class WordsOpt
{
private:
	multimap<string, string>mult;
public:
	WordsOpt();
	void serchComand(string);
	~WordsOpt();
};

