#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

void outint(int n){
    std::cout<<n<<" ";
}

int main(){
    using namespace std;
    list<int> one(5,2); //list of 5 2s//就是5个2的意思.
    int stuff[5]={1,2,4,8,6};
    list<int> two;
    two.insert(two.begin(),stuff,stuff+5);
    int more[6]={6,4,2,4,6,5};
    list<int> three(two);   //copy from list's two.
    three.insert(three.end(),more,more+6);

    cout<<"List one: ";
    for_each(one.begin(),one.end(),outint);
    cout<<endl;
    cout<<"List two: ";
    for_each(two.begin(),two.end(),outint);
    cout<<endl<<"List three: ";
    for_each(three.begin(),three.end(),outint);
    three.remove(2);
    cout<<endl<<"List three minus 2s: ";
    for_each(three.begin(),three.end(),outint);
    three.splice(three.begin(),one);    //就是将List-one的尾与List-three的首相连。
    cout<<endl<<"List three after splice: ";
    for_each(three.begin(),three.end(),outint);
    cout<<endl<<"List one: ";//List-one的内存以被释放。
    for_each(one.begin(),one.end(),outint);
    three.unique();
    cout<<endl<<"List three after unique: ";
    for_each(three.begin(),three.end(),outint);
    three.sort();
    three.unique();
    cout<<endl<<"List three after sort and unique: ";
    for_each(three.begin(),three.end(),outint);
    two.sort();
    three.merge(two);
    cout<<endl<<"Sorted two merged into three: ";
    for_each(three.begin(),three.end(),outint);
    cout<<endl;
    return 0;
}