#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the number of positions to right rotate: ";
    cin >> d;

    // Validate that d is within a valid range
    if (d >= 0 && d < n) {
        int temp[d]; // Temporary array to store the rotated elements

        // Copy the last d elements to the temporary array
        for (int i = 0; i < d; i++) {
            temp[i] = arr[n - d + i];
        }

        // Shift the remaining elements to the right by d positions
        for (int i = n - 1; i >= d; i--) {
            arr[i] = arr[i - d];
        }

        // Copy the elements from the temporary array to the beginning
        for (int i = 0; i < d; i++) {
            arr[i] = temp[i];
        }

        cout << "Right rotated array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid value of d. Enter a valid value within the range [0, n-1]." << endl;
    }

    return 0;
}
