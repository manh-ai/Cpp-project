#include<iostream>
int main(){
//the const keyword specifies that a valuable's is a constant
//const tells the compiler to prevent anything from modifying it
//read-only variables
const int x = 12;
x=x+4;
std::cout<<x;
    return 0;
}