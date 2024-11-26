//stock00.h--stock class interface 
//version 00

#ifndef STOCK00_H
#define STOCK00_h

#include<string>

class Stock{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){total_val=share_val*share_val;}
    public:
        void acquire(const std::string &co,long n,double pr);       
        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        void show();
};

#endif
