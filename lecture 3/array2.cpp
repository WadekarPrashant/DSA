#include<iostream>
using namespace std;

int main()
{
   int sum = 0;   
  int arr[] = {45, 88, 62, 99, 11, 22, 33};

    for( int j=0 ; j<= 7 ; j++){
        
        cout<<"The value of index"<<" "<<j<<" is "<<arr[j]<<endl;
        sum = arr[j];
    }
    cout<<"The sum of array is "<<sum;

return 0;
} 