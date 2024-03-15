#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    for (int i = 1; i <= numRows; i++) {
        // Print spaces
        for (int j = 1; j <= numRows - i; j++) {
            cout << " ";
        }

        // Print ascending alphabet
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }

        // Print descending alphabet
        for (int j = i - 1; j >= 1; j--) {
            cout << char('A' + j - 1);
        }

        cout << endl;
    }

    return 0;
}
