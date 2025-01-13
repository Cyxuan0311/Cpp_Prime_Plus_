#ifndef WORKER_H_
#define WORKER_H_

#include<iostream>
#include<string>

class Worker{
    private:
        std::string fullname;
        long id;
    public:
        Worker():fullname("none"),id(0L){}
        Worker(const std::string &s,long n):fullname(s),id(n){}
        virtual ~Worker(){};
        virtual void Set();
        virtual void Show() const;
};


#endif