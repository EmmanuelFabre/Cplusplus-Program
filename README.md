# Cplusplus-Program



This program was built for the Corner Grocer to analyze daily purchase records, specifically the frequency each produce item was purchased.

The program reads a text file of items, counts their frequencies using a map, backs up the data to frequency.dat, and presents the user with a menu to search for a specific item's count, a full itemized frequency list, a histogram, or to exit the program.

I diligently observed OOP Principles by placing the ItemTracker class within its own files with a proper header/implementation split (ItemTracker.h, ItemTracker.cpp), keeping main.cpp lean. Main.cpp just declares an ItemTracker object and handles the menu loop.

The most challenging piece to write was pairing the I/O with the map-based counting logic. 

I could enhance my code by adding input validation to avoid the user entering characters that lead to fail states. Adding input validation would eliminate the possibility of infinite loops.

Finally, I made this program maintainable and redable through proper notes and documentation (including this README.md).
