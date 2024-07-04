/*
   
*/
#include<iostream>
#include<list>
#include<thread>
#include<functional>
#include<mutex>
std::mutex mt;
using ThreadContainer=std::list<std::thread>;
using DataContainer=std::list<int32_t>;
using Functionwrapper=std::function<void(int32_t)>;
void MapThreads(ThreadContainer& threads,const DataContainer& data,Functionwrapper fn)
{
 
  for(int32_t n:data)
  {
   threads.emplace_back(fn,n);
  }
}
void JoinThread(ThreadContainer& threads)
{
    for(std::thread& th:threads)
    {
        if(th.joinable())
        {
            th.join();
        }
    }
}
int main()
{
    ThreadContainer threads{};
    DataContainer data{11,22,33,44};
    auto f1=[](int32_t number)
    {
        mt.lock();
        std::cout<<number*number<<"\n";
         mt.unlock();
    };
    MapThreads(threads,data,f1);
    JoinThread(threads);
}

