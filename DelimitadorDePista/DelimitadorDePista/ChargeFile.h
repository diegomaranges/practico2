#pragma once
#include <iostream>
#include <list>

using std::string;
using std::list;


class ChargeFile
{
private:
    int length; // length of array streets.

    int numberOfTravels; // Number of travels with major long.

    int lengthOfTravels; // Major length of all possible travels.

    int startToArrivel;// Distance from start travel to arrive from left

    int startToArriver;// Distance from start travel to arrive from right

    list<int> Travels; // List of travels. The element i represent start of travel and i + 1 the distance of travel.
                       // { para todo i : 0 <= i < (length of list / 2) : 2 * i }

    int *streets; // Height of streets.

    void obtainLength(string);
    //Read first line of input file and charge length of array.

    void split(const string &txt, char ch);
    //Split to string every time than find to ch character and charge array of streets.

    void chargeArray(string);
    //Read second line of input file and charge array.

    void push(int start);
    //Push elements to travels list.

    void addelements(int, int);
    //Compare last long travel (llt) with actual long traver (alt).
    //If alt is higher than llt then update dates.
    //If alt is equal to right then add element from alt.

    int compareTravel(int);
    //Receives the array position, analize possible travels and return the long distance of travels.
public:
    ChargeFile();
    //Constructor (here charge input file).

    void getravel();
    //Run algorithm and obtain all most long travels.

    void outTravels();
    //Export result to output file.

    ~ChargeFile();
    //Destructor.
};

