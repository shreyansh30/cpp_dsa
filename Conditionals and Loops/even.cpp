#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n < 2){
        cout << "Enter a number greater than or equal to 2";
    }
    else {
        cout << "Even numbers from 2 to " << n << " are :";
        for (int i = 2; i < n+1; i++)
        {
            if (i % 2 == 0) {
                cout << i << " " ;
            }
        }
    }
}