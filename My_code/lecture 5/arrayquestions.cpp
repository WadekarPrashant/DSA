// / C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to find insert position of K
int find_index(int arr[], int n, int K)
{
    // Traverse the array
    for (int i = 0; i < n; i++)
        // If K is found
        if (arr[i] == K)
            return i;
        // If current array element exceeds K
        else if (arr[i] > K)
            return i;
    // If all elements are smaller than K
    return n;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 3, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 2;
    cout << find_index(arr, n, K) << endl;
    return 0;
}