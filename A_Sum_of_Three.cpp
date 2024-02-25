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
        int a = n - 3, b = n - 5, c = n - 8, t = 0;
        if (a % 3 != 0 && (a != 1 && a != 2) && a > 0)
        {
            cout << "YES\n";
            cout << "1 2 " << a << "\n";
        }
        else if (b % 3 != 0 && (b != 1 && b != 4) && b > 0)
        {
            cout << "YES\n";
            cout << "1 4 " << b << "\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}