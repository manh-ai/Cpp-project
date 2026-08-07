#include<iostream>
using namespace std;
struct Car{
string model;
int year;
};
void pcar(Car c);
int main(){
Car xe{"poschers 911", 2026};
pcar(xe);
return 0;
}
void pcar(Car c){
cout<<"brand: "<<c.model<<"\nyear: "<<c.year;
}