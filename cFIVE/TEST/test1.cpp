/*
Program:
    The program transforms a-z to A-Z in a string and stops at '@'.
*/
#include <iostream>
#include <cctype>  // for toupper function

using namespace std;

int main() {
    string input;
    cout << "Enter a string (transforms lowercase letters to uppercase). Enter '@' to stop.\n";
    getline(cin, input);  // Read a line of text

    for (char &ch : input) {
        if (ch == '@') {
            break;  // Stop processing if '@' is encountered
        }
        if (islower(ch)) {  
            ch = toupper(ch);  // Transform lowercase to uppercase
        }
    }

    cout << "Transformed string: " << input << endl;
    return 0;
}
