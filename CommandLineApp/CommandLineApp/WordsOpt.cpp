#include "stdafx.h"
#include "WordsOpt.h"

/*#include <iostream>
#include <fstream>
#include <string>
#include <map>*/

using namespace std;

#define DIRECTION "C:\\Users\\Diego\\Documents\\practico2\\CommandLineApp\\CommandLineApp\\words.txt"


string passToCode(char mychar)
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

WordsOpt::WordsOpt()
{
	string key = "";
	string line;
	ifstream myfile(DIRECTION);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			for (int i = 0; i != line.size(); ++i)
			{
				key = key + passToCode(line[i]);
			}
			key += "\0";
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
	for (multimap<string, string>::iterator it = mult.begin(); it != mult.end(); ++it)
	{
		if (!(*it).first.compare(command))
		{
			cout << "{ " << (*it).second << " }" << " ; ";
		}
	}
	cout << "\n";
};


WordsOpt::~WordsOpt()
{

}
