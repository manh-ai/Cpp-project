#include<iostream>
int searchArray(int array[], int size, int element);
int main(){
    int number[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(number)/sizeof(int);
    int myNum;
    int index; 

    std::cout<<"enter your number : "<<"\n";
    std::cin>>myNum;

    index = searchArray(number, size, myNum);

    if(index != -1){
    std::cout<<myNum<<" is at index "<<index;
    }
    else{
    std::cout<<"your number is not found";
    }
    return 0;
}
int searchArray(int array[], int size, int element){
for(int i = 0; i < size; i++){
    if(array[i] == element){
        return i;
    }
}return -1;
}