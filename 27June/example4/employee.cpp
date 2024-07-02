#include "employee.h"

employee::employee(int id, std::string name, project &pt) : ptr(pt) //before entrenring thre constructor we need to initialize all reference data members
{
    _empid = id;
    empname = name;
}

employee::~employee()
{
    std::cout << "delete employee " << this->_empid << std::endl;
}

