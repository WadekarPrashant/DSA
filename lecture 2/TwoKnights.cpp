#include<bits/stdc++.h> 
using namespace std; 
int main()
{ int n,k1,k2,ktot,red; 
  cout<<"Enter the value of n";
  cin>>n; 
  k1=n*n;              // number of ways to place first knights
  k2=k1-1;             // number of ways to place second knights 
  ktot=k1*k2/2; 
//   cout<<ktot<<endl;      // total number of ways to place 2 knights
  red=4*(n-1)*(n-2);   // total number of attacked places to be reduced
  cout<<ktot-red<<endl;      // total number of places not attacked
  return 0; 
}