#include<iostream>
#include "tv.h"

int main(){
    using std::cout;
    Tv s42;
    cout<<"Initial settings for 42\" TV:\n";
    s42.settings();
    s42.onoff();
    s42.clanup();
    cout<<"\nAdjusted settings for 42:\n";
    s42.clanup();
    cout<<"\nAdjusted settings for 42:\n";
    s42.settings();

    Remote grey;
    grey.set_clan(10,s42);
    grey.volup(s42);
    grey.voldown(s42);
    cout<<"\n42\" settings after using remote\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_clan(28,s58);
    cout<<"\ns58\" settings\n";
    s58.settings();
    return 0;
}