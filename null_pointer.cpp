// Null value = một giá trị đặc biệt có nghĩa là một thứ gì đó không có giá trị
//              khi một con trỏ giữ một giá trị null,
//              con trỏ đó không chỉ vào cái gì (giá trị null)

// null ptr = từ khóa đại diện một hằng con trỏ null

// nullptrs thì hữu dụng khi xác định liệu một địa chỉ 
// có thành công gán vào một con trỏ

// khi sử dụng con trỏ, cẩn thận rằng code của bạn không
// truy suất giá trị qua con trỏ null hoặc chỉ đến bộ nhớ trống 
// cái này sẽ là nguyên nhân hành động không xác định

// Null value = a value that means something has no value
//              when a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer)

// null ptr = a keyword represents a null pointer literal

// nullptrs is helpful when determining if an address 
// was successfully assigned to a pointer

// when using pointer, be careful your code insn't 
// dereferencing null or pointing to free memory
// this will cause undefined behavior



#include<iostream>
int main(){
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
    std::cout<<"not assigned\n";
    }
    else{
    std::cout<<"assigned\n";
    std::cout<<*pointer;
    }
    return 0;
}
