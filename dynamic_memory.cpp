// bộ nhớ động = bộ nhớ mà được phân bổ sau chương trình
//               thì đã được biên soạn và chạy.
//               sử dụng toán tử 'new' để phân bổ
//               bộ nhớ lên heap hơn là lên stack

//               hữu dụng khi chúng ta không biết bao nhiêu bộ nhớ 
//               chúng ta sẽ cần. làm chương trình của chúng ta linh hoạt hơn
//               đặc biệt khi nhận dữ liệu người dùng nhập

// dynamic memory = memory that is allocated after program
//                  is already compiled & running.
//                  Use the 'new' operator to allocate
//                  memmory in the heap rather than the stack

//                  Useful when we don't know how much memory 
//                  we will need. Makes our programs more flexible
//                  especially when accepting user input.

#include<iostream>
int main(){
    char *pGrade;
    int size;
    std::cout<<"how many grade enter in : ";
    std::cin>>size;
     pGrade = new char[size];
    for(int i = 0; i < size; i++){
    std::cout<<"enter the #"<<i + 1<<" grade : ";
    std::cin>>pGrade[i];
    }
    for(int j = 0; j < size; j++){
        std::cout<<pGrade[j]<<" ";
    }
    return 0;
}