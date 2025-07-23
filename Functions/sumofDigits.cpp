#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    if (n == 0) {
        return 0;
    }
    else
        return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin>>n;
    cout << sumOfDigits(n);
}