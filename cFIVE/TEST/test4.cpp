/*
Program:
    The program can build a basic object and display according to user preference.
*/
#include <iostream>
#include <cctype> // for character handling functions
using namespace std;

const int strsize = 50;

struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    // Sample data for testing
    bop members[5] = {
        {"Wimp Macho", "Manager", "WM123", 0},
        {"Raki Rhodes", "Junior Programmer", "RR456", 1},
        {"Celia Laiter", "Senior Programmer", "CL789", 2},
        {"Hoppy Hipman", "Analyst", "HH101", 0},
        {"Pat Hand", "Software Engineer", "PH202", 1}};

    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name     b. display by title\n";
    cout << "c. display by bopname  d. display by preference\n";
    cout << "q. quit\n";

    char choice;
    while (true)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        choice = tolower(choice); // Convert to lowercase to handle uppercase inputs

        if (choice == 'q')
        {
            cout << "Goodbye!\n";
            break;
        }

        switch (choice)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                cout << members[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                cout << members[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                cout << members[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                // Display based on preference
                if (members[i].preference == 0)
                {
                    cout << members[i].fullname << endl;
                }
                else if (members[i].preference == 1)
                {
                    cout << members[i].title << endl;
                }
                else
                {
                    cout << members[i].bopname << endl;
                }
            }
            break;
        default:
            cout << "Invalid choice, please select a valid option.\n";
        }
    }

    return 0;
}
