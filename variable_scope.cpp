// Local variables = khai báo trong một hàm hoặc một block{}
// Global variables = khai báo bên ngoài tất cả các hàm

// Local variables = declared in a function or a block{}
// Global variables = declared outside of all functions

#include<iostream>
int mynum = 3;
void numprint();
int main(){
    int mynum = 1;
    numprint();
    std::cout<< :: mynum<<"\n";
    return 0;
}
void numprint(){
    int mynum = 2;
    std::cout<<::mynum;
}