// #include<iostream>
// using namespace std;

// int main()
// {
//     // int a,b=1;
//     // a = 10 ;
//     // if(++a){
//     //     cout<<b;
//     // }else{
//     //     cout<<++b;
//     // }
 
// //    int a=1, b=2;
// //     if(a-->0 || ++b>2){
// //         cout<<"inside if"<<endl;
// //     }else{
// //         cout<<"inside else"<<endl;
// //     }
// //     cout<<a<<" "<<b;

// // for(int i=0; i<=5;i--){
// //     cout<<i<<" ";
// //     i++;
// // }

// // for(int i=0; i<=15;i+=2){
// //     cout<<i<<" ";
// //     if(i&1){
// //         continue;
// //     }
// //     i++;
// // }

// // for(int i=0; i<5;i++){
// //     for(int j=i; j<=5;j++){
// //         cout<<i<<" "<< j <<endl;
// //     }
// // }

// // 0 0
// // 0 1
// // 0 2
// // 0 3
// // 0 4
// // 0 5
// // 1 1
// // 1 2
// // .
// // .
// // 1 5
// // 2 2
// // .
// // .
// // .
// // .
// // .
// // 4 5


// // int n=234;
// // int a= n/100;
// // int o= n/10;
// // int b= o%10;
// // int c= n%10;

// // cout <<a<<" "<<b<<" "<<c<<endl;

// // int product= a*b*c;
// // int sum=a+b+c;
// // int result= product - sum; 
// // cout<<product<<endl;
// // cout<<sum<<endl;
// // cout<<result<<endl;

  
//     return 0;
// } 

// #include<iostream>
// #include <stack>

// int main()
// {
// std::stack<int> newstack; newstack.push(11);

// newstack.push(22);

// newstack.push(33);

// newstack.push(44); newstack.pop();

// newstack.pop(); while (! newstack.empty())
// {
// std::cout <<" "<< newstack.top();

// newstack.pop();

// }

// std::cout<<"\n";
// return 0;

// }


// #include <iostream>

// using namespace std; 
// class A {

// public:

// A(){ cout << "A";

// } ~A(){

// cout << "~A";

// }

// };

// class B: virtual public A {

// public:

// B(){ cout << "B";
// }

// ~B(){ cout << "~B";
// }

// };

// class C: virtual public A {

// public:

// C(){ cout << "C";

// } ~C(){

// cout << "~C"; 
// }

// }; 
// class D: public B, public C {

// public:
// D(){
//     cout << "D"; }

// ~D(){ cout << "~D";

// }

// };

// int main()
// {
// A *ptr = new D();

// delete(ptr);
// return 0;

// }
#include <iostream>
using namespace std;
 
void printRLE(string s)
{
    for (int i = 0; s[i] != '\0'; i++) {
 
        
        int count = 1;
        while (s[i] == s[i + 1]) {
            i++;
            count++;
        }
        if(count == 1)
        {
            cout << s[i]<<endl;
        }
        else
        {
            cout << s[i] << count;
        }
        
    }
 
    cout << endl;
}
 

int main()
{
    string l;
    cin>>l;
    printRLE(l);
    return 0;
}