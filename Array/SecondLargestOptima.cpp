#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int largest =INT32_MIN;
    int secondLargest = INT32_MIN;

    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < size; i++) {
        int arr[i];
        cin >> arr[i];

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "The first largest element in the array is: " << largest << endl;

    if (secondLargest == INT32_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }

    return 0;
}
