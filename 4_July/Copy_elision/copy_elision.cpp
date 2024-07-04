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
 Data(Data&&)=delete;
 Data& operator=(const Data&)=delete;
  Data& operator=(const Data&&)=delete;
   ~Data()=default;
   explicit Data(int val):m_value{val}{};//explicit is cannot be used for type conversions

   friend std::ostream &operator<<(std::ostream &os, const Data &rhs) {
     os << "m_value: " << rhs.m_value;
     return os;
   }
   
};
void Magic(Data d1)
{
  std::cout<<d1<<"\n";
}

int main()
{
  //Data d1{11};
 // Magic(d1);//this wil not work bexause of copy is disabled
 // Magic(99);//not wor because conversion in disabled

  Magic(Data{100});//rvalue //an rvalue of typr data is used to initialize an object of type Data 
                                //compiler simply refactors the code as Data d1{100}
}


