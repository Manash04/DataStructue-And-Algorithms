#include <iostream>
#include <set>
using namespace std;

void printUnion(int arr1[], int arr2[], int m, int n) {
    set<int> unionSet;

    for (int i = 0; i < m; i++) {
        unionSet.insert(arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        unionSet.insert(arr2[i]);
    }

    cout << "Union of the two arrays: ";
    for (int num : unionSet) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int m, n;

    cout << "Enter the size of the first array: ";
    cin >> m;
    int arr1[m];

    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n;
    int arr2[n];

    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    printUnion(arr1, arr2, m, n);

    return 0;
}
