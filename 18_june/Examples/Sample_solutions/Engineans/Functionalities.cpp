#include <iostream>
#include "Functionalities.h"
#include "Exeption.h"
#include "Engine.h"
void Createobjects(Engine **arr, int N)
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
 // std::cout<<arr[0]+arr[1];
}
