/*
Program:
    The program uses an array to store and calculate the average score of students.
*/
#include <iostream>
#include <array>
#include <iomanip> 

using namespace std;

int main() {
    array<int, 3> A;
    int total = 0;

    // 输入分数
    for (int i = 0; i < 3; i++) {
        cout << "Please enter the score for student " << i + 1 << ":\n";
        cin >> A[i];
        total += A[i];
    }

    // 计算并输出平均值
    double average = static_cast<double>(total) / A.size();
    cout << fixed << setprecision(2); // 设置输出格式为小数点后两位
    cout << "The average score is " << average << endl;

    return 0;
}
