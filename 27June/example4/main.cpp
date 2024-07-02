#include "function.h"

int main(){
    employee *emp[3];
    project *pro[3];
    createEmployee(emp, pro, 3);
    printObject(emp, 3);
    deallocate(emp, pro, 3);
}