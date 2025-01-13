#include"tv.h"
#include<iostream>

bool Tv::volup(){
    if(volume<Maxval){
        volume++;
        return true;
    }else
        return false;
}

bool Tv::voldown(){
    if(volume>Minval){
        volume--;
        return true;
    }else
        return false;
}

void Tv::clanup(){
    if(channel<maxchannel){
        channel++;
    }else{
        channel=1;
    }
}

void Tv::clandown(){
    if(channel>1)
        channel--;
    else
        channel=maxchannel;
}

void Tv::settings()const{
    using std::endl;
    using std::cout;
    cout<<"TV is "<<(state==Off?"off":"On")<<endl;
    if(state==On){
        cout<<"Volume settings = "<<volume<<endl;
        cout<<"Channel settings = "<<channel<<endl;
        cout<<"Mode = "<<(mode==Antenna?"Antenna":"Cable")<<endl;
        cout<<"Input = "<<(input==TV?"TV":"DVD");
    }
}