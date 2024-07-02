#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

class Engine
{
private:
    int _id{0};
    int _horsepower{0};
    float _torque{0.0};
    
public:
    Engine()=default;
    ~Engine()=default;
    Engine(Engine&&)=delete;
    Engine (const Engine& other)=delete;
    Engine& operator=(const Engine &other)=delete;
    Engine& operator=(Engine&&)=delete;

    Engine(int id,int horsepower,float torque):_id{id},_horsepower{horsepower},_torque{torque}
    {
    }

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    int horsepower() const { return _horsepower; }
    void setHorsepower(int horsepower) { _horsepower = horsepower; }

    float torque() const { return _torque; }
    void setTorque(float torque) { _torque = torque; }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
        os << "_id: " << rhs._id
           << " _horsepower: " << rhs._horsepower
           << " _torque: " << rhs._torque;
        return os;
    }
    float operator+(Engine other) //left side 
        {
            return this->_id+other._id;//return current objects salary + others salary
        } 

   
};

#endif // ENGINE_H
