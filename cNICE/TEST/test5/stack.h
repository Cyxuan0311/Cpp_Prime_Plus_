#ifndef STACK_H
#define STACK_H

// 定义客户结构体
struct customer {
    char fullname[35];  // 客户姓名
    double payname;     // 客户支付金额
};

typedef customer Item;  // 将 customer 类型定义为 Item

class Stack {
private:
    enum { MAX = 10 };   // 最大栈容量
    Item items[MAX];     // 存储栈的元素
    int top;             // 栈顶元素的索引
    static int Count;    // 静态成员变量，用来统计栈中元素的数量

public:
    Stack();                           // 构造函数
    bool isempty() const;              // 判断栈是否为空
    bool isfull() const;               // 判断栈是否已满
    bool push(const Item &item);       // 压栈操作
    bool pop(Item &item);              // 弹栈操作
    static int getCount() { return Count; }  // 静态函数，返回栈中元素数量
};

#endif
