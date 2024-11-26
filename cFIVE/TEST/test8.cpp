/*
Program:
    This program counts the number of strings (words) in a file.
*/
#include <iostream>
#include <fstream>   // for file handling
#include <string>    // for handling strings

using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream file(filename);  // open file for reading
    if (!file) {              // check if file opens successfully
        cerr << "Could not open the file " << filename << endl;
        return 1;
    }

    int wordCount = 0;
    string word;
    
    // Read words from the file one at a time
    while (file >> word) {
        wordCount++;  // count each word read
    }

    cout << "The file " << filename << " contains " << wordCount << " words." << endl;

    file.close();  // close the file
    return 0;
}
