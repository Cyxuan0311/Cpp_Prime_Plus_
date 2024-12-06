#include "Port.h"
using std::endl;
using std::cout;

int main() {
    // 创建一个 Port 对象
    Port port1("GreatPort", "Red", 100);
    
    // 显示 Port 对象的信息
    cout << "Port 1 details:" << endl;
    port1.Show();
    cout << port1 << endl;

    // 使用加法和减法操作符
    port1 = port1 + 50;  // 增加50瓶
    cout << "After adding 50 bottles:" << endl;
    cout << port1 << endl;

    port1 = port1 - 30;  // 减少30瓶
    cout << "After subtracting 30 bottles:" << endl;
    cout << port1 << endl;

    // 创建一个 VintagePort 对象
    VintagePort vintagePort1("Vintage 1995", "FinePort", 1995, "Red", 200);
    
    // 显示 VintagePort 对象的信息
    cout << "\nVintagePort 1 details:" << endl;
    vintagePort1.Show();
    cout << vintagePort1 << endl;

    // 使用赋值操作符进行赋值
    VintagePort vintagePort2 = vintagePort1;
    cout << "\nVintagePort 2 (copied from VintagePort 1) details:" << endl;
    vintagePort2.Show();
    cout << vintagePort2 << endl;

    // 测试赋值运算符
    VintagePort vintagePort3;
    vintagePort3 = vintagePort1;
    cout << "\nVintagePort 3 (assigned from VintagePort 1) details:" << endl;
    vintagePort3.Show();
    cout << vintagePort3 << endl;

    return 0;
}
