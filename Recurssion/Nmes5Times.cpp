#include <iostream>
using namespace std;

int count = 0;

void print() {
    if (count == 5) {
        return;
    }

    cout << "Manash" << endl;
    count++;
}

void f(int i, int n) {
    if (i >= n)
        return;
    print();
    f(i + 1, n);
}

int main() {
    print();
    int n;
    cin >> n;
    f(1, n);
    return 0;
}
