#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int m = 0;
    if (n % 2 != 0)
    {
        m = (n / 2) + 1;
    }
    else
    {
        m = n / 2;
    }
    m -= 1;
    int ans = 0;
    if (a[m + 1] == a[m])
    {
        ans += 2;
    }
    if (a[m - 1] == a[m])
    {
        ans += 1;
    }
    if (ans == 0)
    {
        ans += 1;
    }

    cout << ans << endl;
    ;
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