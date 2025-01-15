#include<iostream>
#include<new>
#include<cstdlib>

struct Big{
    double stuff[20000];
};

int main(){
    using std::cout;
    using std::endl;
    using std::endl;
    using std::bad_alloc;
    Big *pb;
    try{
        cout<<"Trying to get a big block of memony:\n";
        pb=new Big[10000];
        cout<<"Got past the new request:\n";
    }
    catch(bad_alloc &ba){
        cout<<"Caught the exception!\n";
        cout<<ba.what()<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"Memony successfully allocated\n";
    pb[0].stuff[0]=4;
    cout<<pb[0].stuff[0]<<endl;
    delete [] pb;
    return 0;
}