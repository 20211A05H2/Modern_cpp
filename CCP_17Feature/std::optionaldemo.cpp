#include <iostream>
size_t Factorial(int32_t val)
{
    if (val < 0)
    {
        throw std::invalid_argument("negative number");
    }
 
    else if (val == 0 || val == 1)
    {
        return 1;
    }
    else
    {
        size_t total{1};
        for (size_t i = 2; i <= val; i++)
        {
            total *= i;
        }
        return total;
    }
}

int main(){
        try
        {
            
                Factorial(-10);
            
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << e.what() << '\n';
        }





}