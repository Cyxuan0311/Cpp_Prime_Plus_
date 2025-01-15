#include<iostream>
#include<new>
#include<cstdlib>

struct Big{
    double stuff[20000];
};

int main(){
    using std::cout;
    using std::endl;
    using std::cin;
    using std::bad_alloc;
    Big *bg;

    bg=new (std::nothrow) Big[10000];
    if(bg==0){
        cout<<"Could not allocate memony.Bye\n";
        exit(EXIT_FAILURE);
    }
    cout<<"Memony successfully allocated\n";
    bg[0].stuff[0]=4;
    cout<<bg[0].stuff[0]<<endl;
    delete [] bg;
    return 0;
}