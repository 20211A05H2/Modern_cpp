#include<iostream>
#include<functional>

void formula(int& x,int y,int z)
{
    std::cout<<x+y+z;
}
int main()
{
    int a=10;
    auto bind_formula=std::bind(&formula,a,100,std::placeholders::_1);
    bind_formula(99);//formula(a,100,99)
    //called formula(by copiying x,assessingto yans assigning 99 to z)
    //create a refernce warpper for a variable to be passed in place of x
    auto bind_formula=std::bind(&formula,std::ref(a),100,std::placeholders::_1);
     bind_formula(99);
     //std::ref takes a lvalue and immediatly converts into a reference wrapper 
}