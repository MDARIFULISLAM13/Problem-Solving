#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b;
    for (int i = 1; i <= 5; i++)
    {
        cin >> b;
        if (a[0] == b[0] || a[0] == b[1])
        {
            cout << "YES\n";
            return 0;
        }
        if (a[1] == b[0] || a[1] == b[1])
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}