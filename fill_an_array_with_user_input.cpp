#include<iostream>
int main(){
    std::string foods[5];
    int size =sizeof(foods)/sizeof(std::string);
    std::string temp;
    for(int i = 0; i < size; i++){
        std::cout<<"'enter a food you want or enter 'q' to quit : ";
        std::getline(std::cin, temp);
    if(temp == "q"){
        break;
    }
    else{
        foods[i] = temp;
    }
    }
    std::cout<<"you like the following foods : "<<"\n";
    for(std::string food:foods){
        std::cout<<food<<"\n";
    }
    return 0;
}