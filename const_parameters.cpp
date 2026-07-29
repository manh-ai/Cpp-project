// biến cố định = biến mà hiệu quả cho truyền tải ý định chỉ đọc 
//                và code trở nên hữu hiệu an toàn hơn cho pointers
//                và tham chiếu

// const parameter = parameter that is effectively read-only
//                   conveys intent & code is more secure
//                   useful for pointers and references
 
#include <iostream>
void printInfo(const std::string &name, const int &age);
int main()
{
    std::string name = "Manh";
    int age = 19;
 
    printInfo(name, age);
 
    return 0;
}
void printInfo(const std::string &name, const int &age){
    //name = "";
    //age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}