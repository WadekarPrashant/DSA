// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1

#include<iostream>
using namespace std;

int main()

{   int n;
    
    cout<<"Enter the no. of rows : "<<endl;
    cin>>n;
       for(int row = 0;row<n  ;row++)
       {
        for(int col = 0; col<(n-row);col++) 
        {
            cout<<col+1<<" ";
        }
               cout<<endl; 
       }
       

    return 0;
} 