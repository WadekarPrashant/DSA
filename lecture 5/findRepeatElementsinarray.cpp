#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 5, 5, 7, 8, 8, 9, 9, 2}; 
    int i, j;
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (i = 0; i < size; i++) 
    cout << nums[i] <<" ";
    cout  << "\nRepeating elements: ";
    for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(nums[i] == nums[j])
        cout <<  nums[i] << " ";
       
    return 0;
 
   }