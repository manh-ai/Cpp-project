#include<iostream>
int main(){
    int a = 37934242;
    double b = 342049.34; 
    char c = 'f';
    bool d = true;
    std::string e;
    char f[]= {1,2,3,4,5,6,7,8,9};
    std::string cars[] = {"corttege", "mustang", "lambogini", "buggati", "poschers", "ferrari", "camry"};
    std::cout<<"there are "<<sizeof(f)/sizeof(char)<<" elements in f array\n";
    std::cout<<"there are "<<sizeof(cars)/sizeof(std::string)<<" cars";

    return 0;
}