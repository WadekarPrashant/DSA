#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int a = 0;
    cout<<a<<endl;
    int b = 1;
    
    cout<<b<<endl;

    for(int i=1; i<=n; i++){

        int nextnum=a+b;

        cout<<nextnum<<endl;
        a=b;
        b=nextnum;

    }

    return 0;
} 