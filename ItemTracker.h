#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <map> 
// to use mapping pairsx

#include <iostream>
// above is for cin/cout

#include <fstream>
// for reading from file and writing to file

#include <vector>
#include <string>

using namespace std;


class ItemTracker {

    // move code into functions out of main.

private:

    // map with two items pairs, the word and its count
    map<string, int> itemMap;

    // writing to frequency.dat requires a vector<pair<string, int>
    vector<pair<string, int>> itemList;


public:
    void loadFromFile(string filename);
    void saveToFile(string filename);
    int getCount(string item);
    void printList();
    void printHistogram();

};

#endif