// funtion = một khối mã có thể sử dụng lại
// funtion = a block of reuseable code
#include<iostream>
    void happybirthday(std::string name, int age);
    int main(){
        std::string name = "Manh";
        int age = 19;
        happybirthday(name, age);
   return 0;}
     void happybirthday(std::string name, int age){
        std::cout<<"happy birth day to you"<<"\n";
        std::cout<<"happy birth day to you"<<"\n";
        std::cout<<"happy birth day dear "<<name<<"\n";
        std::cout<<"happy birth day to you"<<"\n";
        std::cout<<"you are "<<age<<" years old!";
    }
