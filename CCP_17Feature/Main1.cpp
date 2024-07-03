#include "Employee.h"
#include "Businessowner.h"
#include<variant>
using vrType=std::variant<Businessowner,Employee>;
void Display(const vrType& v)
{
   std::visit([](auto&& val){std::cout<<val<<"\n";},v);//1st one is the logic need to perform 2nd parameter is the one you want to visit
   
}
int main()
{
    std::variant<Businessowner,Employee>vr;
    Employee e1{"Harshitha",9000.0f};
    Businessowner b1{"Hasini",8000.0f};

    vr=e1;
    Display(vr);
    vr=b1;
    Display(vr);
}