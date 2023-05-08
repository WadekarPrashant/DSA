#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i = 2; i <= n; i++ ){

        if(n == 2){
            cout<<n<<" is Prime number"<<endl;
        }

        else if(n % i == 0){
            cout<<n <<" is not prime";
        }
        else{
            cout<<n <<" is prime";
            break;

        }
    }
    
    return 0;
} 