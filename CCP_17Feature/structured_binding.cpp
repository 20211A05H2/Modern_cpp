#include<iostream>
#include<array>

int main()
{
    std::array<int,2> arr{23,3232};
    auto[salary,age]=arr;
    std::cout<<salary<<"\n"<<age;
}