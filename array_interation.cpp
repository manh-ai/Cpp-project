#include<iostream>
int main(){
    std::string name[] = {"manh", "hiep", "bao", "david"};
    for(int i = 0; i < (sizeof(name)/sizeof(std::string)); i++){
    std::cout<<name[i]<<" ";
    }
    return 0;
}