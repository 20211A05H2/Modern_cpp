#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>

class project
{
private:
    std::string _id;
    unsigned int _teamsize;
    float _bukdget;
public:
    project(std::string id, unsigned int team, float bud);
    project();
    ~project();

    friend std::ostream &operator<<(std::ostream &os, const project &rhs) {
        os << "_id: " << rhs._id
           << " _teamsize: " << rhs._teamsize
           << " _bukdget: " << rhs._bukdget;
        return os;
    }
};

#endif // PROJECT_H
