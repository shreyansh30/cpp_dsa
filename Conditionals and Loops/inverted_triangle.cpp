#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i<=j)
            {
                cout << "*";
            }
            cout << " ";
        }
        cout << "\n";
    }
    
}