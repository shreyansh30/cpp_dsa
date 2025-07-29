//check if the array is sorted in ascending or descending order

#include <iostream>
using namespace std;

int sorted(int n, int arr[]) {
    int asc=0,dsc=0;
    for (int i = 1; i < n-1; i++) {
        if (arr[i-1] > arr[i] && arr[i] > arr[i + 1]) {
            dsc = 1;
        }
        else if (arr[i-1] < arr[i] && arr[i] < arr[i + 1]) {
            asc = 1;
        }
        else {
            asc = 0;
            dsc = 0;
            break;
        }
    }
    if (asc == 1) {
        return 1;
    }
    else if (dsc == 1) {
        return 2;
    }
    else {
        return 0;
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
    int res = sorted(n, arr);
    if (res == 1) {
        cout << "Array is in ascending order" << endl;
    }
    else if (res == 2) {
        cout << "Array is in descending order" << endl;
    }
    else {
        cout << "Array isn't sorted" << endl;
    }

}