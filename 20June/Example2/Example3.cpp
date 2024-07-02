void Magic(int n1)
 {
// //
}

// void Magic(int& data)//values wiil be 
// {
//     //take by reference

// }
// void Magic(int&& data)
// {
//     //take 10 not accept n1 
// }
// void Magic(const int& data)
// {
//    //take both lvalues will be take by reference and r values by assigning
// }
// void Magic(const int&& data)
// {
//     //only rvalues accepted and then deleted
// }
int main()
{
    Magic(10);
    int n1=10;
    Magic(n1);
}