/*
Program:
    The program define a head file to make a table-tennis base class.
*/
#ifndef TABLEN1_H_
#define TABLEN1_H_
#include<string>

using std::string;

class TabletennisPlayer{
    private:
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TabletennisPlayer(const string &fn="none",const string &ln="none",bool ht=false);
        void Name() const;
        bool HasTable() const {return hasTable;}
        void ResetTable(bool v){
            hasTable=v;
        }
};

class RatesPlayer:public TabletennisPlayer{
    private:
        unsigned int rating;
    public:
        RatesPlayer(unsigned int r=0,const string &fn="none",const string &ln="none",bool ht=false);
        RatesPlayer(unsigned int r,const TabletennisPlayer &tp);
        unsigned int Rating() const {
            return rating;
        }
        void ResetRating (unsigned int r){rating=r;}
};

#endif