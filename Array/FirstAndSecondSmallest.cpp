#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int Smallest =INT32_MAX;
    int secondSmallest = INT32_MAX;

    cout<<"Enter the values of the array: "<<endl;
    for (int i = 0; i < size; i++) {
        int arr[i];
        cin >> arr[i];

        if (arr[i] < Smallest) {
            secondSmallest = Smallest;
            Smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != Smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "The first smallest element in the array is: " << Smallest << endl;

    if (secondSmallest == INT32_MAX) {
        cout << "There is no second smallest element." << endl;
    } else {
        cout << "The second smallest element in the array is: " << secondSmallest << endl;
    }

    return 0;
}
