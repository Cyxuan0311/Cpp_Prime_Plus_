#ifndef PORT_H_
#define PORT_H_
#include<iostream>
using std::ostream;
using std::cout;

class Port{
    private:
        char *brand;
        char style[20];
        int bottles;
    public:
       Port(const char *s="none",const char *t="none",int k=0);
       Port(const Port &p);
       virtual ~Port(){
        delete [] brand;
       } 
       Port& operator=(const Port &b);
       Port& operator+(int b);
       Port& operator-(int b);
       int Bottlement() const{
            return bottles;
       }
       virtual void Show() const;
       friend ostream& operator<<(ostream &os,const Port &p);
};

class VintagePort:public Port{
    private:
        char *nickname;
        int year;
    public:
        VintagePort(const char *nn="none",const char *s="none",int y=0,const char *t="none",int k=0);
        VintagePort(const VintagePort &V);
        ~VintagePort(){
            delete [] nickname;
        }
        VintagePort& operator=(const VintagePort &V);
        void Show() const;
        friend ostream& operator<<(ostream &os,const VintagePort &V);
};

#endif