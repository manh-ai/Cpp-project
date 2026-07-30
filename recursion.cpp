// recursion = một kĩ thuật chương trình nơi một hàm 
//             gọi lại nó từ bên trong 
//             phá vỡ một khái niêm phức tạp thành một bước đơn dễ đọc

// lợi thế = ít code hơn và sạch hơn
//           hữu dụng cho xắp xếp và thuật toán tìm kiếm 

// bất lợi = sử dụng nhiều dữ liệu hơn, chậm hơn

// recursion = a program technique where a function 
//             invokes itself from within
//             break a compex concep into a readable single step 

// advantage = less code and cleaner
//             useful for sorting and searching algorithms 

// disadvantage = use more memory, slower

#include<iostream>
int factorial(int num);
int main(){

    std::cout<<factorial(7);
    return 0;
}
int factorial(int num){
if(num > 0){
    return num * factorial(num - 1);
}
else{
    return 1;
}
}

