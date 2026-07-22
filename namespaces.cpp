// Namespace = cung cấp một giải pháp để tránh xung đột tên 
//trong các dự án lớn. Mỗi thực thể cần một cái tên độc nhất. 
//một namepace cho phép các thực thể có tên giống nhau 
//miễn là các namespaces thì khác biệt.

// Namespace = provides a solution for preventing name conflicts  
//in large projects. Each entity needs a unique name. 
//a namespace allows for identically named entities 
//as long as namespaces are different.
namespace first{
   int x = 2;
}
namespace second{
    int x = 8;
}
#include<iostream>
int main(){
   int x = 5;
   
std::cout<<x;
std::cout<<first::x;
std::cout<<second::x;

    return 0;
}