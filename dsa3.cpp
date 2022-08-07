#include<iostream>
using namespace std;

int main()
{
    // this is first homework- checking input is of which case or its number

    char ch;
    cout<<"Enter the charecter/number:"<<endl;
    cin>>ch;
    if ( ch>='a' && ch<='z'){
        cout<<ch<< "is small case ";

    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<" This is Upper case";
    }
    else
    {
        cout<<" ch is number ";
    }

return 0;

}