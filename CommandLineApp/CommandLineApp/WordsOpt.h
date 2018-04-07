#pragma once

#include <map>

using namespace std;

class WordsOpt
{
private:
	multimap<string, string>mult;
	string charToCode(char);
protected:
	string stringToChar(string, size_t);
public:
	WordsOpt();
	void serchComand(string);
	~WordsOpt();
};

