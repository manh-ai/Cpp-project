#include<iostream>
int main(){
    std::string foods[][3]  = {{"buncha", "pho", "banhmi"},
                               {"burger", "fried_chien", "pizza"},
                               {"sushi", "ramen", "whale_meat"}};
    int rows = sizeof(foods)/sizeof(foods[0]);
    int columns = sizeof(foods[0])/sizeof(foods[0][0]);
    for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
    std::cout<<foods[i][j]<<" ";
        }std::cout<<"\n";
    }
    return 0;
}