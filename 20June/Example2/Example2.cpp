#include <iostream>
class ABC
{
private:
    int m_id{0};
    float *valueptr{nullptr};

public:
    ABC(int id, float *ptr) : m_id{id}, valueptr{ptr} {}

    ABC() = default;
    ABC(ABC &&) = delete;
    ABC &operator=(const ABC &) = delete;
    ABC &operator=(ABC &&) = delete;
    ~ABC()
    {
        delete valueptr; // memory leakage prevention
    };
};
int main()
{
    ABC obj{101, new float(200.0f)};
}
