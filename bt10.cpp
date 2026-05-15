#include<iostream>
using namespace std;
main(){
int a;
cout<<"enter the number of the month :";
cin>>a;
switch(a){
case(1,3,5,7,8,10,12):
cout<<"this month have 31 days.";
break;
case(2):
cout<<"this month have 28 days.";
break;
case(4,6,9,11):
cout<<"this month have 30 days.";
break;
default :
cout<<"khong hop le .";}





}