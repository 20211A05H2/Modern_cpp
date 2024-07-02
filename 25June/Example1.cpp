/*
  objective:I want to write an "adaptor" fuction which will accept
  a)vector of integer 32  bit numbers
  b)a function that accepts a single integer 32 value and returns void 

  Adaptor should 
  



*/
#include<iostream>
#include<vector>

void square(int32_t number)
{
    std::cout<<number*number<<"\n";

}
void cube(int32_t number)
{
  std::cout<<number*number*number<<"\n";
}
int main()
{
    int n1=10;
    int *ptr=&n1;

    //function ka pointer --->address of a function
    void (*ptr)(int32_t)= &square;
    // (*ptr)(10);

    //if the user wants they can design their own function and use its logics to process


qa


}
/*  
  create an adaptor which accepts
  a)a data container of string values 
  b)a function with the following signature
     i)input parameter:one string by lvalues reference
     ii)output:void
  Adaptor should be used to perform operations on string values which are


  1)identify vowels
  2)print the last 3 characters of each string
  3)print the first non-vowel charector of vowel of each string

*/