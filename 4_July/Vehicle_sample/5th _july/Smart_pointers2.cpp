#include<iostream>
#include<memory>
//unique pointers using class
class Data
{
private:
  int m_value;
public:
 Data()=default;
 Data(const Data&)=delete;
 Data(Data&&)=delete;
 Data& operator=(const Data&)=delete;
  Data& operator=(const Data&&)=delete;
   ~Data()=default;
   explicit Data(int val):m_value{val}{};//explicit is cannot be used for type conversions

};
int main()
{
    std::unique_ptr<int>ptr1{(int*)malloc(4)};
    std::unique_ptr<int>ptr2{new int()};
    std::unique_ptr<char>ptr3{(char*)malloc(1)};
    std::unique_ptr<Data>ptr4{new Data{100}};
    //do not create a pointer of lvalue
}