#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "\n\n Print a pattern like square with # character:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}