#include <iostream>

using namespace std;

void printDiamond(int n) {
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the diamond
     for (int i = 1; i <= n-1; i++) {
        // Print spaces
        for (int j = 1; j <=  i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int j = 1; j <= 2 * (n-i) - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;
    
    printDiamond(n);
    
    return 0;
}
