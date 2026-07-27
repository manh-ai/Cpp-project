#include<iostream>
double gettotal(double prices[], int size);
int main(){
    double prices[] ={12.35, 6.4, 8.97, 15.48, 9.06};
    int size = sizeof(prices)/sizeof(double);
    double total = gettotal(prices, size);
    std::cout<<"$ "<<total;
    return 0;
}
double gettotal(double prices[], int size){
    double total = 0;
for(int i = 0; i < size; i++){
    total += prices[i];
} return total;
}