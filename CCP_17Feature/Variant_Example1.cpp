#include<iostream>
#include<vector>
#include<variant>
//variants are catogorical types which allows "either-or" principle of Type
int main()
{
    int32_t n1{100};
    std::string s1{"Bhavani"};
    std::variant<int32_t,std::string>vr;
    vr=n1;//n1 is assigned to variant
    std::cout<<"Variant is working";
    //vr=41.3f;//float can be converted ti int "c/c++ allows implicit conversion"
    //number of sub classes are fixed
    vr=s1;
    //we get the exeption when trying to accesss the elligal variable which union not


}

/*  
vr=n1
    int32_t        std::string     index_variable   
  [      10     |  xxxx         |     0         ]       //24bytes


vr=s1
    int32_t        std::string      index_variable  
  [      10     |  Bhavani        |     1       ]       //24bytes


*/