// C++ program for the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to find insert position of K
int find_index(int arr[], int n, int K)
{
    // Lower and upper bounds
    int start = 0;
    int end = n - 1;
    // Traverse the search space
    while (start <= end) {
        int mid = (start + end) / 2;
        // If K is found
        if (arr[mid] == K)
            return mid;
        else if (arr[mid] < K)
            start = mid + 1;
        else
            end = mid - 1;
    }
    // Return insert position
    return end + 1;
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
 