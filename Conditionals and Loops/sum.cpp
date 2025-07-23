#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0)
    {
        int sum = 0;
        for (int i = 1; i < n+1; i++)
        {
            sum += i;
        }
        cout << "Sum = " << sum;
    }
    else
    {
        cout << "Stupid or what? Asked to enter a positive number.";
    }
}