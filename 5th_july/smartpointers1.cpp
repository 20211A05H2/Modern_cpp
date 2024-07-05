#include<iostream>
#include<memory>
/*
  the pointers which will deallocte itself
      they are
        1.Unique pointer
        2.Share poinetr
        3.
 */
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
int main()
{
    int32_t x{10};
    char grade{'A'};
    // int* ptr=(int*)malloc(4);
    // char* ptr2=(char*)malloc(1);
    std::unique_ptr<int>ptr1{(int*)malloc(4)};
    std::unique_ptr<int>ptr2{new int()};
    std::unique_ptr<char>ptr3{(char*)malloc(1)};
    if(true)
    {
        std::cout<<*ptr1<<"\n";
            }
    else{
        throw ;//execption will throw out of the function
    }
}

/*

    stack main function


        0x108H   ptr1   0x242117H
        0x104H   grade  'A'
        0x100H   x      10

*/
/*
    void CalculateResult(int value)
    {
      //allocate something on heap
      ptr=heap memory address
      if(val==condition)
      {
         do something with ptr
         //action to do
         if(condition)
         {
           take action
         }
         else if
         {
         }
         else if
         {
         }
         else
         {
         }

      }
      else
      {  delete ptr;
         throw exception
      }
    }

    the pointers which will deallocte itself
      they are
        1.Unique pointer
  
*/