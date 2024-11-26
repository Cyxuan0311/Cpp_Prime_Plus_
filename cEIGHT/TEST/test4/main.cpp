#include "sales.h"
#include <iostream>
using namespace std;

int main() {
    SALES::Sales s;
    SALES::setSales(s);      // 通过用户输入设置销售数据
    SALES::showSales(s);     // 显示销售数据

    double data[3] = {123.4, 567.8, 901.2};
    SALES::setSales(s, data, 3); // 通过数组设置销售数据
    SALES::showSales(s);         // 显示销售数据

    return 0;
}
