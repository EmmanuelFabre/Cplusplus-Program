#include "ItemTracker.h"


void ItemTracker::loadFromFile(string filename) {
    ifstream inFS;
    string lineItem;

    inFS.open(filename);

    // error handling
    if (!inFS.is_open()) {
        cout << "Could not open file." << endl;
        return;   // indicates error
    }

    while (getline(inFS, lineItem)) {
        // strip \r for line ends 
        if (!lineItem.empty() && lineItem.back() == '\r') {
            lineItem.pop_back();
        }
        if (!lineItem.empty()) {
            // use mapping pairs
            // increment count if word exists mapping
            itemMap[lineItem]++;
        
        }
        

    }

    if (!inFS.eof()) {
        cout << "Input failure before reaching end of file." << endl;
    }

    cout << "Closing file. " << endl;

    // done with reading in file, so close it
    inFS.close();    



// here 
for (auto item : itemMap) {

    // Use push_back() to add each item to itemList to insert into frequency.dat file after
    itemList.push_back(make_pair(item.first, item.second));
        
        }

}




// ***********************************************************


void ItemTracker::saveToFile(string filename) {
    ofstream outFS;
    outFS.open(filename);

    if (!outFS.is_open()) {
        cout << "Could not be create" << filename << endl;
        return;
    }

    for (auto item: itemList) {
        outFS << item.first << " " << item.second << endl;
    }

    outFS.close();
}


// ************************************************


int ItemTracker::getCount(string item) {
    return itemMap[item];
}


// *********************************************

void ItemTracker::printList() {
    for (auto item: itemMap) {
        cout << item.first << " " << item.second << endl;
    }
}

// *********************************************

void ItemTracker::printHistogram() {
    for (auto item: itemMap) {
        cout << item.first;
        for (int i = 0; i <item.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
}







