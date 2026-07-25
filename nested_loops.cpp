// nested loop = một vòng lặp ở trong một vòng lặp khác 

// nested loop = a loop inside of another loop

#include<iostream>
int main(){
// rectangle(hình chữ nhật)
int rows;
int columns;
char symbol;

std::cout<<"enter number of rows : ";
std::cin>>rows;

std::cout<<"enter number of column : ";
std::cin>>columns;

std::cout<<"enter symbol : ";
std::cin>>symbol;

for(int i=0; i<=rows; i++){
 for(int j=0; j<=columns; j++){
    std::cout<<symbol;
 }std::cout<<"\n";
}
    return 0;
}