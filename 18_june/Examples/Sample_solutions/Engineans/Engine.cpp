#include<iostream>
#include "Engine.h"
#include "Functionalities.h"
#include "Exeption.h"
int main()
{
    int N;
    std::cout<<"Enter N Value:";
    std::cin>>N;
    Engine *heaparr[N];
    Createobjects(heaparr,N);
    int result=Averagehorsepower(heaparr,N);
    std::cout<<"Average"<<result;
    std::cout<<"Enter user ID";
    int id;
    std::cin>>id;
   int t= FoundHorsePowerForTorqueEngine(heaparr,N);
    DisplayObjects(heaparr,N);
    
    
try
{
    FindTorqueById(heaparr,N,id);
}
catch(const std::exception& e)
{
    
    std::cerr << e.what() << '\n';
}


}