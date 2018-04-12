#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <string>

#include "WordsOpt.h"

using namespace std;

// directory to contain my file of words.
#define DIRECTION "C:\\Users\\Diego\\Documents\\practico2\\CommandLineApp\\CommandLineApp\\words.txt"


string WordsOpt::charToCode(char mychar, int *arr)
{
	int value = (int)mychar; // Number representation of mychar.
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
        returnV = arr[value]; // value of char in command number.
	}
	return to_string(returnV); // return returnV passed to string.
};

string WordsOpt::stringToChar(string word, size_t length, int *arr)
{
	// decompose string in char and call charToCode.
	string key = "";
	for (int i = 0; i != length; ++i)
	{
		key = key + charToCode(word[i], arr);
	}
	return key;
}

WordsOpt::WordsOpt()
{
	string key = ""; // Using by contain comman formed by pass line to command.
	string line; // Using by read line to line of file.
	ifstream myfile(DIRECTION); //Open file.
    int *arr = new int[27]; //array of int for value of char, this array contain 27 element that go
                            //position from 0 to 26.
    // initialization of array.
    arr[0] = 0; // this value never should access.
    for (int i = 1; i < 27; ++i) {
        if (i < 4) {
            arr[i] = 2; // 1 to 3 position represent a, b, c.
        }
        else if (i < 7) {
            arr[i] = 3; // 4 to 6 position represent a, b, c.
        }
        else if (i < 10) {
            arr[i] = 4; // 7 to 9 position represent a, b, c.
        }
        else if (i < 13) {
            arr[i] = 5; // 10 to 12 position represent a, b, c.
        }
        else if (i < 16) {
            arr[i] = 6; // 13 to 15 position represent a, b, c.
        }
        else if (i < 20) {
            arr[i] = 7; // 16 to 19 position represent a, b, c.
        }
        else if (i < 23) {
            arr[i] = 8; // 20 to 22 position represent a, b, c.
        }
        else {
            arr[i] = 9; // 23 to 26 position represent a, b, c.
        }
    }

	if (myfile.is_open())
	{
		// Go through all alements of file.
		while (getline(myfile, line))
		{
			// Pass to comand, add element to multimap and clean string key.
			key = stringToChar(line, line.size(), arr);
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
    delete arr;
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

