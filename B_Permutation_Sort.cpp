#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (is_sorted(a, a + n))
        {
            cout << "0\n";
        }
        else if (a[0] == 1 || a[n - 1] == n)
        {
            cout << "1\n";
        }
        else if (a[0] == n && a[n - 1] == 1)
        {
            cout << "3\n";
        }
        else
        {
            cout << "2\n";
        }
    }
}