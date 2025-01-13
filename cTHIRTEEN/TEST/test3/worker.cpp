#include"worker.h"
#include<iostream>

void Worker::Set(){
    std::cout<<"Enter worker's name:";
    getline(std::cin,fullname);
    std::cout<<"Enter worker's id";
    std::cin>>id;
    while(std::cin.get()!='\n')
        continue;
}

void Worker::Show() const {
    std::cout << "Name: " << fullname << "\n";
    std::cout << "Employee ID: " << id << "\n";
}
