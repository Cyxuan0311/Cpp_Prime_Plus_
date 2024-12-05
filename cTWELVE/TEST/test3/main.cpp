#include<iostream>
#include"ABC.h"
using namespace std;
 
 
int main()
{
	//包含纯虚函数的基类不能创建对象，但可以创建基类的指针，指向派生类
	ABC* points[3];	
	int selection;
	int i = 0;
	char label[50];
	int rating;
	char color[50];
	char style[50];	
	cout << "1----BaseDMA" << endl;
	cout << "2----LacksDMA" << endl;
	cout << "3----HasDMA" << endl;
	while (i < 3)
	{
		//指针必须要通过new来分配相应的内存，声明一个指针并不会给其分配内存
		cout << "Please enter your choice: ";
		cin >> selection;
		if (selection == 1)
		{
			cout << "Please enter the label: " << endl;
			cin >> label;
			cout << "Please enter the rating: " << endl;
			cin >> rating;
			points[i] = new BaseDMA(label, rating); // 在最后加上()直接利用相应构造函数进行初始化 
		}
		else if (selection == 2)
		{
			cout << "Please enter the label: " << endl;
			cin >> label;
			cout << "Please enter the rating: " << endl;
			cin >> rating;
			cout << "Please enter the color: " << endl;
			cin >> color;
			points[i] = new LacksDMA(color, label, rating);
		}
		else if (selection == 3)
		{
			cout << "Please enter the label: " << endl;
			cin >> label;
			cout << "Please enter the rating: " << endl;
			cin >> rating;
			cout << "Please enter the sytle: " << endl;
			cin >> style;
			points[i] = new hasDMA(style, label, rating);
		}
		i++;
	}
	cout << "Reporting: " << endl;
	for (int i = 0; i < 3; i++)
	{
		points[i]->view();
	}
 
 
	system("pause");
	return 0;
}