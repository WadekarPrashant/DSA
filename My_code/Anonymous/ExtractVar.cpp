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
int main()
{
    /* vector<string> name(vector<int>& arr)
    {
    int n = arr.size();
    } 	*/
    int arr[] = {1,2,3,4};
    int ans  = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + arr[i];
    }
    cout << ans <<endl;
    return 0;
}
