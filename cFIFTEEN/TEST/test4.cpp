#include<iostream>
#include<algorithm>

int reduce(long a[],int n);
void show(long a[],int n);

int main(){
    long arr[10] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
    show(arr, 10);
    int newsize = reduce(arr, 10);
    show(arr, newsize);
    return 0;
}

int reduce(long a[],int n){
    std::sort(a,a+n);
    auto past_end=std::unique(a,a+n);

    return past_end-a;
}

void show(long a[],int n){
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<std::endl;
        std::cout<<" ";
    }
    std::cout<<std::endl;
}
