#include<iostream>
 int searchCars(std::string array[],int size, std::string element);
int main(){
    std::string cars[] = {"mustang", "bugatti", "bmw", "ferrari", "poschers"};
    std::string car;
    int index;
    int size = sizeof(cars)/sizeof(cars[0]); 

    std::cout<<"enter a car you want : ";
    std::getline(std::cin, car);

    index = searchCars(cars, size, car);

    if(index != -2){
        std::cout<<"your "<<car<<" is available at index "<<index;
    }
    else{
        std::cout<<"your car is not available!";
    }
    return 0;
}
int searchCars(std::string array[], int size, std::string element){
    for(int i; i < size ; i++){
        if(array[i] == element){
        return i;}
    }return -2;
}