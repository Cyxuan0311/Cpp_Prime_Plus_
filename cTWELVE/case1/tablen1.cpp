#include "tablen1.h"
#include<iostream>

TabletennisPlayer::TabletennisPlayer(const string &fn,const string &ln,bool ht):firstname(fn),lastname(ln),hasTable(ht){}

void TabletennisPlayer::Name()const{
    std::cout<<lastname<<","<<firstname;
}

RatesPlayer::RatesPlayer(unsigned int r,const string &fn,const string &ln,bool ht):TabletennisPlayer(fn,ln,ht){
    rating=r;
}

RatesPlayer::RatesPlayer(unsigned int r,const TabletennisPlayer &tp):TabletennisPlayer(tp),rating(r){
    
}