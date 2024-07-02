 
#include <iostream>
#include <vector>
 
 
enum class rating{
    _5_star,
    _4_star,
    _3_star,
    _2_star,
    _1_star,
    _no_rating
 
};
 
class car
{
    private:
    unsigned int m_id {0};
    float m_price {0.0f};
    rating m_safetyrating {rating::_no_rating};
 
    public:
    car(unsigned int id) :m_id{id} {}//member list initialiaztion
   car(unsigned int id, float price)
   : car(id) {{
    m_price=price;
   }
 
    }
    car(unsigned int id, float price, rating rating)
     : car(id,price) {
        m_safetyrating=rating;
 
     }
 
 
     car()=delete;
     car(const car&)=default;
     car& operator=(const car&)=delete;
     car& operator=(car&&)=delete;
     car(car&&)=delete;
     ~car()=default;
    
};

int main()
{
    car c1(101, 10000.0f, rating::_4_star);
    car c2(102, 133454.0f, rating::_3_star);
    int32_t n1 = 10; // 32 bit/4 bytes memory for integer
    int16_t n2 = 20; // 16 bit/2 bytes memory for integer
    std::vector<car> cars{c1, c2};
    // pot1:enable copy constructor
    // opt2:Moving cars(not applicable in this contex)
    // opt3:Create data inside the vector directly (emplacing)

    cars.emplace_back(101, 10000.0f, rating::_4_star);
    cars.emplace_back(102, 133454.0f, rating::_3_star); // works onli in modern c++
    std::cout<<"Number of elements of vector"<<cars.size();
    
}

  // pot1:enable copy constructor
    // opt2:Moving cars(not applicable in this contex)
    // opt3:Create data inside the vector directly (emplacing)
