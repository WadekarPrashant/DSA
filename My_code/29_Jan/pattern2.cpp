// *****
// *   *
// *****

#include<iostream>
using namespace std;

int main()
{   for(int row = 0;row<3;row++){
    if(row==0 || row==2){
        for(int j=0;j<5;j++){
            cout<<*"* ";
        }
    }else{
        cout<<"* ";
        for(int i= 0; i<2;i++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;       
}
    return 0;
} 