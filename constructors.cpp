// constructor = một phương pháp đặc biệt cái mà tự động được gọi khi một object được thể hiện hóa
//               hữu dụng cho việc gán giá trị cho thuộc tính như là đối số

// constructor = a special method that is automatically called when an object is instantiated
//               useful for assigning values to attributes as arguments

#include<iostream>
class Car{
    public:
    std::string make;
    std::string model;
    int year;
    std::string color;
Car(std::string make, std::string model, int year, std::string color){
    this->make = make;
    this->model = model;
    this->year = year;
    this->color = color;
}
};
int main(){
    Car car1("BMW", "special summer", 2026, "red");
    std::cout<<car1.make<<"\n";
    std::cout<<car1.model<<"\n";
    std::cout<<car1.year<<"\n";
    std::cout<<car1.color<<"\n";
    return 0;
}