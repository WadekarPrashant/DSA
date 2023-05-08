#include<iostream>
using namespace std;

int main()
{
    int arr[] = {90, 46, 68, 13, 2, 23};
    int max = arr[0];;
    
    for ( int i = 0 ; i < 7 ; i++){
        
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<max;
  
    return 0;
} 