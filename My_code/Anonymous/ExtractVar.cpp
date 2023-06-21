#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<string.h>
#include<math.h>
#include<unordered_map>
using namespace std;


void pyramid(int height){
    int j,k,l;
    for (int i = 1; i <= height; i++)
    {
        for (k = 1; k <= (height - i); k++)
        {
            cout << " ";
        }
        for (j = 1; j <=i; j++)
       {
            cout <<  " *";
       }
      /*  for (j = 1; j <= i; j++)
        {
            cout <<  "* ";
        }
        for (l = i - 1; l >= 1; l--)
        {
            cout  << "* ";
        }
        */
        cout << endl;
    }
}
int main()
{
    /* vector<string> name(vector<int>& arr)
    {
    int n = arr.size();
    } 	
    int arr[] = {1,2,3,4};
    int ans  = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + arr[i];
    }
    cout << ans <<endl;


     for (int k = 0; k < num; k++)
        {
            cout<< " ";
        }
    */
cout<<"Enter the value of height ";
int n;
cin>>n;
    pyramid(n);
    return 0;
}
