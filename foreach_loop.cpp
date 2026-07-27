//foreach loop = một vòng lặp giúp việc duyệt qua một tập dữ liệu có thể lặp lại dễ dàng hơn.
//foreach loop = a loop that eases the traversal over an iterable data set.

#include<iostream>
int main(){
    std::string cars[] = {"ferrari", "lambogini", "bugatti", "mustang", "cotvettege" };
    for(std::string car : cars){
        std::cout<<car<<"\n";
    }
    return 0;
}