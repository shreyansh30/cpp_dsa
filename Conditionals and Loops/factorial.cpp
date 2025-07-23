#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int fact = 1;
    cout << "Fact = ";
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        cout << i << " x ";
    }
    cout << "= " << fact;

    
}   