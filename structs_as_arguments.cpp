#include<iostream>
struct Car{
    std::string model;
    int year;
    std::string color;
};
void PrintCar(Car &m);
void PaintCar(Car m, std::string color);
int main(){
Car car1;
car1.model = "BMW";
car1.year = 2026;
car1.color = "red";
std::string color;
std::cout<<"paint color : ";
std::cin>>color;
PaintCar(car1, color);
//std::cout<<&car1<<"\n";
//PrintCar(car1);
    return 0;}
void PrintCar(Car &m){
std::cout<<&m<<"\n";
std::cout<<m.model<<"\n";
std::cout<<m.year<<"\n";
std::cout<<m.color;}
void PaintCar(Car m, std::string color){
    m.color = color;
std::cout<<m.model<<"\n";
std::cout<<m.year<<"\n";
std::cout<<m.color;}
