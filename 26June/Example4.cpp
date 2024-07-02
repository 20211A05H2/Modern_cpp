/*
  std::reference_wrapper<T>
    This is a wrapper class to "hold"
    reference of type T
*/

#include<iostream>
#include<functional>
#include<vector>
void Magic(int& data)
{
  std::cout<<data;
}

int main()
{
int n1=10;
//int& ref=n1;
std::reference_wrapper<int>ref=n1;//ref is a reference to n1
//ref is an alternate name for n1 in the main function
Magic(n1);
std::reference_wrapper<int>arr[1]{ref};
std::vector<std::reference_wrapper<int>>v1;
std::cout<<v1[0].get();//get the value inside the wrapper in 0 th position of vector
}

