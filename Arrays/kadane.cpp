// find the maximum sum of a contiguous subarray in a given array

#include <iostream>
using namespace std;

int kadane(int arr[], int n) {
    int currSum=0, maxSum=0;
    for (int i = 0; i < n; i++) {

        currSum += arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
        }
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout << "Maximum sum of subarray: " << kadane(arr, n);
}