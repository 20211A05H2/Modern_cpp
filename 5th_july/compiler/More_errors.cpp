#include<iostream>
#include<thread>

void Formula(int& val/*//non const lvalue referencedoes not accept rvalue */,float factor,const std::string& name )
{
    std::cout<<"Absolutely important work!";
}
int main()
{
    int n1{10};
std::thread t1{&Formula,std::ref(n1),11.3f,"abc"};//accepts all parameters but actual parameters are checked by middle man
// static assertion failed: std::thread arguments must be invocable after conversion to rvalues
}
//while using non static function 1st parameter must be an object
//must follow the rules of thread