// In the array where elements appear multiple times, print the element that appears once

#include <iostream>
using namespace std;

void oneTime(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        bool isPresent = false;
        for (int j = 0; j < n; j++) {
            if (i !=j && arr[i] == arr[j]) {
                isPresent = true;
                break;
            }
        }
        if (isPresent == false) {
            cout << arr[i];
        }
    }
}

int main () {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Only element that appear once : ";
    oneTime(n, arr);
}