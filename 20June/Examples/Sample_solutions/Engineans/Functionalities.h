#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Engine.h"
#include <vector>
//using keyword allow you to shorten data type example bellow
using Container=std::vector<Engine*>;
void Createobjects(Container& engines);
void DisplayObjects(Container& engines);
float Averagehorsepower(Container& engines);
float FindTorqueById(Container& engines, int id);
float FoundHorsePowerForTorqueEngine(Container& engines);
#endif // FUNCTIONALITIES_H
