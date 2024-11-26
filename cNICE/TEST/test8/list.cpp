#include<iostream>
#include "list.h"

using namespace std;

List::List(){
    currentSize=0;
}

bool List::isFull() const{
    return currentSize==SIZE;
}

bool List::isEmpty() const{
    return currentSize==0;
}

bool List::add(const ListItem &item){
    if(currentSize==SIZE){
        cout<<"The size of list is fulled!";
        return false;
    }else
        items[currentSize++]=item;
        return true;
}

int List::find(const ListItem &item) const {
    for (int i = 0; i < currentSize; ++i) {
        if (items[i].a == item.a && items[i].b == item.b && strcmp(items[i].c, item.c) == 0) {
            return i;
        }
    }
    return -1;  // 如果未找到则返回 -1
}

void List::display() const {
    if (isEmpty()) {
        cout << "List is empty." << endl;
        return;
    }
    
    cout << "List contents:" << endl;
    for (int i = 0; i < currentSize; ++i) {
        cout << "Item " << i + 1 << ": a=" << items[i].a 
             << ", b=" << items[i].b << ", c=" << items[i].c << endl;
    }
}