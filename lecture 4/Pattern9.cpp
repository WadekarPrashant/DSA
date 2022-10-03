// Printing numbers
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 

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
    int count=1;
    while(i<n){ 
          int j=0;
        while(j<=i){ 
            cout<<count;
            cout<<" ";
            j++;
            count++;
        }
        
            cout<<endl;
        i++;
    }

    return 0;
} 