#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int mn = 1, mx = 1e9, ans = 0, x, a;
    vector<int> nev;
    while (n--)
    {
        cin >> a >> x;
        if (a == 1)
        {
            mn = max(mn, x);
        }
        if (a == 2)
        {
            mx = min(mx, x);
        }
        if (a == 3)
        {
            nev.push_back(x);
        }
    }
    for (int i : nev)
    {
        if (i >= mn && i <= mx)
        {
            ans++;
        }
    }
    cout << max(mx - mn - ans + 1, 0) << "\n";
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