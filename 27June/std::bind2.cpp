#include<iostream>
#include<functional>

int main()
{
    auto fn=[](int32_t number,int32_t factor)
    {
        return number*factor;
    };

    auto partially_implemented_fn=std::bind(fn,100,std::placeholders::_1);

    std::cout<<partially_implemented_fn(20);
    std::cout<<partially_implemented_fn(20,12,12,12);

    

}