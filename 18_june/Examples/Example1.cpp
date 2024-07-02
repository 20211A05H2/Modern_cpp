/*
  Employee
   int id, string name, string designation ,categorical Department float salary


*/
#include <iostream>
#include "Department.h"
#include<vector>
class Employee
{
private:
    unsigned int m_id{0};   // 0 represents default value of id
    std::string m_name{""}; // default value for name
    std::string m_designation{"executive"};
    Department m_dept{Department::IT};
    float salary{0.0f};

public:
    Employee() = default; // to pick the above give default values
    ~Employee() = default;
    Employee(const Employee &other) = delete; // disable copy   (my datatype employee cannot be cpoied)
    Employee &operator=(const Employee &other) = delete;
    Employee(Employee &&other) = delete;//move constructor
    Employee operator=(Employee &&other) = delete;
    Employee (unsigned int id,std::string name,std::string des,Department dept,float salary):m_id{id},m_dept{dept},m_name{name},m_designation{des}//member list initialization
    {

    }
    
};
createobject(std::vector<Employee *>ptr)
{

}
int main()
{
    Employee* ptr{nullptr};//declaration of pointer ptr of type Employee
    createobject(ptr);
    ptr=new Employee();
    ptr=new Employee(101,"Harshith","Talent",Department::ACCOUNTS,43.4456);
    int n1{100};
    int* ptr1{nullptr};
    int arr[3]{1,2,3};
    Employee e1{11,"dshjgf","Eghhdc",Department::ADMIN,2344.43};
    //std::list<int>data{1,2,3,4,5};

}
