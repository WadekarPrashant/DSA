#include<iostream>
using namespace std;
int main()
{
	 int s1,s2,s3;
	 cout<<"please enter three sides of the triangle"<<endl;
	 cin>>s1>>s2>>s3;
	 if(s1==s2 && s2==s3)
	 {
	 	cout<<"Equilateral triangle"<<endl;
	 }
	 else if(s1==s2||s1==s3 || s2==s3)
	 {
	 	cout<<"isosceles triangle"<<endl;
	 }
	 else
	 {
	 	cout<<"scalene triangle";
	 }
}