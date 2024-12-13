#include<iostream>
#include "worker.h"

const int LIM=4;

int main(){
    Waiter bob("Bob apple",314L,5);
    Singer bev("Bravely Hills",512L,3);
    Waiter w_temp;
    Singer s_temp;

    Worker *pw[LIM]={&bob,&bev,&w_temp,&s_temp};

    int i;
    for(i=2;i<LIM;i++)
        pw[i]->Set();
    for(i=0;i<LIM;i++){
        pw[i]->show();
        std::cout<<std::endl;
    }

    return 0;
}