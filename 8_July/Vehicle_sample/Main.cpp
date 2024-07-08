#include<iostream>
#include "Car.h"
#include "Bike.h"
#include "Operations.h"
#include<future>

int main()
{
  Operations::CreateCarsandBikes();
  //execute parrale functions
  Operations::Mapthreads();
  Operations::Jointhreads();

  //execute serial functions
   std::future<std::optional<unsigned int> >result1=std::async(Operations::FindSeatCountbyId,"xyz123");
   std::future<std::optional<vrType>>result2=std::async(Operations::ReturnMatchingInstances,"XYZ123");
   std::optional<unsigned int>res1=result1.get();
   std::optional<vrType>res2=result2.get();
  if(res1.has_value())
  {
    std::cout<<"seat count for id is:"<<result1.value();
  }

 std::optional<vrType> result2=Operations::ReturnMatchingInstances("ABC123");
  if(res2.has_value())
  {
    std::cout<<"Matching instance found"<<"\n";
    std::visit([](auto&& val){std::cout<<*val<<"\n";},result2.value());
  }
  Operations::Deallocate();

}