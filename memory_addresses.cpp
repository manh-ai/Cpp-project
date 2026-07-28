// địa chỉ nhớ = một địa chỉ trong bộ nhớ nơi dữ liệu được lưu trữ
// một địa chỉ nhớ có thể được truy cập với & (toán tử lấy địa chỉ)

// memory address = a address in memory where data stored
// a memory address can accessed with & (address-of operator)

#include<iostream>
int main(){
    std::string name = "manh";
    int age = 19;
    bool smart = true;
    std::cout<<&name<<"\n";
    std::cout<<&age<<"\n";
    std::cout<<&smart<<"\n";
    return 0;
}