#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (n < i)
        return;
    cout << n << " ";
    // n -= 1;
    print(i, n-1);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print(1, n);
    return 0;
}