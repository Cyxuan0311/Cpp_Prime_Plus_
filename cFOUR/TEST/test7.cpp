/*
Program:
    The program uses a struct to record car information using new and delete.
*/
#include <iostream>
#include <string>

using namespace std;

struct Car {
    string carname;  // 使用string类型
    int year;
};

int main() {
    int n;
    cout << "How many cars do you wish to catalog? ";
    cin >> n;
    
    // 检查输入的汽车数量是否有效
    if (n <= 0) {
        cout << "Invalid number of cars. Exiting program." << endl;
        return 1;
    }

    Car *A = new Car[n];
    for (int i = 0; i < n; i++) {
        cout << "Car #" << i + 1 << endl;
        cout << "Please enter the make: ";
        cin.ignore();  // 清除输入缓存，避免换行符影响输入
        getline(cin, A[i].carname);  // 使用getline读取整行输入
        cout << "Please enter the year made: ";
        cin >> A[i].year;
        cout << endl;
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i].year << " " << A[i].carname << endl;
    }

    delete[] A;  // 释放内存
    return 0;
}
