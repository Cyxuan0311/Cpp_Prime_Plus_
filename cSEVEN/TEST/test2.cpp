#include <iostream>
#include <string>

using namespace std;

struct candyBar {
    string name;
    int calories;
    double weight;
};

// 调整参数顺序后的build_candyBar函数声明
void build_candyBar(candyBar &a, const string &b = "Mamiliet thie", int n = 350, double k = 2.85);
void display(const candyBar &a);

int main() {
    candyBar *Count = new candyBar[3];
    
    for (int i = 0; i < 3; i++) {
        cout << "Please enter some information in this struct (name, calories, weight):\n";
        cout << "Name: ";
        getline(cin, Count[i].name);  // 允许输入多单词的字符串
        cout << "Calories: ";
        cin >> Count[i].calories;
        cout << "Weight: ";
        cin >> Count[i].weight;
        cin.ignore();  // 忽略缓冲区中的换行符，以便正确读取下一次输入
        build_candyBar(Count[i], Count[i].name, Count[i].calories, Count[i].weight);
        cout << "\n";
    }
    
    for (int i = 0; i < 3; i++)
        display(Count[i]);
    
    delete[] Count;
    return 0;
}

// 调整参数顺序后的build_candyBar函数定义
void build_candyBar(candyBar &a, const string &b, int n, double k) {
    a.name = b;
    a.weight = k;
    a.calories = n;
}

void display(const candyBar &a) {
    cout << "The candy's information is: " << a.name << ", Weight: " << a.weight << ", Calories: " << a.calories << "\n";
}
