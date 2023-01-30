// * * * * * * *
// *           *
// *           *
// *           *
// *           *
// * * * * * * *

#include<iostream>
using namespace std;

int main()

{   int n,m;
    
    cout<<"Enter the no. of rows : "<<endl;
    cin>>n;
    cout<<"Enter the no. of columns : "<<endl;
    cin>>m;
    
       for(int row = 0;row<(n+1)  ;row++){
    if(row==0 || row==n){
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
    }else{
        cout<<"* ";
        for(int i= 0; i<(m-2);i++){
            cout<<"  ";
        }
        cout<<"*";
    }
    cout<<endl;       
}
    return 0;
} 