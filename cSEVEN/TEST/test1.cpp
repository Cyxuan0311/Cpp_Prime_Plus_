#include <iostream>
#include <cstring> // 添加这个头文件来处理字符串相关操作

using namespace std;

void print_string(const char *arr, int n = 1);

int main() {
    char arr[256]; // 使用字符数组来存储输入的字符串，假设最大长度为 256
    cout << "Enter a string: ";
    cin.getline(arr, 256); // 使用 getline 读取一整行输入

    print_string(arr);

    return 0;
}

void print_string(const char *arr, int n) {
    for (int i = 0; i < n; ++i) { // 打印 n 次字符串
        int j = 0;
        while (arr[j] != '\0') {
            cout << arr[j];
            j++;
        }
        cout << endl; // 每次打印后换行
    }
}
