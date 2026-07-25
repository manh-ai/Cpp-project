// break = thoát ra khỏi vòng lặp
// continue = bỏ qua vòng lặp hiện tại

// break = break out of a loop
// continur = skip curent iteration

#include<iostream>
int main(){ 
    for(int i = 0; i<=20; i++){
        if(i == 13){
            continue;
        }
        std::cout<<i<<"\n";
    }
    return 0;
}