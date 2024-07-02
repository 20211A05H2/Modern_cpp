/*
   1.CPU:central prossessing unit -set of hardware responsible for executing tasks in a computing system

   2.System:Any computing device

   3.Processor:Hardware chip (made of silicon) designed for executing instructions given by the user of the computer
   
   4.socket:point on the motherboard whether proseesor in connected

   5.core:every process is divided internally into units as "Cores" each core can execute instructions from one  "process " at any given time

   6.Process:A running task on the system



  
*/

#include<iostream>
#include<vector>
#include<functional>
using Operations=std::function<void(int number)>;
void Adaptor(Operations fn,const std::vector<int>& data)
{
    for(int val:data)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        fn(val);
    }
}
void square(int number)
{
  std::cout<<number*number;
}
int main()
{
    auto cube_fn=[](int number){std::cout<<number*number*number;};
}