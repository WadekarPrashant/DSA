#include<iostream>
using namespace std ;


int main(){
//Pattern 1
// ***
// ***
// ***
// for(int row = 0 ; row<3;row++){
//   for (int col = 0; col<3; col++){
//     cout<< "*";
//   }
//   cout<<endl;
// }

// ********************************************************************************************************************

// Pattern 2
// *****
// *   *
// *****
// int n;
// cin >>n;
// for(int row = 0 ; row < n;row++){

//   if (row ==0 || row == n-1 ){
//     for (int col = 0; col<5; col++){
//     cout<< "* ";
//   }
//   }
//   else{
//     cout<< "* ";
//     for (int col = 0; col<3; col++){
//     cout<< "  ";
//   }
//   cout<< "* ";
//   }
//     cout << endl; 
// }

// ********************************************************************************

// Pattern 3
// *
// **
// ***
// ****
// *****
// int n;
// cin>> n;
// for(int row = 0 ; row<n;row++){
//   for (int col = 0; col<row; col++){
//     cout<< "*";
//   }
//   cout<<endl;
// }

// **********************************************************************************

// Pattern 4
// ****
// ***
// **
// *
// int n;
// cin>> n;
// for(int row = n-1 ; row > 0;row--){
//   for (int col = 0; col<row; col++){
//     cout<< "*";
//   }
//   cout<<endl;
// }

// ********************************************************************************

// Pattern 5
// 1
// 12
// 123
// 1234
// int n;
// cin>> n;
// for(int row = 0 ; row<n;row++){
//   for (int col = 0; col<row+1; col++){
//     cout<< col+1 ;
//   }
//   cout<<endl;
// }

// ********************************************************************************

// Pattern 6
// 1234
// 123
// 12
// 1
// int n;
// cin>> n;
// for(int row = n-1 ; row > 0;row--){
//   for (int col = 0; col<row; col++){
//     cout<< col + 1;
//   }
//   cout<<endl;
// }

// *******************************************************************************

// Pattern 7
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// int n;
// cin>>n;
// for (int row = 0; row< n; row ++){
//   for (int sp = n ; sp>row; sp--){
//     cout << " ";
//   }
//   for (int st = 0; st<row; st++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// ******************************************************************************

// Pattern 8
















return 0;
}
