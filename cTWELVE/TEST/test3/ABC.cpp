#include<iostream>
#include "ABC.h"
#include<cstring>

using namespace std;

ABC::ABC(const char *s,int n){
    label=new char[strlen(s)+1];
    strcpy(label,s);
    rating=n;
}

ABC::ABC(const ABC &s){
    label=new char[strlen(s.label)+1];
    strcpy(label,s.label);
    rating=s.rating;
}

ABC::~ABC(){
    delete [] label;
}

ABC& ABC::operator=(const ABC &s){
    delete [] label;
    label=new char [strlen(s.label+1)];
    strcpy(label,s.label);
    rating=s.rating;
    return *this;
}

void ABC::view(){
    cout<<"The label is "<<label<<endl;
    cout<<"The rating is "<<rating<<endl;
}

BaseDMA::BaseDMA(const char *s,int n):ABC(s,n){}

void BaseDMA::view(){
    cout<<"The type is BaseDMA."<<endl;
    ABC::view();
}

LacksDMA::LacksDMA(const char *s,const char *s1,int n):ABC(s1,n){
    strcpy(color,s);
}

void LacksDMA::view()
{
	cout << "The type is LacksDMA" << endl;
	ABC::view();
	cout << "Color: " << color << endl;
}

hasDMA::hasDMA(const char* s, const char* s1, int n):ABC(s1,n)
{
	style = new char[strlen(s) + 1];
	strcpy(style, s);
}
 
hasDMA::hasDMA(hasDMA& hd) :ABC(hd)
{
	style = new char[strlen(hd.style) + 1];
	strcpy(style, hd.style);
}
 
hasDMA::~hasDMA()
{
	delete[] style;
}
 
hasDMA& hasDMA::operator=(const hasDMA& hd)
{
	ABC::operator=(hd); //调用基类的重载赋值运算符来对基类数据进行赋值
	delete[] style;
	style = new char[strlen(hd.style) + 1];
	strcpy(style, hd.style);
	return *this;
}
 
void hasDMA::view()
{
	cout << "The type is HasDMA" << endl;
	ABC::view();
	cout << "Style: " << style << endl;
}