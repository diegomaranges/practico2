#pragma once

#include <map>

using namespace std;

class WordsOpt
{
private:
	multimap<string, string>mult; //Multimap
	string charToCode(char, int *); //Pass one char to value from 0 to 9
protected:
	string stringToChar(string, size_t, int *); // Function that decompose string in char and call charToCode.
public:
	WordsOpt(); // Constructor (load file).
	void serchComand(string); // Go through multimap and return for console all words with string equal to command key.
	~WordsOpt(); // Destructor.
};
