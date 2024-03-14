#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a = max(x, y);
    if ((min(x, y) != 0 || a == 0) || ((n - 1) % (x + y) != 0))
    {
        cout << "-1\n";
        return;
    }
    for (int i = 2; i <= n; i += a)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << i << " ";
        }
    }
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}