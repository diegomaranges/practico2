#include "stdafx.h"
#include "WordsOpt.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define DIRECTION "C:\\Users\\Diego\\Documents\\practico2\\CommandLineApp\\CommandLineApp\\words.txt"


string WordsOpt::charToCode(char mychar)
{
	int value = (int)mychar;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	int returnV = 0;

	if (value == 0x20)
	{
		return "0";
	}
	else if (0x21 <= value && value <= 0x40 || 0x5b <= value && value <= 0x60 || value == 0x7e)
	{
		return "1";
	}
	else 
	{
		if (value < 91)
		{
			value -= 0x40;
		}
		else
		{
			value -= 0x60;
		}
		E = value & 1;
		D = (value & 2) >> 1;
		C = (value & 4) >> 2;
		B = (value & 8) >> 3;
		A = (value & 16) >> 4;

		returnV = (!A & !B & C & !D) | (!A & !B & C & !E) | (!A & B & !C & D) | (!A & C & !D & !E)
			| (A & !B & D & E) | (A & !C & !D) | (A & !C & !E);

		returnV |= ((A & !B & !C) | (!A & !B & !D & E) | (!A & !B & D & !E) | (!A & B & C & E)
			| (!A & !B & C & !D) | (!A & C & D & !E) | (!B & !C & E)) << 1;

		returnV |= ((!A & C & D & E) | (!A & B) | A & !B & !C) << 2;

		returnV |= ((A & !B & C) | (A & B & !C & !D) | (A & B *!C & !E)) << 3;
	}
	return to_string(returnV);
};

string WordsOpt::stringToChar(string word, size_t length)
{
	string key = "";
	for (int i = 0; i != length; ++i)
	{
		key = key + charToCode(word[i]);
	}
	return key;
}

WordsOpt::WordsOpt()
{
	string key = "";
	string line;
	ifstream myfile(DIRECTION);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			key = stringToChar(line, line.size());
			mult.insert(pair<string, string>(key, line));
			key = "";
		}
		myfile.close();
		cout << "Elements in m: " << endl;
		for (multimap<string, string>::iterator it = mult.begin(); it != mult.end(); ++it)
			cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;
	}
	else
		cout << "Unable to open file";
};

void WordsOpt::serchComand(string command)
{
	cout << "estos son los elementos que coinciden con el comando" << endl;
	multimap<string, string>::iterator it, itlow, itup;
	itlow = mult.lower_bound(command);  // itlow points to b
	itup = mult.upper_bound(command);   // itup points to e (not d)
	for (it = itlow; it != itup; ++it) {
		std::cout << (*it).first << " => " << (*it).second << '\n';
	}
};


WordsOpt::~WordsOpt()
{

}
