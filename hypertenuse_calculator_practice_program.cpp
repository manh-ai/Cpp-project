#include<iostream>
#include<cmath>
int main(){

    double a;
    double b;
    

    std::cout<<"enter a : ";
    std::cin>>a;

    std::cout<<"enter b : ";
    std::cin>>b;

    double c = sqrt(pow(a,2)+pow(b,2));

    std::cout<<"hypertenuse size : "<<c;
    return 0;
}