#include<iostream>
enum class Gear//using enum class not allow to make auto conversions
{
    FIRST,
    SECOND
};
enum class Rank
{
    FIRST,
    SECOND
};
void Magic(int n1)
{
    std::cout<<n1*100;
}
int main()
{
   //FIRST;//problem 1 :not mandatory to prefix enum

   Gear g1=Gear::FIRST;
   Rank r1=Rank::FIRST;
   //if(g1==r1)//problem2 :enums of 2 different categories get compared on
   {
    std::cout<<"OOOhhh no";
   }
 //  Magic(r1);//problem3:auto conversion of enum to integer without conversion
}