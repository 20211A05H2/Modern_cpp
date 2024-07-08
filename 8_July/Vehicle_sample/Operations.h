/*

   1)Craete Cars and Operationss
   2)Find avverage cost of Vehicles:return the average price of all vehicles in our database
   3)RetuenMatchingInstatnces:return the firts vehicle whose id matchs with the id parameter received
   4)Deallocate:release heap allocation if any
   5)DisplayInsuranceAmount:show output of InsuranceAmount function for each instance
   6)FInd seatcountforid:fetches based on the id and returns corresponding seat_count
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <variant>
#include <list>
#include <mutex>
#include <iostream>
#include <optional>
#include <thread>
#include "Bike.h"
#include "Car.h"

using vrType = std::variant<Car *, Bike *>;
using DataContainer = std::list<vrType>;
using ThreadContainer = std::list<std::thread>;

class Operations
{
private:
    static std::mutex mt;
    static DataContainer m_data;
    static ThreadContainer m_threads;
    //do not initialize static variable in header file

public:
    Operations() = delete;
    Operations(const Operations &) = delete;
    Operations(Operations &&) = delete;
    Operations &operator=(const Operations &) = delete;
    Operations &operator=(const Operations &&) = delete;
    ~Operations() = default;

    static void CreateCarsandBikes();
    /*
      findingaveragecost:use visit function to do this,
      both car and bike have a m_price attribute,
      we can use their getter function to calculate total

    */
    static void FindAverageCost();
    static std::optional<vrType> ReturnMatchingInstances(std::string sid); // may or maynot return its option
    static void DisplayInsuranceAmount();
    static std::optional<unsigned int> FindSeatCountbyId(std::string sid);
    static void Deallocate();
    static void Mapthreads();
    static void Jointhreads();
    /*
        1:id found,matches with a car,seat count returned
        2:id found ,matches with a bike ------>nullptr
        3:id not found---->nullptr(print a message before return)
      */
};

#endif // OPERATIONS_H
