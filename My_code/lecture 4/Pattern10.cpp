// Printing numbers
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 

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

    int i=1;
    
    while(i<=n){ 
          int j=1;
          int count=i;
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