//typedef = từ khóa dành riêng được sử dụng để tạo một tên bổ sung
//         (alias) cho một kiểu data khác
//         mã định danh mới cho một kiểu dữ liệu tồn tại
//         giúp dễ đọc và giảm lỗi.
//         sử dụng khi có một lợi ích rõ ràng
//         thay thế với 'using' (hoạt động tốt hơn với templates)


//typedef = resered keyword used to create an additional name
//          (alias) for another data type.
//          new identifier for an existing data type
//          helps readability and reduces typos.
//          use when there is a clear benefit
//          replace with 'using' (work better with templates)

#include<iostream>
//typedef std::string string;
//typedef int m;
using string = std::string;
using m = int;
int main(){
    
    string manh = "manh";
    m m = 2;
    std::cout<<manh;
    std::cout<<m;
    return 0;
}