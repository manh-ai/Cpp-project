#include<iostream>
class car{
    public:
    std::string model1;
    std::string model2;
    car(std::string model1){
        this -> model1 = model1;
    }
    car(std::string model1, std::string model2){
        this -> model1 = model1;
        this -> model2 = model2;
    }
    
};
int main(){
car car1("bmw");
std::cout<<car1.model1;
car car2("ferahri", "mustang");
std::cout<<car2.model1;
std::cout<<car2.model2;
return 0;
}