#include<iostream>
using namespace std;
int main()
{
	float x;
	float y;
	float z;
	float avg;
	avg=x+y+z/3;
	cout<<"enter first subject marks"<<endl;
	cin>>x;
	cout<<"enter second subject marks"<<endl;
	cin>>y;
	cout<<"enter third subject marks"<<endl;
	cin>>z;
	avg=x+y+z/3;
	if (avg>=90)
	{
		cout<<"Result: grade is A"<<endl;
	}
	else if(avg>=70&&avg<90)
	{
		cout<<"Result: grade is B"<<endl;
	}
	else if(avg>=50&&avg<70)
	{
		cout<<"Result: grade is C"<<endl;
	}
	else
	{
		cout<<"Result: grade is F"<<endl;
	}	
}


// if the average score =90% =>grade=A
// -if the average score >= 70% and <90% => grade=B
// -if the average score>=50% and <70% =>grade=C
// -if the average score<50% =>grade=F