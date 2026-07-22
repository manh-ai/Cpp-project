// kiểu chuyển dữ liệu = chuyển đổi một giá trị của một kiểu dữ liệu sang kiểu khác.
//            Inplicit = tự động
//            Explicit = đặt kiểu dữ liệu mới đằng trước giá trị

// type conversion = conversion a value of one data type to another.
//            Inplicit = automatic
//            Explicit = precede value with a new data type (int)

#include<iostream>
int main(){
    using std::cout;
    double pi = (int) 3.14; // explicit
    double x = 6.7;
    int y = x;
    char u = 99;
    //cout<<pi<<'\n';
   //cout<<y<<'\n';
  //cout<<u;
 
 int corrects = 8;
 int questions = 10;
 cout<<"your scores are :"<<((double)corrects/(double)questions)*100<<"%";
    return 0;
}