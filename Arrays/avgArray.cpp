// Count the number of elements greater than the average of the array

#include <iostream>
using namespace std;

int strictGT(int n, int arr[]) {
    int avg=0;
    for (int i = 0; i < n; i++) {
        avg = avg + arr[i];
    }
    avg = avg / n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }
    return count;
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
    cout << "Elements greater than the average of the array are : " << strictGT(n, arr) << endl;
}