#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    int mx = x, mn = x;

    for (int i = 0; i < n; i++)
    {
        if (mx != 0)
        {
            mx/=2;
        }
        else
        {
            break;
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (mx > 1)
        {
            mx = (mx + 1)/2;
        }
        else
        {
            break;
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (mn > 1)
        {
            mn = (mn + 1) /2;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (mn != 0)
        {
            mn /= 2;
        }
        else
        {
            break;
        }
    }

    cout << mn << " " << mx << endl;
}

int main()
{
    int ttest;
    cin >> ttest;
    while (ttest--)
    {
        solve();
    }
    return 0;
}



