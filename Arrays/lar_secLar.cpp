// Find the largest and second largest element of the array

#include <iostream>
using namespace std;

int largest(int n, int arr[]) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int secLargest(int n, int arr[]) {
    int Lar = largest(n, arr);
    int secLar = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] != Lar) {
            if (arr[i] > secLar) {
                secLar = arr[i];
            }
        }
    }
    return secLar;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout << "The largest number is: " << largest(n, arr) << endl;
    cout << "The second largest number is: " << secLargest(n, arr);
}