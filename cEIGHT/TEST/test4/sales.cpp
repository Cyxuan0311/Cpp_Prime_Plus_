#include "sales.h"
#include <iostream>
using namespace std;

namespace SALES {
    void setSales(Sales& s) {
        cout << "请输入销售数据：" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "第 " << i + 1 << " 项销售额：";
            cin >> s.sales[i];
        }
        // 计算平均值、最大值和最小值
        s.average = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 0; i < 4; i++) {
            s.average += s.sales[i];
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min) s.min = s.sales[i];
        }
        s.average /= 4;
    }

    void setSales(Sales& s, const double* ar, int n) {
        for (int i = 0; i < 4 && i < n; i++) {
            s.sales[i] = ar[i];
        }
        // 填充空余部分为 0
        for (int i = n; i < 4; i++) {
            s.sales[i] = 0;
        }
        // 计算平均值、最大值和最小值
        s.average = 0;
        s.max = s.sales[0];
        s.min = s.sales[0];
        for (int i = 0; i < 4; i++) {
            s.average += s.sales[i];
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min) s.min = s.sales[i];
        }
        s.average /= 4;
    }

    void showSales(const Sales& s) {
        cout << "销售数据：" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "销售额[" << i + 1 << "] = " << s.sales[i] << endl;
        }
        cout << "平均值：" << s.average << endl;
        cout << "最大值：" << s.max << endl;
        cout << "最小值：" << s.min << endl;
    }
}
