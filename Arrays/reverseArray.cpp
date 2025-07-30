// Reversing the array in place

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int k = n-1;
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        k--;
    }
    cout << "Reversed Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
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
    reverseArray(arr, n);
}