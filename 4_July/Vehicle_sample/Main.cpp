#include<iostream>
#include "Car.h"
#include "Bike.h"
#include "Operations.h"

int main()
{
  Operations::CreateCarsandBikes();
  //execute parrale functions
  Operations::Mapthreads();
  Operations::Jointhreads();

  //execute serial functions
   std::optional<unsigned int> result1=Operations::FindSeatCountbyId("xyz123");
  if(result1.has_value())
  {
    std::cout<<"seat count for id is:"<<result1.value();
  }

 std::optional<vrType> result2=Operations::ReturnMatchingInstances("ABC123");
  if(result2.has_value())
  {
    std::cout<<"Matching instance found"<<"\n";
    std::visit([](auto&& val){std::cout<<*val<<"\n";},result2.value());
  }
  Operations::Deallocate();

}