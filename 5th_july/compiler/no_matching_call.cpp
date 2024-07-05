#include<iostream>
void Display(char grade)
{
    std::cout<<grade;
}
void Demo(int n1,std::string name)
{
   std::cout<<n1<<name;
}
void Temp(int n1,int* ptr,std::string,char&& grade,const bool& flag)
{
   std::cout<<n1<<ptr<<grade<<flag;
}
int main()
{
    //Display("A");//error due to parameter passed is const char*-"A"
    Display('A');
    //Demo("abc",66);//ordering should follow
    /*Demo is a function in which the parameters  passed like 1st parameter and 2nd parameters non const string value and non const integer value and returns void*/
    //tally the declaration and definition of a function
    bool flag{false};
    std::string val{"ABC"};
    char grade{'A'};
    Temp(10.0f,new int(10),val,'A',flag);
    //& accept reference
    //&& with actual data means rvalue reference
    //const bool &flag is which accept lvalue as refrence and rvlaue for initialize 

}