
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
Data Creator()
{
   return Data{100};
}
Data Absorver(Data d1)
{
  std::cout<<d1<<"\n";
  return d1;
}

int main()
{
   Data obj=Absorver(Creator());
   std::cout<<obj<<"\n"; 
}


