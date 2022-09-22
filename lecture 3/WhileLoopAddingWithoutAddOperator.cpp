
#include <iostream>
using namespace std;
int main ()
{
    int Number1,Number2;
    cout<<"Please Enter the First number:";
    cin>>Number1;

    
   
   
   
    cout<<"Please Enter the second number:";
    cin>>Number2;
 while (Number2 != 0)
    {
        int carrynNumber = Number1 & Number2;
        Number1 = Number1 ^ Number2;
        Number2 = carrynNumber << 1;
    }
    cout<<"Thu sum of two numbers is: "<<Number1;
}