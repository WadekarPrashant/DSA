// if the number of rows and columns are not same 
// if rows-4  columns=2
// then
// **
// **
// **
// **

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout<<"no of rows are - ";
    cin>>i;
    cout<<"no of columns are - ";
    cin>>j;
     int p=0;
     while(p<i){
        int q=0;
        while(q<j){
            cout<<"*";
            q++;
        }
        cout<<endl;
        p++;
     }

    
    return 0;
} 