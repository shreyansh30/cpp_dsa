#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start=0,end=n-1;
    while (start<=end) {
        int temp=arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements in array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Reversed Array : ";
    reverse(arr, n);
}