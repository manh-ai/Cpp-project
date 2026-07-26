#include<iostream>
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance = 175;
    int choice = 0;
 do{std::cout<<"************\n";
    std::cout<<"mr.manh bank\n";
    std::cout<<"************\n";
    std::cout<<"1.show balance\n";
    std::cout<<"2.deposit money\n";
    std::cout<<"3.withdraw money\n";
    std::cout<<"4.exit\n";
    std::cout<<"enter your choice : ";
    std::cin>>choice;
    switch(choice){
    case 1: showbalance(balance);
    break;
    case 2: balance = balance + deposit();
            showbalance(balance);
    break;
    case 3: balance = balance - withdraw(balance);
            showbalance(balance);
    break;
    case 4: std::cout<<"thank for visisting\n";
    break;
    default:std::cout<<"invalid choice\n";
}
}
while(choice != 4);
 return 0;
}
void showbalance(double balance){
    std::cout<<"your balance is : "<<balance<<"\n";

}
double deposit(){
    double amount = 0;
    std::cout<<"enter amount to be deposited : ";
    std::cin>>amount;
    if(amount > 0){
        return amount;}
        else{
            std::cout<<"that is not valid amount\n";
            return 0;
        }
}
double withdraw(double balance){
     double amount = 0;
    std::cout<<"enter amount to be withdrawn : ";
    std::cin>>amount;
    if(amount > balance){
        std::cout<<"insufficient funds\n";
        return 0;
    }
    else if (amount < 0){
            std::cout<<"that is not valid amount\n";
            return 0;
        }
        else{
            return amount;
        }
}

