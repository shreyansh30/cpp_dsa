// Find the smallest positive missing number in the array

#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    bool avail[n+1];
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            avail[arr[i]] = true;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!avail[i]) {
            return i;
        }
    }
    return n+1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Missing Number in array: " << missingNumber(arr, n);
}