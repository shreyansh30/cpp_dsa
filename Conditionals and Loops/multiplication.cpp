#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int mul = 1;
    for (int i = 1; i <= 10; i++)
    {
        mul = n*i;
        cout << n << " x " << i << " = " << mul << "\n";
    }
    
}