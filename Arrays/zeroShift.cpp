// Move all the zeros at the end of the array

#include <iostream>
using namespace std;


// void zeroShift(int arr[], int n) {
//     int k = n-1;
//     for (int i = 0; i < k; i++) {
//         if (arr[i] == 0) {
//             swap(arr[i], arr[k]);
//             k--;
//         }
//     }
//     cout << "Array after zero shift : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //zeroShift(arr, n);
}
//  NOT COMPLETED; CHECK BACK TOMORROW //