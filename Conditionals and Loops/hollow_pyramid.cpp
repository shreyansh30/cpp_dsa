#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n-i ; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (j == 1 || j == 2*i-1)
                cout << "*";
            else if (i==n && j%2 == 1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }
    
}
