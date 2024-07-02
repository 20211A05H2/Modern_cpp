#include "function.h"
#include <iostream>

void createEmployee(employee **emp, project **pro, int size)
{
    std::string prid;
    unsigned int teamsize;
    float bud;
    for(int i = 0; i < size; i++){
        std::cin >> prid;
        std::cin >> teamsize;
        std::cin >> bud;
        pro[i] = new project(prid, teamsize, bud);
    }
    int id;
    std::string name;
    for(int i = 0; i < size; i++){
        std::cin >> id;
        std::cin >>name;
        emp[i] = new employee(id, name, *pro[i]);
    }
}

void printObject(employee **emp, int size)
{
    if(size == 0){
        return;
    }
    for(int i = 0; i < size; i++){
        if(emp[i]){
            std::cout << *emp[i] << std::endl;
        }
    }
}

void deallocate(employee **emp, project **pro, int size)
{
    for(int i = 0; i < size; i++){
        delete pro[i];
        delete emp[i];
    }
}
