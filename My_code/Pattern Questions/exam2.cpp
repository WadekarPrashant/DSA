#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    char currentChar = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*  ";
            } else {
                cout << currentChar << "  ";
                currentChar = (currentChar == 'Z') ? 'A' : currentChar + 1;
            }
        }
        cout << endl;
    }

    return 0;
}
