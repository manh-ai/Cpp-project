#include<iostream>
#include<ctime>
int main(){
srand(time(0));
int r = rand() % 5 + 1;
switch(r){
case 1 :
std::cout<<"you win a car";
break;
case 2 :
std::cout<<"you win a bike";
break;
case 3 :
std::cout<<"you win a motobike";
break;
case 4 :
std::cout<<"you win a laptop";
break;
case 5 :
std::cout<<"you win a phone";
break;
}
    return 0;
}