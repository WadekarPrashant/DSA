// Printing numbers
// *
// **
// ***
// ****

// if the number (n) of rows and columns are same 
// i is the  rows 
// j is the  columns

#include<iostream>
using namespace std;

int main()
{
    int n;
   
    cout<<"Enter the no. of rows or columns";
    cin>>n;

    int i=0;
    while(i<n){ 
          int j=0;
        while(j<=i){ 
            cout<<"*";
            j++;
        }
            cout<<endl;
        i++;
    }

    return 0;
} 