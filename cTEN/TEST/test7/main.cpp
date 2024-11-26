#include <iostream>
#include "imagine.h"

using namespace std;

int main() {
    Imagine num1, num2, result;
    char choice;

    while (true) {
        cout << "Enter the first complex number (real and imaginary parts): " << endl;
        cin >> num1;
        cout << "Enter the second complex number (real and imaginary parts): " << endl;
        cin >> num2;

        cout << "\nChoose an operation:\n";
        cout << "a) Addition (num1 + num2)\n";
        cout << "b) Subtraction (num1 - num2)\n";
        cout << "c) Multiplication (num1 * num2)\n";
        cout << "d) Conjugate of the first complex number (~num1)\n";
        cout << "e) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 'b':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 'c':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 'd':
                result = ~num1;
                cout << "Conjugate of the first complex number: " << result << endl;
                break;
            case 'e':
                cout << "Exiting the program. Goodbye!" << endl;
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please try again!" << endl;
                break;
        }
        cout << endl; // Add a blank line for better readability
    }
}
