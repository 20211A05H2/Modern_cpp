#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Engine.h"
#include<vector>
void Createobjects(std::vector<Engine*>&arr);
void DisplayObjects(std::vector<Engine*>&arr);
 float Averagehorsepower(std::vector<Engine*>&arr);
 float FindTorqueById(std::vector<Engine*>&arr,int id);
 float FoundHorsePowerForTorqueEngine(std::vector<Engine*>&arr);
#endif // FUNCTIONALITIES_H
