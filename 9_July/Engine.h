#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
#include "EngineType.h"
class Engine
{
private:
     std::string engine_id{""};
     EngineType engine_type{0};
     float engine_cc{0.0f};
     float engine_torque{0.0f};
     int enginr_horsepower{0};

public:
    Engine(/* args */)=default;
    ~Engine()=default;
    Engine(const Engine&)=delete;
    Engine(Engine&&)=delete;
    Engine &operator=(const Engine&)=delete;
    Engine &operator=(Engine&&)=delete;
};




#endif // ENGINE_H
