#include<iostream>
int main(){
    std::string name;
    std::cout<<"Enter your name : ";
    std::getline(std::cin, name);
    name.append("@gmail.com");
    name.insert(0,"mmr.");
    name.erase(0,1);
    if(name.empty()){
        std::cout<<"you have not entered your name!";
    }
    else{
        std::cout<<"Your user name will be : "<<name; //<<name.at(1);
        return 0;
    }
    return 0;
}