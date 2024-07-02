#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "project.h"
#include <iostream>


class employee
{
private:
    int _empid;
    std::string empname;
    project &ptr;
public:
    employee(int id, std::string name, project &pt);
    ~employee();

    friend std::ostream &operator<<(std::ostream &os, const employee &rhs) {
        os << "_empid: " << rhs._empid
           << " empname: " << rhs.empname
           << " ptr: " << rhs.ptr;
        return os;
    }

    
};

#endif // EMPLOYEE_H
