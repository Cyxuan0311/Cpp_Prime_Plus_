#include <iostream>
#include <cstring>  // For strlen function

using namespace std;

// 模板声明
template <typename T>
T compare(T a[], int size);

// 模板特化，用于处理 const char* 数组
template <>
const char* compare<const char*>(const char* a[], int size) {
    const char* longest = a[0];
    for (int i = 1; i < size; ++i) {
        if (strlen(a[i]) > strlen(longest)) {
            longest = a[i];
        }
    }
    return longest;
}

int main() {
    // 字符串数组（const char* 数组）
    const char* strings[] = {
        "Hello",
        "World",
        "This is a long string",
        "Short",
        "Longest String in the array"
    };
    int size = sizeof(strings) / sizeof(strings[0]);

    // 查找最长字符串
    const char* longestString = compare(strings, size);
    cout << "The longest string is: " << longestString << endl;

    return 0;
}
