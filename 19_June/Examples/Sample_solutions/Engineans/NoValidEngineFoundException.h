#ifndef NOVALIDENGINEFOUNDEXCEPTION_H
#define NOVALIDENGINEFOUNDEXCEPTION_H
#include<iostream>
class NoValidEngineFoundException
{
private:
    std::string _msg;
public:
    NoValidEngineFoundException(std::string msg):_msg{msg}{}
    ~NoValidEngineFoundException(){}


     
     NoValidEngineFoundException()=delete;
     NoValidEngineFoundException(const NoValidEngineFoundException&)=delete;
     NoValidEngineFoundException& operator=(const NoValidEngineFoundException&)=delete;
     NoValidEngineFoundException& operator=(NoValidEngineFoundException&&)=default;
     NoValidEngineFoundException(NoValidEngineFoundException&&)=delete;
     ~NoValidEngineFoundException()=default;
     const char*
     what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
     {
        return _msg.c_str();
     }
};




#endif // NOVALIDENGINEFOUNDEXCEPTION_H
