#ifndef SALES_H
#define SALES_H

namespace SALES {
    struct Sales {
        double sales[4]; // 销售数据
        double average;  // 平均值
        double max;      // 最大值
        double min;      // 最小值
    };

    // 函数声明
    void setSales(Sales& s);
    void setSales(Sales& s, const double* ar, int n);
    void showSales(const Sales& s);
}

#endif
