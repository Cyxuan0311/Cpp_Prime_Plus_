#include "stack.h"

int Stack::Count = 0;  // 静态成员变量 Count 的定义

// 构造函数，初始化栈
Stack::Stack() {
    top = 0;  // 栈为空，栈顶索引为 0
}

// 判断栈是否为空
bool Stack::isempty() const {
    return top == 0;
}

// 判断栈是否已满
bool Stack::isfull() const {
    return top == MAX;
}

// 压栈操作
bool Stack::push(const Item &item) {
    if (top < MAX) {
        items[top++] = item;  // 添加元素并更新栈顶
        Count++;  // 增加栈中元素数量
        return true;
    } else {
        return false;  // 栈已满，返回 false
    }
}

// 弹栈操作
bool Stack::pop(Item &item) {
    if (top > 0) {
        item = items[--top];  // 获取栈顶元素并更新栈顶
        Count--;  // 减少栈中元素数量
        return true;
    } else {
        return false;  // 栈为空，返回 false
    }
}
