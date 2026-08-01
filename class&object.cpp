// object = một tập hợp của các thuộc tính và các phương pháp 
//          chúng có thể có chữ và có thể biểu diễn các hành động
//          có thể được dùng để bắt chước những đồ vật trong thế giới thật (vd. điện thoại, sách, chó)
//          được sáng tạo từ một class cái mà hành động như một "bản thiết kế"

// object = A collection of attributes and methods 
//          They can have characteristics and could perform actions 
//          Can be used to mimic real world items
//          Created from a class which acts as a "blue-print"

#include<iostream>
class myself{
    public:
    bool handsome;
    double grade;
    double weight;
    std::string skill;
void teach(){
    std::cout<<"I am teaching\n";
}
void workout(){
    std::cout<<"I am working out\n";
}
void eat(){
    std::cout<<"I am eating\n";
}
};
int main(){
    myself manh;
    manh.handsome = true;
    manh.grade = 3.9;
    manh.weight = 70;
    manh.skill = "coding";

    std::cout<<manh.handsome<<"\n";
    std::cout<<manh.grade<<"\n";
    std::cout<<manh.weight<<"\n";
    std::cout<<manh.skill<<"\n";
    manh.workout();
    manh.teach();
    manh.eat();
    return 0;
}