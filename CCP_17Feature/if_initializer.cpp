/*
  definition fn()
  {
  
  
  }

main()
{
  bool flag fn();
  if(flag)
  {
    ////
  }
  else
  {
   /////
  }
}
*/

#include<iostream>
bool CHeckdivisibleby3(int32_t num)
{
  return num%3==0;
}
int main()
{
    int32_t n1{10};
    if(bool flag=CHeckdivisibleby3(n1);flag)
    {
        std::cout<<"number divisible by 3\n";
    }
    else{
        std::cout<<"flag is not set at:"<<std::boolalpha<<flag<<"number not divisible\n";
    }
    //std::cout<<"Cannot access flag now "<<flag;
}