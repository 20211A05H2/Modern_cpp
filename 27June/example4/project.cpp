#include "project.h"

project::project(std::string id, unsigned int team, float bud)
{
    _id = id;
    _teamsize = team;
    _bukdget = bud;
}

project::project()
{
    this->_bukdget = 0.0f;
    this->_id = "";
    this->_teamsize = 0;
}

project::~project()
{
    std::cout << "delete project " << this->_id << std::endl;
}
