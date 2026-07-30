// function template = mô tả một hàm trông trông thế nào.
//                     có thể được sử dụng để tạo nhiều hàm nạp chồng nhất có thể
//                     mỗi hàm sử dụng các kiểu dữ liệu khác nhau

//                     VD. "nó giống như một máy cắt cookie..."
//                     "Cookies thì cùng hình dáng, nhưng bột được sử dụng có thể khác"

// function template = describe what a function look like. 
//                     can be used to generate as many overloaded functions as needed
//                     each using different data type

//                     Ex. "It's like a cookie-cutter"
//                     "Cookies is the same shape, but dough can be used different"


#include<iostream>
template<typename m, typename n>
auto max(m x, n y){
    return(x>y)? x:y;
}
int main(){
    std::cout<<max('4',67);
    return 0;
}