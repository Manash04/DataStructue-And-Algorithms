#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int num[n];
    int ans[2 * n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        ans[i] = ans[i + n] = num[i];
    }
    cout << "Concatenated array: ";
    for (int i = 0; i < 2 * n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}

 