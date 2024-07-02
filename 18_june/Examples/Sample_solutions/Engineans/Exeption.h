#ifndef IDNOTFOUND_H
#define IDNOTFOUND_H
#include<stdexcept>

class IdNotFound:std::exception
{
private:
    std::string _msg;
public:
    IdNotFound(std::string msg)
    {
        _msg=msg;
    }
    ~IdNotFound(){}
    virtual const char* 
    what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
    {
      return _msg.c_str();
    }

};























/*
class IdNotFound : public std::exception
{
private:
    std::string _message;

public:
    IdNotFound(std::string msg)
    {
        _message = msg;
    }
    ~IdNotFound() {}
    virtual const char *
    what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
    {
        return _message.c_str(); // c_str() converts the string data into character pointer
    }
};
*/



#endif 