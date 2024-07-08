/*
   a) Evaluate tasks in asynchronus mode
   b)it is a thread that can also catch a return value so could be used in cpp to excetue value returning function in a seperate thread as well.
 */
#include<iostream>
#include<future>
int64_t Magic(int32_t number)
{
    return number*number;
}

int main()
{
    std::future<int64_t>ans=std::async(&Magic,10);
    //get fetches the answer from the async thread,if thread is still executing,
    //main will get invoked at this line till completion of function Magic
    ans.get();
}
