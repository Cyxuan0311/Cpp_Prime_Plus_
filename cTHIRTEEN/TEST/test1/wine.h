#ifndef WINE_H_
#define WINE_H_

#include<iostream>
#include<string>
#include<valarray>
#include "Pair.h"

class Wine{
    private:
        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt,ArrayInt> PairArray;
        std::string label;
        PairArray data;
        int years;
    public:
        Wine();
        Wine(const char *l,int y,const int yr[],const int bot[]);
        Wine(const char *l,int y);
        Wine(const Wine &p);
        void GetBottles();
        const std::string & Label() const {return label;}
        int sum() const;
        void Show() const;
};

#endif