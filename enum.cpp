// enums = một kiểu dữ liệu được người dùng xác định mà bao gồm
//         các hằng số số nguyên có tên theo cặp.
//          TUYỆT nếu bạn có một tập hợp của các lựa chọn tiềm năng

// enums = a user-defined data type that consists
//         of paired named-integer constants.
//         GREAT if you have a set of potential options.

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

#include<iostream>
int main(){
Day today = saturday;
switch(today){
    case sunday : std::cout << "It is sunday!\n";
    break;
     case monday : std::cout << "It is monday!\n";
    break;
     case tuesday : std::cout << "It is tuesday!\n";
    break;
     case wednesday : std::cout << "It is wednesday!\n";
    break;
     case thursday : std::cout << "It is thursday!\n";
    break;
     case friday : std::cout << "It is friday!\n";
    break;
     case saturday : std::cout << "It is saturday!\n";
    break;
}
    return 0;
}