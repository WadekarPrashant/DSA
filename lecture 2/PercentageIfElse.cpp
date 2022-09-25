# include <iostream>
# include <conio.h>
using namespace std;
int main() 
{ 
 int s1,s2,s3,s4,s5;
 float per;
 char grade;
 cout<<"enter marks of five subjects"<<endl;
 cin>>s1>>s2>>s3>>s4>>s5;
 per=((s1+s2+s3+s4+s5)*100)/500;
 cout<<per<<endl;
 switch (per>=90&&per<100)
 {
 	case 1:
 		cout<<"your grade is A";
 	break;
 	case 0:
 		switch(per>=80 &&per<90)
 		{
 			case 1:
 				cout<<"grade is B";
 				break;
 				case 0:
 					switch(per>=70&&per<80)
					 {
					 	case 1:
					 		cout<<"your grade is C";
					 		break;
					 		case 0:
					 			switch (per>=60&&per<70)
                                 {
                                 	case 1:
                                 		cout<<"grade is D";
                                 		break;
                                 		case 0:
                                 			switch (per>=50&&per<60)
                                 			{
                                 				case 1:
                                 					cout<<"grade is E";
                                 					break;
                                 					case 0:
                                 						cout<<"grade is F";
                                 		            break;
											 }
                                 			break;
								 }
					 			break;
					 }
 					break;
		 }
 	break;
}
}