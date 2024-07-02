#include<iostream>
#include<vector>
#include<list>
#include<array>

template<typename T>
void Display(T& data)
{
  for(int val:data)
  {
    std::cout << val <<"\n";
  }
}
int main()
{
    std::list<int> data1{10,11,12};

    std::vector<int>data2{10,11,12};
    
    std::array<int,3> data3{10,11,12};

    Display<std::list<int>>(data1);
    //Display<std::vector<int>>(data2);
    //Display<std::array<int,3>>(data3);
}