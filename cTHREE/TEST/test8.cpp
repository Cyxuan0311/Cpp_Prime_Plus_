/*
Program:
    The program uses dynamic allocation to build an array of CandyBar.
*/
#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar {
    char Brand[20];
    double weight;
    int calories;
};

int main() {
    CandyBar* A = new CandyBar[3];
    for (int i = 0; i < 3; i++) {
        cout << "Please enter the brand, weight, and calories for candy bar " << i + 1 << ":\n";
        cout << "Brand: ";
        cin.ignore();
        cin.getline(A[i].Brand, 20);
        
        cout << "Weight: ";
        cin >> A[i].weight;
        
        cout << "Calories: ";
        cin >> A[i].calories;
    }

    cout << "\nCandyBar Information:\n";
    for (int i = 0; i < 3; i++) {
        cout << "CandyBar " << i + 1 << ":\n";
        cout << "Brand: " << A[i].Brand << endl;
        cout << "Weight: " << A[i].weight << "g" << endl;
        cout << "Calories: " << A[i].calories << " kcal\n" << endl;
    }

    delete[] A;
    return 0;
}
