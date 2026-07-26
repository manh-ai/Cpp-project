#include<iostream>
int main(){
    std::string computer;
    std::string choice;
    std::cout<<"enter your choice (rock, paper, scissors) : ";
    std::getline(std::cin, choice);
    srand(time(NULL));
    int r = (rand() % 3) + 1;
    if(r == 1){
        computer = "scissors";
    }
     if(r == 2){
        computer = "rock";
    }
     if(r == 3){
        computer = "paper";
    }

    std::cout<<"you chose      : "<<choice<<"\n";
    std::cout<<"computer chose : "<<computer<<"\n";
    std::cout<<"***********************\n";

    if(computer == "scissors"){
    if(choice == "scissors"){
        std::cout<<"draw";}
    else if(choice == "rock"){
        std::cout<<"you win!";}
    else if(choice == "paper"){
        std::cout<<"you lose!";}
    else{
        std::cout<<"in valid choice !";}}

     if(computer == "rock"){
    if(choice == "scissors"){
        std::cout<<"you lose!";}
    else if(choice == "rock"){
        std::cout<<"draw";}
    else if(choice == "paper"){
        std::cout<<"you win!";}
    else{
        std::cout<<"in valid choice !";}}

     if(computer == "paper"){
    if(choice == "scissors"){
        std::cout<<"you win!";}
    else if(choice == "rock"){
        std::cout<<"you lose!";}
    else if(choice == "paper"){
        std::cout<<"draw";}
    else{
        std::cout<<"in valid choice !";}}
    return 0;
}