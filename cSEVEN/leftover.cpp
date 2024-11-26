/*
Program:
    The program overloads the left() function.
*/
#include<iostream>

using namespace std;

unsigned long left(unsigned long num, unsigned ct);

char *left(const char *str, int n = 1);

int main(){
    const char *trip = "Hawaii!!";
    unsigned long n = 12345678;
    int i;
    char *temp;

    for(i = 0; i < 10; i++){
        cout<<left(n,i)<<endl;
        temp = left(trip, i);  // 存储返回值
        cout << temp << endl;
        delete [] temp;        // 释放内存
    }
    return 0;
}

unsigned long left(unsigned long num, unsigned ct){
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
        return 0;
    
    // 计算数字的位数
    while (n /= 10)
        digits++;
    
    // 如果 digits 大于 ct，移除多余的位数
    if (digits > ct){
        ct = digits - ct;
        while (ct--)
            num /= 10;
        return num;
    } else {  
        return num;
    }
}

char *left(const char *str, int n){
    if (n < 0)
        n = 0;
    
    // 动态分配内存给新字符串
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    
    // 添加空字符 '\0' 确保字符串终止
    p[i] = '\0';
    return p;
}
