#ifndef FUNCTION_H
#define FUNCTION_H

#include "employee.h"
#include "project.h"

void createEmployee(employee **emp, project **pro, int size);
void printObject(employee **emp, int size);
void deallocate(employee **emp, project **pro, int size);
#endif // FUNCTION_H
