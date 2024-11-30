#include<iostream>
#include "tablen1.h"

int main(){
    using std::cout;
    using std::endl;

    TabletennisPlayer player1("Tara","Boomda",false);
    RatesPlayer rplayer1(1140,"Mallroy","Duck",true);
    rplayer1.Name();
    if(rplayer1.HasTable())
        cout<<": has a table.\n";
    else    
        cout<<": hasn't a table.\n";
    player1.Name();
    if(player1.HasTable())
        cout<<": has a table.\n";
    else    
        cout<<": hasn't a table.\n";
    cout<<" Name: ";
    rplayer1.Name();
    cout<<"; Rating : "<<rplayer1.Rating()<<endl;
    RatesPlayer rplayer2(1212,player1);
    cout<<"Name: ";
    rplayer1.Name();
    cout<<"; Rating: "<<rplayer1.Rating()<<endl;

    return 0;
}