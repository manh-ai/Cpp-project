#include<iostream>
void swap (std::string &manh, std::string &hiep);
int main(){
std::string manh = "xau trai";
std::string hiep = "dep trai";
swap (manh, hiep);
std::cout<<manh;
    return 0;
}
void swap (std::string &manh, std::string &hiep){
     std::string temp;
     temp = manh;
     manh = hiep;
     hiep = temp;
}