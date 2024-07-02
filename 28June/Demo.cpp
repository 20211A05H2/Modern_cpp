#include<iostream>
#include<functional>
using Operation=std::function<int32_t(int32_t)>;
void Adaptor(Operation fn,int32_t value)
{
    std::cout<<fn(value);
}

int main()
{
    //takes one input of type int32_t value  and return int32_t value
    //the function should multiply input number by 100

    auto fn=[](int32_t n)->int32_t //trading return type//
    {return n*100;};//capture multple value by values or reference or one by value one by reference


    int n1=10;
     auto demo_fn=[n1](int32_t num){n1;return num*n1;};
     auto demo_fn=[&n1](int32_t num){n1=99;return num*n1;};
     auto demo_fn=[n1](int32_t num) mutable {n1=80;return num*n1;};



    //wrapper
    //if i want
    Adaptor(fn,10);


}