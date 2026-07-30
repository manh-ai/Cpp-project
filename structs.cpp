// struct = Một cấu trúc mà các biến liên quan đến nhóm dưới một tên. structs
//          có thể bao gồm nhiều kiểu dữ liệu khác nhau (string, int, double, char, bool)
//          các biến trong một struct được biết đến như là "members"
//          members có thể truy cập với . "Class Member Access Operator"

// struct = A structure that group ralated variables under one name.
//          structs can contain many different data types (string, int, double, char, bool)
//          variables in a struct are known as "member"
//          members can be access with . "Class Member Access Operator"

#include<iostream>
struct student{
std::string name;
double gpa;
bool enrolled;
};
int main(){
   student student1;
   student1.name = "manh";
   student1.gpa = 3.8;
   student1.enrolled = true;

    std::cout<<student1.name<<"\n";
    std::cout<<student1.gpa<<"\n";
    std::cout<<student1.enrolled;
    return 0;
}