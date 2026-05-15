#include<iostream>
using namespace std;
int main (){
float a,b;
char c;
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
cout<<"phep tinh :";
cin>>c;
switch(c){
case '+' :
cout<< "ket qua a+b la :"<< a+b;
break;
case '-' :
cout<< "ket qua a-b la :"<< a-b;
break;
case '*' :
cout<< "ket qua a*b la :"<< a*b;
break;
case '/' :
if(b != 0)cout<< "ket qua a:b la :"<< a/b;
else cout<<"khong the thuc hien phep tinh";
break;
default :
cout<<"phep tinh khong hop le";

}
}
