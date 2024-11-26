/*
Program:    
    The program calculates the factorial of a number using recursion.
*/
#include<iostream>

using namespace std;

int factior(int n);

int main(){
    int n;
    cout << "Please enter a number to calculate its factorial: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << factior(n) << endl;
    return 0;
}

int factior(int n) {
    if (n <= 1)  // Base case: 0! and 1! both equal 1
        return 1;
    else
        return n * factior(n - 1);  // Recursive case
}
