#ifndef BUSINESSOWNER_H
#define BUSINESSOWNER_H
#include<iostream>

class Businessowner
{
private:
    std::string n_name{""};
    float n_net_income{0.0f};
public:
    Businessowner(/* args */)=default;
    Businessowner(const Businessowner&)=default;
    Businessowner(Businessowner&&)=delete;
    Businessowner& operator=(const Businessowner&)=default;
    Businessowner& operator=(Businessowner&&)=delete;
    ~Businessowner()=default;
    Businessowner(std::string name,float income):n_name{name},n_net_income{income}{}

    friend std::ostream &operator<<(std::ostream &os, const Businessowner &rhs) {
        os << "n_name: " << rhs.n_name
           << " n_net_income: " << rhs.n_net_income;
        return os;
    }

    

};




#endif // BUSINESSOWNER_H
