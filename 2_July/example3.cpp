#include<iostream>
#include<thread>
class Mathoperations
{
    private:
    int32_t m_value{0};
    public:
    Mathoperations(const Mathoperations&)=delete;
    Mathoperations(Mathoperations&&)=delete;
    Mathoperations(Mathoperations& other)=delete;
    Mathoperations operator=(Mathoperations &other)=delete;
    Mathoperations operator=(Mathoperations &&other)=delete;

    ~Mathoperations()=default;

    void square()
    {
      std::cout<<"Square of "<<m_value<<"is"<<m_value;
    }
    int32_t addition(int other){return m_value+other;};
    int32_t operator()(){
        return m_value*m_value*m_value;
    }
      
};
//an object that behaves like a function (can be involved like a function)
int main()
{
    Mathoperations n1{10};
    std::thread t1{&Mathoperations::square,&n1};
    Mathoperations m1{100};
    std::thread t2{ m1};//thread created by functor object
    //you cannot capture the return values from a function when executing them via std::thread
    std::thread t3{&Mathoperations::addition,&m1,100};
    t1.join();
    t2.join();
    t3.join();
  
}