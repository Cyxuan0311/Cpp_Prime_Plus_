#include<iostream>
#include"cd2.h"
using namespace std;

using namespace std;
 
void Bravo(const Cd2& disk);
 
int main()
{
	Cd2 c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat,Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd2* pcd = &c1;
 
	cout << "Using object directl: " << endl;
	c1.Report();
	c2.Report();
 
	cout << "Using type cd * pointer to objects: " << endl;
	pcd->Report();
	pcd = &c2;
	pcd->Report();
 
	cout << "Calling a fuction with a Cd reference argument: " << endl;
	Bravo(c1);
	Bravo(c2);
 
	cout << "Testing assignment:  " << endl;
	Classic copy;
	copy = c2;
	copy.Report();
 
 
	system("pause");
	return 0;
}
 
 
 
void Bravo(const Cd2& disk) //参数为基类引用，实参可以为基类对象或者派生类对象
{
	disk.Report();
}