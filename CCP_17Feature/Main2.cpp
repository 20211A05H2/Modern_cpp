#include <iostream>
#include "Employee.h"
#include "Businessowner.h"
#include <variant>

/*
    Heap data on the heap
    dont use variant for "functional polymorphisim"
 */
using vrType = std::variant<Businessowner*, Employee*>;
void Display(const vrType& v)
{
    std::visit([](auto &&val)
               { std::cout << *val << "\n"; }, v);
}

int main()
{
    vrType v;
    v = new Businessowner("Harshith", 76978.78f);
    Display(v);
    v = new Employee("Harshith", 763543.78f);
    Display(v);
}