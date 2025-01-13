#ifndef TV_H_
#define TV_H_

class Tv{
    private:
        int state;
        int volume;
        int maxchannel;
        int channel;
        int mode;
        int input;
    public:
        friend class Remote;
        enum{Off,On};
        enum{Minval,Maxval=20};
        enum{Antenna,Cable};
        enum{TV,DVD};

        Tv(int s=Off,int mc=125):state(s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}
        void onoff(){
            state=(state==0)?Off:On;
        }
        bool ison()const {return state==On;}
        bool volup();
        bool voldown();
        void clanup();
        void clandown();
        void set_mode(){
            mode=(mode==Antenna)?Cable:Antenna;
        }
        void set_input(){
            input=(input==TV)?DVD:TV;
        }
        void settings() const;
};

class Remote{
    private:
        int mode;
    public:
        Remote(int m=Tv::TV):mode(m){}
        bool volup(Tv &v){
            return v.volup();
        }
        bool voldown(Tv &v){
            return v.voldown();
        }
        void onoff(Tv &v){
            v.onoff();
        }
        void chanup(Tv &v){
            v.clanup();
        }
        void chandown(Tv &v){
            v.clandown();
        }
        void set_clan(int m,Tv &v){
            v.channel=m;
        }
        void set_mode(Tv &v){
            v.set_mode();
        }
        void set_input(Tv &v){
            v.set_input();
        }
};

#endif