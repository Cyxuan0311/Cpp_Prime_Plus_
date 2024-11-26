/*
Program:
    The program uses nested loops to print a pattern like the following based on the input "n":
    "....*"
    "...**"
    "..***"
    ".****"
    "*****"
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // 打印点（.）
        for (int j = 0; j < n - i - 1; j++) {
            cout << ".";
        }
        
        // 打印星号（*）
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        // 换行
        cout << endl;
    }

    return 0;
}
