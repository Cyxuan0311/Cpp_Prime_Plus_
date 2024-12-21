#ifndef WORKER_H_
#define WORKER_H_

#include <string>

class Worker {
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname(""), id(0) {}
    Worker(const std::string &s, long n) : fullname(s), id(n) {}
    virtual ~Worker() = 0; // 纯虚函数声明
    virtual void Set();
    virtual void show() const;
};

// Pure virtual destructor implementation
inline Worker::~Worker() {}

class Waiter : public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}
    Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
    void Set();
    void show() const;
};

class Singer : public Worker {
protected:
    enum { other, alto, contralto, soprano, bass, baritone, tenor };
    enum { Vtypes = 7 };
private:
    static const char* pv[Vtypes];//In the book of C++ prime plus,there are a mistake.We should use a const to build it.
    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string &s, long n, int v = other) : Worker(s, n), voice(v) {}
    Singer(const Worker &wk, int v = other) : Worker(wk), voice(v) {}
    void Set();
    void show() const;
};

#endif
//sometime we can use 
//Worker *pr1=(Waiter *) &ed;
//Worker *pr2=(Singer *) &ed;
