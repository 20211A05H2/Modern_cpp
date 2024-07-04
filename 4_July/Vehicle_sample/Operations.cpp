#include "Operations.h"

 static std::mutex mt{};
    static DataContainer m_data{};
    static ThreadContainer m_threads{};
void Operations::CreateCarsandBikes()
{
    m_data.emplace_back(new Car("xyz123", 3434334.43f, 6));
    m_data.emplace_back(new Bike("ABC123", 234334.43f));
    m_data.emplace_back(new Bike("ABC234", 45544.44f));
    m_data.emplace_back(new Car("xyz234", 34554.43f, 8));
}

void Operations::FindAverageCost()
{
    if (m_data.empty())
    {
        mt.lock();
        std::cerr << "Empty";
        mt.unlock();
    }
    float total{0.0f};
    for (const vrType v : m_data)
    {
        std::visit([&](auto &&val)
                   { total += val->price(); }, v);
    }
    if (m_data.empty())
    {
        mt.lock();
        std::cout << "Total cost is:" << total << "\n";
        mt.unlock();
    }
}

std::optional<vrType> Operations::ReturnMatchingInstances(std::string sid)
{
    if (m_data.empty())
    {
        mt.lock();
        std::cout << "Empty data container";
        mt.unlock();
    }

    std::optional<unsigned int>result{std::nullptr};
    bool m_id_found{false};

    for (const vrType v : m_data)
    {
        std::visit([](auto &&val)
        {
            if(val->id()==sid)
            {
                result=v;
                m_id_found=true;
            } 
        }, v);
    }
    if (m_id_found)
    {
        return result;
    }
    return result;
}

void Operations::DisplayInsuranceAmount()
{
    if (m_data.empty())
    {
        mt.lock();
        std::cout << "Empty:" << "\n";
        mt.unlock();
    }
    for (const vrType v : m_data)
    {
        std::visit([](auto &&val)
                   {
        mt.lock();
        std::cout<<val->InsuranceAmout(); }, v);
        mt.unlock();
    }
}

std::optional<unsigned int> Operations::FindSeatCountbyId(std::string sid)
{
    if (m_data.empty())
    {
        mt.lock();
        std::cout << "Empty dat container:" << "\n";
        mt.unlock();
    }
    std::optional<unsigned int> result {std::nullptr};
    bool matchfound{false};
    for (const vrType v : m_data)
    {
        if (std::holds_alternative<Car *>(v))
        {
            Car *temp = std::get<0>(v);
            if (temp->id() == sid)
            {
                matchfound = true;
                result = temp->seatCount();
            }
        }
    }

    return result;
}

void Operations::Deallocate()
{
    if (m_data.empty())
    {
        mt.lock();
        std::cout << "Total cost is:" << "\n";
        mt.unlock();
    }
    for (const vrType v : m_data)
    {
        std::visit([](auto &&val)
                   { delete val; }, v);
    }
}

 void Operations::Mapthreads()
{
    m_threads.emplace_back(Operations::FindAverageCost());
    m_threads.emplace_back(Operations::DisplayInsuranceAmount());
}

void Operations::Jointhreads()
{
    for (std::thread &th : m_threads)
    {
        if (th.joinable())
        {
            th.join();
        }
    }
}
