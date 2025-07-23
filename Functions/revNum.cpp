#include <iostream>
using namespace std;

int rev(int num,int sum) {
    if (num == 0) {
        return sum;
    }
    sum = (sum*10) + num%10;
    num = num/10;
    return rev(num,sum);
}

int main() {
    int num;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << rev(num,sum);
}