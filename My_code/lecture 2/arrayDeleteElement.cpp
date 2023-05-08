#include<iostream>
using namespace std;

int main()
{

        int arr[50], size, i, del, count=0;

        cout<<"Enter array size( Max:50 ) :: ";
        cin>>size;
        cout<<"\nEnter array elements :: \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter arr["<<i<<"] Element :: ";
                cin>>arr[i];
        }

        cout<<"\nEnter element to be delete :: ";
        cin>>del;

        for(i=0; i<size; i++)
        {
                if(arr[i]==del)
                {
                        for(int j=i; j<(size-1); j++)
                        {
                                arr[j]=arr[j+1];
                        }
                        count++;
                        break;
                }
        }
        if(count==0)
        {
                cout<<"\nElement not found..!!\n";
        }
        else
        {
                cout<<"\nElement deleted successfully..!!\n";
                cout<<"\nNow the new array is ::\n";
                for(i=0; i<(size-1); i++)
                {
                        cout<<arr[i]<<" ";
                }
        }
    cout<<"\n";

        return 0;
}