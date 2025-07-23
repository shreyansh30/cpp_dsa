#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "Enter first num : ";
    cin >> x;
    cout << "Enter second num : ";
    cin >> y;
    if (x > y) {
        cout << x << " is greater than " << y << endl;
    }
    else if (x < y) {
        cout << y << " is greater than " << x << endl;
    }
    else {
        cout << x << " is equal to " << y << endl;
    }
}