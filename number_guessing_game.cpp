#include<iostream>
int main(){
    int num;
    int guess;
    int tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    std::cout<<"********** NUMBER GESSING GAME *********"<<"\n";
    do{
    tries++;
    std::cout<<"enter your guess (1-100) : ";
    std::cin>>guess;
    if(guess < num){
        std::cout<<"Too low"<<"\n";
    }
    else if (guess > num){ 
         std::cout<<"Too high"<<"\n";
    }
    else{
        std::cout<<"CORRECT!"<<"\n";
    }

}while(guess != num);
    std::cout<<"*****************************"<<"\n";
    std::cout<<"you have tried : "<<tries<<" times";
    return 0;
}
