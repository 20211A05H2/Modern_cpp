/*
   usecase1:
        Calculate square of 10 numbers
        10 std::thread object to complete sqaure of number of each
    usecase2:
        $ operation as to perform all are independent(order of execution is not important)
        execut all & parallely
        (all functions returning a value need to be executed via std::async,other via std::thread)
    usecase3
        [producer-consumer problem]

        f1(producer)--->data will be generated
        f2(consumer)----->processing data only after data is generated

        example:senser detech collision and deployment of airbags

        program to call emergency()
*/
#include<iostream>
#include<thread>
#include<condition_variable>
#include<mutex>
int32_t value{0};
std::condition_variable cv;
std::mutex mt;
bool m_inputReceived{false};

void Producer()
{
  
  while(!m_inputReceived)
  {
    std::cin>>value;
    if(value>5)
    {
        m_inputReceived=true;
        
    }
  }
  //data produces
  //1)user input has accepted
  //2)user must be above 5
  std::lock_guard<std::mutex>lk(mt);
  cv.notify_one();
}
void Consumer()
{
    /*   
        senario:consumer starts ,consumer checks for condition
        if the condition is false,I cannot exit the function!!!!!! 
       */
    std::unique_lock<std::mutex>ul{mt};//allows you to release the unlock at end of the execution or middle
    cv.wait(ul ,[](){return m_inputReceived;});    cv.wait(ul ,[](){return m_inputReceived;});
  //this value cannot be computed before producer gives a signal!

  //this value cannot be computed before producer gives a signal!
  std::cout<<"value squared is:"<<value*value<<"\n";

}
int main()//thread
{
    //will launch producer
    std::thread t1{&Producer};
    std::thread t2{&Consumer};
    std::cout<<"Main continuos chilling! asks for 15 crore to fir employee advice\n";
    std::cout<<"Main can literally anything!\n";
    //will launch consumer
    t1.join();
    t2.join();
    std::cout<<"Thats all GoodBye!!!!!!!";

}