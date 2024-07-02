/*  

std::bind allows us to  "refactor"/"repurpose"/"remodel" an existing function to create "partially-implementated"function 

*/
/*   cp -r source destination
     strcpy(destination,source)


     old parameter sequence(sr.no,state,duration,after-duration_state)
     new paramter sequence(sr.no,duration,state,after_duration_state)

     g(x) is a partial function implemented function on f(x,y) where y is 4
*/

#include<iostream>
#include<functional>

void formula(int x,int y,int z)
{
    std::cout<<"x="<<x<<"\n";
    std::cout<<"y="<<y<<"\n";
    std::cout<<"z="<<z<<"\n";
    std::cout<<((x+y)-z);
}
int main()
{
    // formula(10,20,30);
    // formula(20,30,40);

    // auto partial_formula=std::bind(&formula,10,std::placeholders::_1,std::placeholders::_2);

    // partial_formula(20,10);

    // auto swapped_formula=std::bind(&formula,std::placeholders::_2,std::placeholders::_3,std::placeholders::_1);
    //                                           //x                    //y                     //z
                                                //20                    //30                    //10
    // swapped_formula(10,20,30);
    
    auto swapped_formula=std::bind(&formula,100,200,std::placeholders::_3);

    swapped_formula(10,20,30);//10 will be discraded 20 will be taken 

    auto partial_formula=std::bind(&formula,10,std::placeholders::_1,std::placeholders::_2);

    // partial_formula(20,10);


}