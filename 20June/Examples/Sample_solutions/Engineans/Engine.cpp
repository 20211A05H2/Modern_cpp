#include<iostream>
#include "Engine.h"
#include "Functionalities.h"
#include "IdNotFoundException.h"
#include "NoValidEngineFoundException.h"

int main()
{
  std::vector<Engine*>engines;
  Createobjects(engines);

  try
  {
    
        Averagehorsepower(engines);
    
  }
  catch(NoValidEngineFoundException e)
  {
    std::cerr << e.what() << '\n';
  }
  try
  {
    FindTorqueById(engines);
  }
  catch(IdNotFoundException ex)
  {
    std::cerr << ex.what() << '\n';
  }
  FoundHorsePowerForTorqueEngine(engines);
  
  
  
}