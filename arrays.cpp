//array = một cấu trúc dữ liệu có thể lưu trữ được nhiều giá trị
//        những giá trị có thể truy cập bằng một số chỉ số
//        "nó giống như là a biến nhưng có thể giữ được nhiều dữ liệu"

// array = a data structure that can hold multiple values
//         values are accessed by an index number
//         "kind of a valuable that can holds multiple values"

#include<iostream>
int main(){
    std::string cars[] = {"corvette", "mustang", "poschers"};
    std::string countries[3];
    countries[0] = "america";
    countries[1] = "cannada";
    countries[2] = "england";
    double gpa[] = {3.4,2.8, 3.1};
std::cout<<cars[2]<<"\n";
std::cout<<countries[0]<<"\n";
std::cout<<gpa[0];
    return 0;
}