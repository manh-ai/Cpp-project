// return = trả về lại 1 giá trị cho chỗ đó
//          nơi bạn đã gọi hàm bao ngoài.

// return = return a value back to the spot
//          where you called encompassing function.
/*#include<iostream>
double square(double length);
double cube(double length);
int main(){
    double length = 5.0;
    double area = square(length); 
    double volume = cube(length);
    std::cout<<area;
    std::cout<<volume;
    return 0;
}
double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}*/

#include<iostream>
std::string name(std::string name1, std::string name2);
int main(){
    std::string first_name = "Manh";
    std::string last_name = "Vu";
    std::string full_name = name(first_name, last_name);
    std::cout<<"hello "<<full_name;
    return 0;
}
std::string name(std::string name1, std::string name2){
    return name1 + " " + name2;