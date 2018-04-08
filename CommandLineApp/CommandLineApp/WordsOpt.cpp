#include "stdafx.h"
#include "WordsOpt.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// directory to contain my file of words.
#define DIRECTION "C:\\Users\\Diego\\Documents\\practico2\\CommandLineApp\\CommandLineApp\\words.txt"


string WordsOpt::charToCode(char mychar)
{
	int value = (int)mychar; // Number representation of mychar.
	int A = 0; // using by represent fifth bit of value.
	int B = 0; // using by represent fourth bit of value.
	int C = 0; // using by represent third bit of value.
	int D = 0; // using by represent second bit of value.
	int E = 0; // using by represent first bit of value.
	int returnV = 0; // Number representation of mychar from number keyboard.

	if (value == 0x20) // mychar = space.
	{
		return "0";
	}
    // mychar = number or punctuation sign.
	else if (0x21 <= value && value <= 0x40 || 0x5b <= value && value <= 0x60 || value == 0x7e)
	{
		return "1";
	}
	else 
	{
		if (value < 91) // if mychar its majuscule char.
		{
			value -= 0x40;
		}
		else // if mychar its minuscule char.
		{
			value -= 0x60;
		}
        // value its from 1 to 26 therefore I alone need 5 bits in my true table.
		E = value & 1;
		D = (value & 2) >> 1;
		C = (value & 4) >> 2;
		B = (value & 8) >> 3;
		A = (value & 16) >> 4;

        //with only need 4 bits for represent one number from 0 to 9, create true table and run McCluskey algorithm.
		returnV = (!A & !B & C & !D) | (!A & !B & C & !E) | (!A & B & !C & D) | (!A & C & !D & !E)
			| (A & !B & D & E) | (A & !C & !D) | (A & !C & !E); // First bit

		returnV |= ((A & !B & !C) | (!A & !B & !D & E) | (!A & !B & D & !E) | (!A & B & C & E)
			| (!A & !B & C & !D) | (!A & C & D & !E) | (!B & !C & E)) << 1; // Second bit.

		returnV |= ((!A & C & D & E) | (!A & B) | A & !B & !C) << 2; // Third bit.

		returnV |= ((A & !B & C) | (A & B & !C & !D) | (A & B *!C & !E)) << 3; // Tourth bit.
	}
	return to_string(returnV); // return returnV passed to string.
};

string WordsOpt::stringToChar(string word, size_t length)
{
    // decompose string in char and call charToCode.
	string key = "";
	for (int i = 0; i != length; ++i)
	{
		key = key + charToCode(word[i]);
	}
	return key;
}

WordsOpt::WordsOpt()
{
	string key = ""; // Using by contain comman formed by pass line to command.
	string line; // Using by read line to line of file.
	ifstream myfile(DIRECTION); //Open file.
	if (myfile.is_open())
	{
        // Go through all alements of file.
		while (getline(myfile, line))
		{
            // Pass to comand, add element to multimap and clean string key.
			key = stringToChar(line, line.size());
			mult.insert(pair<string, string>(key, line));
			key = "";
		}
		myfile.close();
		cout << "Elements in m: " << endl;
        // Print all values of my multimap
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
    //serch all key with equal key as command.
	itlow = mult.lower_bound(command);  // example from http://www.cplusplus.com/reference/map/multimap/lower_bound/
	itup = mult.upper_bound(command);
	for (it = itlow; it != itup; ++it) {
		std::cout << (*it).first << " => " << (*it).second << '\n';
	}
};


WordsOpt::~WordsOpt()
{

}
