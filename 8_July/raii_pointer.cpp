/*
  Magic                              Heap
                                   Employee
  ptr[0x100H]--------------->[101 | harshith|9000.0f]


  void Magic()
  {
  //Employee ptr=new Employee(101,"harshith",768.67f);//deletin ptr object is 
  Wrapper wr{new Employee(101,"harshith",768.67f);};
  if()
  {
    std::cout<<wr.get()<<"\n";
  }
  else
  {
   throw MyExecption("Something went wrong");
  }  
  }
//here no need to delete the object because the wrapper class distructuere is called then the wrapper object is automatically deleted
*/


#include<iostream>
#include<list>
#include<memory>

void CreateData(std::shared_ptr<int[]> data)
{
  data[0]=10;
  data[1]=20;
}
void CalculateTotal(std::shared_ptr<int[]> data,int size)
{
    
    float total{0.0f};
    for(int i=0;i<size;i++)
    {
        total+=data[i];
    }
    std::cout<<"toatal="<<total<<"\n";
}
void PrintFirstElement(std::shared_ptr<int[]> data,int size)
{
    
    std::cout<<data[0]<<"\n";

}
int main()
{  
    std::shared_ptr<int[]> arr{new int[2]};
    
    
    
  
  CreateData(arr);
  CalculateTotal(arr,2);
  PrintFirstElement(arr,2);
  //we will exit from main the distructure will be called by list class and the object will be deleted

}
