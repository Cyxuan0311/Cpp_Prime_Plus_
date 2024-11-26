#include <iostream>
#include "stack.h"

int main() {
    Stack stack;
    customer cust = {"John Doe", 1000.0};  // 创建一个 customer 对象

    std::cout << "Count before push: " << Stack::getCount() << std::endl;
    stack.push(cust);  // 压栈
    std::cout << "Count after push: " << Stack::getCount() << std::endl;

    customer poppedCust;
    stack.pop(poppedCust);  // 弹栈
    std::cout << "Count after pop: " << Stack::getCount() << std::endl;

    return 0;
}
