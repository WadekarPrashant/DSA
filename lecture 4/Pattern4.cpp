// Printing numbers

// 123
// 123
// 123

// if the number (n) of rows and columns are same 
// i is the  rows 
// j is the  columns

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of rows or columns - ";
    cin>>n;

    int i=1;
    while(i<=n){ 
        int j=1;
        while(j<=n){
            
            cout<<j<<"";
            j++;
        }
            cout<<endl;
        i++;
    }

    return 0;
} 