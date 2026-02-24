#include <iostream>
// above is for cin/cout

#include "ItemTracker.h"

using namespace std;


int main() {

    ItemTracker tracker;
    string searchWord; // initialize var for input word user will enter

     // initialize menu choice variable (higher up in main to use in the while (menuChoice != 4) {}
    int menuChoice = 0;

    // initialise output file var outFS to create/open/write to files
    ofstream outFS;



    // Try to open the file
    cout << "Opening input file list" << endl;
    tracker.loadFromFile("CS210_Project_Three_Input_File.txt");

    // save data to frequency.dat
    cout << "Saving to frequency.dat" << endl;
    tracker.saveToFile("frequency.dat");



    // encase in while ! option 4/quit 
    while (menuChoice != 4) {

    

        cout << "***********************************************" << endl;
        cout << "To know an Item's count, input '1'" << endl;
        cout << "For a full itemized list, input '2'" << endl;
        cout << "For an itemized Histogram list, input '3' "<< endl;
        cout << "To exit the program, input '4'" << endl;
        cout << "***********************************************" << endl;
        cout << "After, input the item you are searching for" << endl;

        cin >> menuChoice;


        //if/else statement to toggle through choices

        if (menuChoice == 1) { 
            cout << "Enter an item to search for" << endl;
            cin >> searchWord;
            cout << searchWord << " count: " << tracker.getCount(searchWord) << endl;
                    // use getCount() function

        }

        if (menuChoice == 2) { 
            cout << "Here is your full itemized list" << endl;

            // use printList()
            tracker.printList();
            
            }

        
        if (menuChoice == 3) { 
            cout << "Here is your itemized histogram." << endl;

            // use printHistogram()
            tracker.printHistogram();
        }

        if (menuChoice == 4) { 

        cout << "goodbye." << endl;
        return 0;
        }
        } //while menuChoice != 4 paren

}
    



// remember to save and recompile after making changes and before running program
// g++ main.cpp -o main