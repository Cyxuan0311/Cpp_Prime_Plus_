#ifndef CD_H_
#define CD_H_
#include<cstring>

class Cd{
    private:
        char performances[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(char *s1="none",char *s2="none",int n=0,double x=0.0){
            strcpy(performances,s1);
            strcpy(label,s2);
            selections=n;
            playtime=x;
        }
        //Cd(const Cd &d);
        //Cd();
        //virtual ~Cd();
        virtual void Report() const;
        //virtual Cd & operator=(const Cd &d);
};

class Classic:public Cd{
    private:
        char All[50];
    public:
        Classic(char *s1="none",char *s2="none",char *s3="none",int n=0,double x=0.0):Cd(s1,s2,n,x){
            strcpy(All,s3);
        }
        virtual void Report() const;
};

#endif