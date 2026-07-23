// if statement = làm cái gì đó nếu một trường hợp là đúng.
//                nếu không, thì không làm nó.

// if statement = do somthing if a condition is true.
//                if not, then don't do  it.

#include<iostream>
int main(){
int age;
std::cout<<"enter your age : ";
std::cin>>age;
if(age>100){
    std::cout<<"you are too old to enter this site!";
}
else if(age>=18){
    std::cout<<"welcome to this site!";
}
else if(age<0){
    std::cout<<"you haven't been born yet.";
}
else{
    std::cout<<"you are not old enough to enter this site!";
}
    return 0;
}