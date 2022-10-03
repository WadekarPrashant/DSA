
// Printing numbers
// 123
// 456
// 789

// if the number (n=3) of rows and columns are same 
// i is the  rows 
// j is the  columns

#include<iostream>
using namespace std;

int main()
{
    int n=3;
    // cout<<"Enter the no. of rows or columns";
    // cin>>n;

    int i=1;
       int count=1;
    while(i<=n){ 
        int j=0;
        while(j<n){
         
            cout<<count;
            count++;
            j++;
        }
            cout<<endl;
        i++;
    }

    return 0;
} 