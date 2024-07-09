#include<iostream>
 
//base case:only one argument for addition
template <typename T>
T add(T val){
    return val;
}
 
template <typename T,typename... other>//(... is an ellipsis)
auto add(T n1,other... args){
return n1+add(args...);
}
int main(){
    std::cout<<add<int>(1,2,3)<<"\n";//6
    std::cout<<add<int>(1)<<"\n";//1
    std::cout<<add<int>(1,2)<<"\n";//3
     std::cout<<add<int>(1,2,3.09,4.0f,5,6,11,1,1,1)<<"\n";
}