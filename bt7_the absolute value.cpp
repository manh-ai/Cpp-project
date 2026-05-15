#include<iostream>
using namespace std ;
main(){
    int a;
    cin>>a;
    bool n=(a<0);
int b=(a - 2*n*a);
cout<<"the absolute value is "<<b;
    return 0;
}