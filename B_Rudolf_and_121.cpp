#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (a[i] >= 2)
        {
            a[i] = a[i] - (a[i - 1] * 2);
            a[i + 1] = a[i + 1] - a[i - 1];
            a[i - 1] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}