// main.cpp
#include <iostream>
#include "stringy.h"

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    // 创建一个足够大的缓冲区来存储字符串
    char buffer[100]; // 假设足够大以容纳字符串

    set(beany, testing, buffer);  // 使用定位 new 将数据放置在 buffer 中
    show(beany);                  // 打印一次 beany
    show(beany, 2);               // 打印两次 beany
    show(testing);                // 打印一次 testing
    show(testing, 3);             // 打印三次 testing

    // 无需 delete，因为我们使用的是定位 new

    return 0;
}
