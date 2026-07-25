#include<iostream>
void pizza();
void pizza(std::string topping1, std::string topping2);
int main(){
   
    pizza("cheese", "sausage");
    return 0;
}
void pizza(){
    std::cout<<"here is your pizza!";
}
void pizza(std::string topping1){
    std::cout<<"here is your "<<topping1<<" pizza!";
}
void pizza(std::string topping1, std::string topping2){
    std::cout<<"here is your "<<topping1<<" and "<<topping2<<" pizza!";
}