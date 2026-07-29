// pointers = biến mà lưu trữ địa chỉ nhớ của một biến khác
//            thỉnh thoảng nó thì dễ dàng hơn để làm việc với 1 địa chỉ

// pointers = variable that stores mememory address of another variable
//            sometimes it's easier to work with an address 

#include<iostream>
int main(){
    std::string name = "manh";
    int age = 19;
    bool deptrai = true;

    std::string *pName = &name;
    int *pAge = &age;
    bool *pDeptrai = &deptrai;
    std::cout<<*pName<<"\n";
    std::cout<<*pAge<<"\n";
    std::cout<<*pDeptrai;
    return 0;
}