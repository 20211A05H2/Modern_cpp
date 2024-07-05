#include<iostream>
#include<memory>    //cpp17
 
class Data
{
private:
    int m_value;
public:
    Data() = default;
    Data(const Data&) = delete;
    Data(Data&&) = default;
    Data& operator=(const Data&) = delete;
    Data& operator=(Data&&) = delete;
    ~Data()=default;
    explicit Data(int val): m_value{val}{}
 
    friend std::ostream &operator<<(std::ostream &os, const Data &rhs) {
        os << "m_value: " << rhs.m_value;
        return os;
    }
};
 
 void Magic()
 {

 }
/*
    resource: 4 bytes of memory on the heap used by the Data object with value 100
*/
 
int main(){
    
    std::unique_ptr<Data> ptr4{new Data{100}};
 
    //std:unique_ptr<Data>ptr5{ptr4};
 
   // Magic(std::move(ptr4));
 
    //Can I use ptr4 after moving??
    //unique pointer allows no copy
 
    ptr4.reset(new Data{99});
}
 
/*
 
*/