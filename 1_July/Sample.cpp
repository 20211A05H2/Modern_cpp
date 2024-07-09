#include<iostream>
#include<functional>
#include<array>
int data=11;

void Adaptor(std::function<int(int number)> fn,int data)
{
    std::cout<<fn(data)<<"\n";
}
int cube(int data)
{
  return data*data*data;
}int square(int data)
{
    return data*data;
}
int main()
{
    int data=10;
    auto fn=[](int number){return number*number;};
   // Adaptor(fn,data);
    Adaptor(cube,data);
    Adaptor(square,data);

}