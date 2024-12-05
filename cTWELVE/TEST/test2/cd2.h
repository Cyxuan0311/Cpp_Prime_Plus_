#ifndef CD2_H_
#define CD2_H_

class Cd2
{
private:
	char *performance;
	char * label;
	int selections;
	double payment;
public:
	Cd2(const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0); //自定义的构造函数的所有参数均为默认参数时则无需再自定义一个默认构造函数
	Cd2(const Cd2& d);
	virtual ~Cd2(); 
	Cd2 & operator=(const Cd2&d);
	virtual void Report()const; //在派生类中重新定义，需使用虚函数来完成多态
};
 
class Classic :public Cd2
{
private:
	//属于派生类的数据
	char *essential;
public:
	Classic(const char* s = "none", const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0);
	//自定义的构造函数的所有参数均为默认参数时则无需再自定义一个默认构造函数
	Classic(const Classic& cl);
	~Classic();
	Classic& operator=(const Classic& cl);
	virtual void Report()const;
};

#endif