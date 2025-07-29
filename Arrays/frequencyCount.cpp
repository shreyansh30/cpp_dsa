// Count the frequency of each element in the array

#include <iostream>
using namespace std;

void freq(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        bool isPresent = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isPresent = true;
                break;
            }
        }
        if (isPresent) {
            continue;
        }
        int count = 1;
        for (int j = i+1; j<n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " appears " << count << " times." << endl;
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
    freq(n,arr);
}