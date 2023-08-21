#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num= 1;
    int alpha = 65;
    // vector<char> alp={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q"};

   for(int i = 0 ; i<n+1;i++ ){

                if( i== 0 || i == n){
                    for(int j= 0;j<n;j++){
                        cout<<"*  ";
                    }
                    cout<<endl;
                }
                else{
                    cout<<"*  ";
                    for(int k = 0 ; k< n-2;k++){
                        // cout<<num;
                        if(alpha==91){
                            alpha=65;
                        }
                        cout<< ((char)(alpha++));
                        cout<<"  ";
                        // num++;
                    }
                    cout<<"*  ";
                    cout<<endl;
                }
        }
    return 0;
}