// pseudo_random = không hoàn toàn ngẫu nhiên(nhưng gần)
// pseudo_random = not truly random (but close)

#include<iostream>
int main(){
     srand(time(NULL));
    // int n = rand(); // this line of code will give you a number from 0 to 32767

// random dice game
int x = (rand() % 6)+1;
std::cout<<x;
    return 0;
}