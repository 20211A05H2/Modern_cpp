#include <iostream>
class Vehicle
{
private:
    std::string m_id{""};
    std::string m_model_name{""};

public:
    Vehicle() = delete;
    ~Vehicle() = default;
    /* Vehicle class that take one const lvalue references to a vahicle as a parameter*/
    Vehicle(const Vehicle &other) = delete;
    Vehicle(std::string id,std::string name):m_id{id},m_model_name{name}{}

};
int main()
{
    Vehicle v1{"100","Dzire"};//mini form initialiazation
   // Vehicle v2{v1};//v2[101][Dzire]
   // Vehicle v3=v1;//works2
    int n1=10;
    int n2=20;
    n2=n1;//copy n1 into n2 after n2 was already initialized 
    Vehicle v3{};
    v3=v1;
}
