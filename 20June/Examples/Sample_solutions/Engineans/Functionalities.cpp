#include <iostream>
#include "Functionalities.h"
#include "NoValidEngineFoundException.h"
#include "IdNotFoundException.h"
//#include "Engine.h"

void Createobjects(Container &engines)
{
  engines.emplace_back(new Engine(101, 34, 4343.434f));
  engines.emplace_back(new Engine(102, 34, 4343.434f));
  engines.emplace_back(new Engine(103, 34, 4343.434f));
  engines.emplace_back(nullptr); // segmentation fault
}
float Averagehorsepower(Container &engines)
{
  float total{0.0f};
  std::size_t count{0};
  //in modern cpp range based for loop -"FOR EACH LOOP"
  for(const Engine* e:engines)
  /*   for each const Engine pointer "called e" present in engines*/
  {
    if (e)
    {
      count++;
      total += e->horsepower();
    }
  }
  if(count==0)
  {
    throw NoValidEngineFoundException("all pointers are invalid");
  }

   return total / count;
}

float FindTorqueById(Container &engines,unsigned int id)
{
   bool atleastonevariable{false};
   for(const Engine* e:engines)
   {
        if(e)
        {
          atleastonevariable=true;
          if(e->id()==id)
          {
            return e->torque();
          }
        }
   }
   if(!atleastonevariable)
   {
    throw IdNotFoundException("invalid id");
   }
   //return 0.0f;
   
}

float FoundHorsePowerForTorqueEngine(Container &engines,unsigned int id)
{
  bool count{false};
  float currentmintorque{engines[0]->torque()};
  std::size_t idexofmintorque{0};//first position is min assume
  std::size_t k=0;
  for(const Engine* e:engines)
  {
    if(e)
    {
      count=true;
      if(e->torque()<currentmintorque)
      {
        currentmintorque=e->torque();
        idexofmintorque=k;
      }
      
    }
    k++;
  }
}

/*void Createobjects(Engine **arr, int N)
{
  for (int i = 0; i < N; i++)
  {
    int id = 0;
    int hp = 0;
    float torque = 0.0f;
    std::cout << "Enter id";
    std::cin >> id;
    std::cout << "Enter horsepower";
    std::cin >> hp;
    std::cout << "Enter torque ";
    std::cin >> torque;

    arr[i] = new Engine(id, hp, torque);
  }
}

void DisplayObjects(Engine **arr, int N)
{
  for (int i = 0; i < N; i++)
  {
    std::cout << *arr[i] << "\n";
  }
}
float Averagehorsepower(Engine **arr, int N)
{
  int result = 0.0f;
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    result = result + arr[i]->horsepower();
    count++;
  }
  return result / count;
}

float FindTorqueById(Engine **arr, int N, int id)
{
  bool flag = false;
  float t = 0.0f;
  for (int i = 0; i < N; i++)
  {
    if (arr[i] && arr[i]->id() == id)
    {
      flag = true;
      t = arr[i]->torque();
    }
  }
  if (!flag)
  {
    throw IdNotFound("invalid user\n");
  }
  return t;
}
// ENgine with minimum torque and return its horsepower

float FoundHorsePowerForTorqueEngine(Engine **arr, int N)
{
  int min = arr[0]->torque();
  for (int i = 1; i < N; i++)
  {
    if (arr[i]->torque() < min)
    {
      min = arr[i]->torque();
    }
  }
  return min;
  //std::cout<<arr[0]+arr[1];
}*/


