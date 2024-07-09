#include<iostream>
 
//works only in cpp17 only
template <typename... T>
auto add(T... n1){
return (...+n1);
}
int main(){
    std::cout<<add<int>(1,2,3)<<"\n";//6
    std::cout<<add<int>(1)<<"\n";//1
    std::cout<<add<int>(1,2)<<"\n";//3
     std::cout<<add<int>(1,2,3.09,4.0f,5,6,11,1,1,1)<<"\n";
}