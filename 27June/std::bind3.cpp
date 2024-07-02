#include<iostream>
#include<functional>

class Data
{
    private:
    int m_value{0};
    public:
      Data()=default;
      Data(const Data&)=delete;
      Data(Data&)=delete;
      Data operator=(Data&)=delete;
      Data& operator=(const Data&)=delete;
      ~Data()=default;

      Data(int val):m_value{val}{}

      void DisplayReading(int factor)
      {
        std::cout<<m_value*factor;
      }


      static void Display(int times)
      {
        std::cout<<"Hello!World:"<<time<<" time\n";
      }

};

int main()
{
    Data obj{10};
    obj.DisplayReading(100);//100 is the factor
    auto fn=std::bind(&Data::DisplayReading,&obj,100);
    fn();//obj.DisplayReading(100);


    Data::Display(10);

    auto binded_static_display=std::bind(Data::Display,10);
    binded_static_display();//Data::display

    /*
          for non-static member functions
          1.object address is mandatory
          2.it must be the first argument after specifying the name of the function in 
          3.You "must" use & symbol with the name of the member function in bind


          for static member functions
          1.No object involved so no address required
          2.You "SHOULD NOT" use & symbol with the name of the function
     */
}