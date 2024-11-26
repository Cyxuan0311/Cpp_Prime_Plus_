// pe9-1.cpp -- main program to test golf structure and functions

#include <iostream>
#include "golf.h"

using namespace std;

int main(){
    golf g1;
    golf g2;
    
    // 使用交互版本获取用户输入
    if (!setgolf(g1)) {
        cout << "No input provided. Using default values." << endl;
        setgolf(g1, "Default Golfer", 10);  // 使用默认值
    }

    // 显示第一个高尔夫球员的信息
    showgolf(g1);
    
    // 使用非交互版本设置第二个高尔夫球员
    setgolf(g2, "John Doe", 20);
    
    // 显示第二个高尔夫球员的信息
    showgolf(g2);

    // 重置 g1 的 handicap
    handicap(g1, 15);
    cout << "Updated golf information for g1:" << endl;
    showgolf(g1);

    return 0;
}
