#include<iostream>

void Magic(char grade)
{
  std::cout<<"grade:"<<grade;
}
int main()
{
    char c='A';
    Magic(c);
  Magic('A');
}