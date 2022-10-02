#include<iostream>
using namespace std;
 
 int main()
{
    int fact = 1;
    int n;

    cout<< " Enter the value of n : ";
    cin>>n;

    if (n == 0 || n == 1)
    {
        cout<<"Factorial is 1" <<endl;
    }
    else{
        
        for(int i = 1; i <= n; i++){
            fact = fact * i;
            cout<<fact<<endl;

        }

        // cout<<fact;
    }
    return 0;
    
}