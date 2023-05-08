#include<iostream>
using namespace std;

int main()
{
    //1
    
    int a, b = 1;
    a = 10;
    if (++a)
    cout<<b;
    else
    cout<<++b;
    


   //2
   
   int a=1;
   int b = 2;
   if ( a-->0 && ++b>2){
    cout<<"Stage1 - inside if ";
   }
   else{
    cout<<"Stage2 - inside else";
   }
   cout<<a<<" "<<b<<endl; 
    

   //3
   
   int a=1;
   int b = 2;
   if ( a-->0 && ++b>2){
    cout<<"Stage1 - inside if ";
   }
   else{
    cout<<"Stage2 - inside else";
   }
   cout<<a<<" "<<b<<endl; 
    

   //4
   
   int num = 3;
   cout<<(25*(++num));
    


   //5
   int a = 1;
   int b = a++;
   int c = ++a;
   cout<<b<<endl;
    cout<<c<<endl;

    return 0;
} 