// fill() = điền vào một dải phần tử với giá trị đăc biệt
// fill(bắt đầu, kết thúc, giá trị) 

// fill() = Fills a range of elements with specified value
// fill(bigin, end, value)

#include<iostream>
int main(){
    const int size = 99;
    std::string foods[size];
    fill(foods, foods+((size)/3), "banh cuon");
    fill(foods+((size)/3), foods+((size)/3)*2, "pho");
    fill(foods+((size)/3)*2, foods+size, "bun cha");
   for(std::string food:foods){ 
    std::cout<<food<<"\n";
}
return 0;
}