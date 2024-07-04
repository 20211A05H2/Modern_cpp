/*
  elision:not do something,not perform something,ignore/avoid something

  Granteed Copy Elision:cpp17

 */

#include<iostream>
class Data
{
private:
  int m_value;
public:
 Data()=default;
 Data(const Data&)=delete;
 Data(Data&&)=default;
 Data& operator=(const Data&)=delete;
  Data& operator=(const Data&&)=delete;
   ~Data()=default;
   explicit Data(int val):m_value{val}{};//explicit is cannot be used for type conversions

   friend std::ostream &operator<<(std::ostream &os, const Data &rhs) {
     os << "m_value: " << rhs.m_value;
     return os;
   }
   
};
Data Magic()
{
    Data obj{100};
  return obj;
}

int main()
{
   Data d1=Magic();//initializing by the return value of the magic function
}


