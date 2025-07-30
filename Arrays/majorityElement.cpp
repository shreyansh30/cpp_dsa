// Element which appears more than n/2 times in the array else -1

#include <iostream>
using namespace std;

int majorityElement(int n, int arr[]) {
    float max = n/2;
    for (int i = 0; i < n; i++) {
        bool isPresent = false;
        float count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                isPresent = true;
                count++;
            }
        }
        if (count > max) {
            return arr[i];
        }
    }
    return -1;
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
    cout << "Major element is: " << majorityElement(n, arr) << endl;
}