#ifndef ABC_H_
#define ABC_H_

class ABC{
    private:
        char *label;
        int rating;
    public:
        ABC(const char *s1,int n);
        ABC(const ABC &s);
        virtual ~ABC();
        ABC& operator=(const ABC &s);
        virtual void view() =0;
};

class BaseDMA:public ABC{
    public:
        BaseDMA(const char *s1,int n);
        virtual void view();
};

class LacksDMA:public ABC{
    private:
        const static int COL_LEN=40;
        char color[COL_LEN];
    public:
        LacksDMA(const char *s,const char *s1,int n);
        virtual void view();
};

class hasDMA:public ABC{
    private:
        char *style;
    public:
        hasDMA(const char *s,const char *s1,int n);
        hasDMA(hasDMA &s);
        ~hasDMA();
        hasDMA& operator=(const hasDMA &s);
        virtual void view();
};

#endif