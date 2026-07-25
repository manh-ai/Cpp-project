//do while loop = làm một vài khối mã trước,
//                 sau đó lặp lại nếu điều kiện đúng

//do while loop = do some block of code first,
//                then repeat again if condition is true
#include<iostream>
int main(){
    int number;
do{
    std::cout<<"enter positive number : ";
    std::cin>>number;
}while(number < 0);
    return 0;
}