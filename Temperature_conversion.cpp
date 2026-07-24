#include<iostream>
int main(){
    char unit;
    double temp;
    std::cout<<"***********TEMPERATURE CONVERTER**********"<<"\n";
    std::cout<<"F = Fahraheit"<<"\n";
    std::cout<<"C = Celcius"<<"\n";
    std::cout<<"What unit would you like to convert to : ";
    std::cin>>unit;

    if(unit == 'C' || unit == 'c'){
        std::cout<<"enter temperature in Fahraheit : ";
        std::cin>>temp;
        temp = (temp - 32)/1.8;
        std::cout<<"Temperature is : "<<temp<<"C";
    }
    if(unit == 'F' || unit == 'f'){
        std::cout<<"enter temperature in Celcius : ";
        std::cin>>temp;
        temp = (temp + 32)*1.8;
        std::cout<<"Temperature is : "<<temp<<"F";
    }
    return 0;
}