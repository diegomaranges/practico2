#include "stdafx.h"
#include "ChargeFile.h"

#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <assert.h>

//direction of input file.
#define DirectionIn "C:\\Users\\Diego\\Documents\\practico2\\DelimitadorDePista\\DelimitadorDePista\\PistaIn.txt"
//direction of output file.
#define DirectionOut "C:\\Users\\Diego\\Documents\\practico2\\DelimitadorDePista\\DelimitadorDePista\\PistaOut.txt"

using std::stringstream;
using std::ifstream;
using std::ofstream;
using std::getline;
using std::cout;
using std::endl;
using std::cin;

void ChargeFile::obtainLength(string line) {
    string::size_type decimal_type;
    length = std::stoi(line, &decimal_type); // stoi = string to int.
    assert(length > 1 && length < 10001);
    streets = new int[length]; // Reserve memory from array.
}

void ChargeFile::split(const std::string &txt, char ch)
{
    int position = 0; // Position of array.
    int check = 0; // check is the valid value.
    size_t pos = txt.find(ch);
    size_t initialPos = 0;

    // Decompose statement and charge array.
    while (pos != std::string::npos) {
        check = stoi(txt.substr(initialPos, pos - initialPos));
        assert(0 < check && check < 100001);
        streets[position] = check;
        initialPos = pos + 1;

        pos = txt.find(ch, initialPos);
        ++position;
    }

    // Add the last one.
    streets[position] = stoi(txt.substr(initialPos, std::min(pos, txt.size()) - initialPos + 1));
}

void ChargeFile::chargeArray(string line) {

    split(line, ' ');
}

ChargeFile::ChargeFile()
{
    string line; // Line of file.
    ifstream myfile(DirectionIn); //Open file.
    if (myfile.is_open()) {
        getline(myfile, line); //First line of file.
        obtainLength(line);
        getline(myfile, line); //Second line of file.
        chargeArray(line);
    }
    myfile.close(); // Close file.
}

int ChargeFile::compareTravel(int start) {
    int next = start; // Height of actual street
    int arrive = start - 1; // Height of left street

    // If exist left street and the height is lower to actual street, muve the next block.
    while (arrive >= 0 && streets[arrive] < streets[next]) {
        next = arrive;
        --arrive;
    }
    ++arrive;
    startToArrivel = start - arrive; // Save distance.

    //redefine.
    next = start; // Height of actual street
    arrive = start + 1; // Height of right street

    // If exist right street and the height is lower to actual street, muve the next block.
    while (arrive < length && streets[arrive] < streets[next]) {
        next = arrive;
        ++arrive;
    }
    --arrive;
    startToArriver = arrive - start; // Save distance.

    return std::max(startToArrivel, startToArriver); // Return max distance.
}

void ChargeFile::push(int start) {
    if (startToArriver < startToArrivel) { // If  left travel is most long add this travel.
        Travels.push_back(start + 1);
        Travels.push_back(start - startToArrivel + 1);
        ++numberOfTravels;
    }
    else if (startToArriver > startToArrivel) { // If right travel is most long add this travel.
        Travels.push_back(start + 1);
        Travels.push_back(start + startToArriver + 1);
        ++numberOfTravels;
    }
    else { // if They are equal then add the two travels.
        Travels.push_back(start + 1);
        Travels.push_back(start - startToArrivel + 1);
        ++numberOfTravels;
        Travels.push_back(start + 1);
        Travels.push_back(start + startToArriver + 1);
        ++numberOfTravels;
    }
}

void ChargeFile::addelements(int actTravel, int start) {
    if (lengthOfTravels < actTravel) { // Clean data if actual travel is most long.
        lengthOfTravels = actTravel;
        numberOfTravels = 0;
        Travels.clear();
        push(start);
    }
    else if (lengthOfTravels == actTravel) { // Add element if equal long.
        push(start);
    }
    // else not have effect.
}

void ChargeFile::getravel()
{
    // Clean variables that have using.
    lengthOfTravels = 0;
    numberOfTravels = 0;
    startToArrivel = 0;
    startToArriver = 0;
    // Travel array and analice all possibles roads with different starts.
    for (int start = 0; start < length; ++start) {
        addelements(compareTravel(start), start);
    }
}

void ChargeFile::outTravels()
{
    //open file and clean or creater if not exist.
    ofstream file(DirectionOut);
    file.clear();

    //write file.
    file << ' ' << numberOfTravels << ' ' << lengthOfTravels << endl;
    for (list<int>::iterator it = Travels.begin(); it != Travels.end(); ++it) {
        file << ' ' << *it;
        ++it;
        file << ' ' << *it << endl;
    }

    //close file.
    file.close();
}

ChargeFile::~ChargeFile()
{
    //delete array.
    delete[] streets;
    streets = nullptr;
}
