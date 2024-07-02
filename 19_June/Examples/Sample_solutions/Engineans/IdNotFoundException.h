#ifndef NoValidEngineFoundException_H
#define NoValidEngineFoundException_H
#include<iostream>
class IdNotFoundException
{
private:
    std::string _msg;
public:
    IdNotFoundException(std::string msg):_msg{msg}{}
    ~IdNotFoundException(){}


     
     IdNotFoundException()=delete;
     IdNotFoundException(const IdNotFoundException&)=delete;
     IdNotFoundException& operator=(const IdNotFoundException&)=delete;
     IdNotFoundException& operator=(IdNotFoundException&&)=default;
     IdNotFoundException(IdNotFoundException&&)=delete;
     ~IdNotFoundException()=default;
     const char*
     what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
     {
        return _msg.c_str();
     }
};




#endif // NoValidEngineFoundException_H
