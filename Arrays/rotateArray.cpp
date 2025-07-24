#include <iostream>
using namespace std;

void reverse(int arr[], int indexS, int indexE) {
    while (indexS < indexE) {
        int temp = arr[indexS];
        arr[indexS] = arr[indexE];
        arr[indexE] = temp;
        indexS++;
        indexE--;
    }
}

void rotateArray(int arr[], int n, int k) {
    reverse(arr, 0, k-1); // rotate before k
    reverse(arr, k, n-1); // rotate after k
    reverse(arr, 0, n-1); // rotate whole arr
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n]; // 1 2 3 4 5
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "Enter k: ";
    cin >> k;
    cout << "Array after rotation: ";
    rotateArray(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}