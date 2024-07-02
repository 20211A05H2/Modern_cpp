/*
   More about lambda
   1.What are they exactly
   2.waht is [] exactly?
      if we want to acess objects/variables created in the enclosing function
      of the lambda,we use 
   3.some weird things
       lambdas ca convert in function poinyers using "+"
  

*/

#include<iostream>
#include<functional>

void add(int32_t n1,int32_t n2,int* data)
{
    std::cout<<n1+n2+*data<<"\n";
}

int main()
{
    int data=20; 
    // allow to use variable from surroundings ex:data  
    auto fn=[data](int32_t n1,int32_t n2)
    {
        std::cout<<n1+n2<<"\n";
    };
    //fn(10,20)
    fn(10,20);//lambda object :compiler will create class by puting objects and call 
                       //use can use functions
}
/*
  {
 
    int data=20;   
    auto fn=[](int32_t n1,int32_t n2,int* data)
    {
        std::cout<<n1+n2<<"\n";
    };
    //fn(10,20)
    fn(10,20,&data);//lambda object :compiler will create class by puting objects and call 
                       //use can use functions
}
*/


/*
compiler does

    1.create a class with "some" name


    class _Lambda1{
    
    private:
    public:
         operator()(int32_t n1,int32_t n2)
    {
        std::cout<<n1+n2<<"\n";
    };
    }
_Lambda1 obj{}
*/


/* 
  capture clause
  int n1=10;
  int n2=20;
  int n3=30;
  

  example1:use of no capture variables
  auto fn=[](){std::cout<<"hello world";};

  example2:use of no captured variables but passed parameters
    auto fn=[](int n1,int n2){std::cout<<n1+n2;};
    fn(n1,n2);

 example 3: use n1 as captured variable. n1 should be copied into lambda
     auto fn=[n1](int n2){std::cout<<n1+n2;};
    fn(n2);
  example4:use n1 as captured variable. n1 should be reffered into xthe lambda
    auto fn=[&n1](int n2){std::cout<<n1+n2+n3;};
    fn(n2);

  example5:capture variables from the surroundings (make them all accessible in the lambda).
     (copied everything into the lambda when they are accessed in the body of the lambda)
       auto fn=[&](){std::cout<<n1+n2+n3;};
    fn();//all variables were captured by reference into the lambda
       //values can be changed


*/  