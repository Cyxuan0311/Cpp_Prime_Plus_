#include <iostream>
#include "String2.h"

using namespace std;

int main() {
    // 创建字符串对象
    String str1("Hello");
    String str2("World");

    // 输出原始字符串
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // 使用赋值运算符将 str1 赋值给 str3
    String str3 = str1;
    cout << "str3 (after assignment from str1): " << str3 << endl;

    // 使用 + 运算符拼接 str1 和 str2，结果存储在 str4 中
    String str4 = str1 + str2;
    cout << "str4 (str1 + str2): " << str4 << endl;

    // 统计字符 'o' 在 str1 中出现的次数
    int count_o = str1.Count('o');
    cout << "Character 'o' appears " << count_o << " times in str1." << endl;

    // 将 str1 转换为大写
    str1.Stringhigh(str1);
    cout << "str1 after Stringhigh: " << str1 << endl;

    // 将 str1 转换为小写
    str1.Stringlow(str1);
    cout << "str1 after Stringlow: " << str1 << endl;

    // 输出当前 String 对象的数量
    cout << "Number of String objects: " << String::HowMany() << endl;

    return 0;
}
