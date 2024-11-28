#include <iostream>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;

public:
    // Constructors and destructor
    String(const char *s);  // 构造函数
    String();  // 默认构造函数
    String(const String &st);  // 拷贝构造函数
    ~String();  // 析构函数

    // 获取字符串的长度
    int length() const { return len; }

    // 计数函数，统计字符 ch 出现的次数
    int Count(char ch) const;

    // 字符串转小写和大写
    void Stringlow(String &st);
    void Stringhigh(String &st);

    // 重载运算符
    String &operator=(const String &);
    String &operator=(const char *);
    char &operator[](int i);
    const char &operator[](int i) const;

    // 友元运算符
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend String operator+(const String &st1, const String &st2);

    // 输入输出流重载
    friend ostream &operator<<(ostream &os, const String &st);
    friend istream &operator>>(istream &is, String &st);

    // 静态函数
    static int HowMany();
};

// 初始化静态成员
int String::num_strings = 0;

// 构造函数
String::String(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

// 默认构造函数
String::String() {
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

// 拷贝构造函数
String::String(const String &st) {
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

// 析构函数
String::~String() {
    --num_strings;
    delete[] str;
}

// 统计字符 ch 出现的次数
int String::Count(char ch) const {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

// 转为小写
void String::Stringlow(String &st) {
    for (int i = 0; i < len; i++) {
        st.str[i] = std::tolower(st.str[i]);
    }
}

// 转为大写
void String::Stringhigh(String &st) {
    for (int i = 0; i < len; i++) {
        st.str[i] = std::toupper(st.str[i]);
    }
}

// 赋值运算符
String &String::operator=(const String &st) {
    if (this == &st)
        return *this;

    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// 赋值运算符
String &String::operator=(const char *s) {
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// 索引运算符
char &String::operator[](int i) {
    return str[i];
}

const char &String::operator[](int i) const {
    return str[i];
}

// 比较运算符
bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
    return (st2 < st1);
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

// 字符串拼接
String operator+(const String &st1, const String &st2) {
    int new_len = st1.len + st2.len;
    char *new_str = new char[new_len + 1];
    std::strcpy(new_str, st1.str);
    std::strcat(new_str, st2.str);
    new_str[new_len] = '\0';

    String new_string;
    new_string.str = new_str;
    new_string.len = new_len;

    return new_string;
}

// 输出运算符
ostream &operator<<(ostream &os, const String &st) {
    os << st.str;
    return os;
}

// 输入运算符
istream &operator>>(istream &is, String &st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

// 获取当前 String 对象的数量
int String::HowMany() {
    return num_strings;
}

