#include<iostream>
int main(){
char op;
double a;
double b;
double result;

std::cout<<"enter operator (+ - * /) : ";
std::cin>>op;

std::cout<<"enter a : ";
std::cin>>a;

std::cout<<"enter b : ";
std::cin>>b;

std::cout<<"\n";

switch(op){
    case '+':
    result = a + b;
    std::cout<<"result : "<<result<<"\n";
    break;
     case '-':
    result = a - b;
    std::cout<<"result : "<<result<<"\n";
    break;
     case '*':
    result = a * b;
    std::cout<<"result : "<<result<<"\n";
    break;
     case '/':
    result = a / b;
    std::cout<<"result : "<<result<<"\n";
    break;
    default :
    std::cout<<"operator is not valid!";
    break;
}

}