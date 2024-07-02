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
       // delete valueptr; // memory leakage prevention
    };
};
template <typename T>
class wrapper
{
private:
    T *m_ptr;

public:
    wrapper(T *ptr) : m_ptr{ptr} {}
    ~wrapper()
    {
        delete m_ptr;
    }
};

void Magic()
{

    wrapper<ABC> wr_obj{{new ABC{101, new float{200.0f}}}};
}
int main()
{
    // ABC obj{101, new float(200.0f)};
    Magic();
}

// Manual
// Automatic
// AMt:Assisted Manual Transmission

/*

1)main calls Magic
2) in Magic make obj(stack obj)
3)wr_obj stores address of the heap allocated ABC object
4)wr_obj goes out of scope at the end of magic function since wr_obj
is a stack allocate variable,it will get auto destructur.
5)Wrapper class destructor will deleete on the stored pointer
for ABC .

memoery--->box [memory will be shared]{Box is called:shared pointer}

memoery--->box [memory will not be shared]{Box is called:unique pointers}

memoery--->box [memory will "stalked"]{box is called:weak_ptr}

Functions/callables--->box[box is called]{function _wrapper}

references--->box is called reference_wrapper

semaphores--->bix is called
   -mutex
   -lock_guard
   -unique_lock
   -.....
*/