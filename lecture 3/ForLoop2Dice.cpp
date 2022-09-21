#include <iostream>	
#include <string> 
#include <stdlib.h> 
#include <time.h>
using namespace std; 
int main()
{
    int Rollin2dice [8];
    srand(time(0));
    short i;
    i=0;
    
    while(i < 10)
     {
          i=i+1;
        Rollin2dice [0] = rand() % 8 + 1;
        Rollin2dice [1] = rand() % 8 + 1;
        cout << "Rolled: " << Rollin2dice [0] << "    and     " << Rollin2dice [1]<<endl;
    }
    system ("pause");
	return 0; 
}
