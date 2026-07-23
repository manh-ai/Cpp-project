// cout(toán tử gán)
// cin (toán tử xuất)

// cout(insertion operator)
// cin (extraction operator)

#include<iostream>
int main(){
    
    std::string name;
    int age;

    std::cout << "enter your age :";
    std::cin >> age;

    std::cout << "enter your full name :";
    std::getline(std::cin >>std::ws, name);

    std::cout<<"hello "<<name<<"\n";
    std::cout<<"your are "<<age<<" years old";
    return 0;
}