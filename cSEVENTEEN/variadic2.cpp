#include <iostream>
#include <string>

// 基本的空模板函数
void show_list() {}

// 输出一个元素的模板函数
template <typename T>
void show_list(const T& value) {
    std::cout << value << '\n';
}

// 输出多个元素的模板函数
template <typename T, typename... Args>
void show_list(const T& value, const Args&... args) {
    std::cout << value << ", ";  // 输出当前元素并添加逗号
    show_list(args...);  // 递归调用处理剩下的元素
}

int main() {
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";

    // 调用 show_list 输出多个元素
    show_list(n, x);
    show_list(x * x, '!', 7, mr);

    return 0;
}
