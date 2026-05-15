#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
bool cor = a^b;
cout<<boolalpha;
cout<<"a xor b="<<cor ;
return 0;
}
