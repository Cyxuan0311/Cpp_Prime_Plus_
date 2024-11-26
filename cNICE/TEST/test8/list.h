#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstring>  // 为了操作字符串

using namespace std;

const int MAX = 50;

// 定义一个结构体 Node 来存储数据
struct Node {
    int a;
    double b;
    char c[MAX];
};

typedef Node ListItem;

class List {
private:
    static const int SIZE = 50;  // 最大列表大小
    ListItem items[SIZE];        // 存储列表的数组
    int currentSize;             // 当前列表中的元素数量

public:
    List();  // 构造函数

    // 添加新元素到列表
    bool add(const ListItem &item);

    // 检查列表是否为空
    bool isEmpty() const;

    // 检查列表是否已满
    bool isFull() const;

    // 查找某个元素在列表中的索引
    int find(const ListItem &item) const;

    // 显示列表中的所有元素
    void display() const;
};

#endif
