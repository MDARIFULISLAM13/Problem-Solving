#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define sp(x) fixed << setprecision(x)
#define memo(a, b) memset(a, b, sizeof(a))

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    while (test--)
    {

        ll n, m;
        cin >> n >> m;

        ll arr[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> arr[i][j];

        ll ans1[n + 5][m + 5];
        ll ans2[n + 5][m + 5];
        for (ll up = 1, down = n; up <= down; up++, down--)
        {
            for (ll s = 1, e = m; s <= e; s++, e--)
            {
                ll val1 = (arr[up][s] + arr[up][e] + arr[down][s] + arr[down][e]) / 4;
                ll val2 = ((arr[up][s] + arr[up][e] + arr[down][s] + arr[down][e]) + 3) / 4;
                ans1[up][s] = val1;
                ans1[up][e] = val1;
                ans1[down][s] = val1;
                ans1[down][e] = val1;

                ans2[up][s] = val2;
                ans2[up][e] = val2;
                ans2[down][s] = val2;
                ans2[down][e] = val2;
            }
        }
        ll Ans1 = 0;
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                Ans1 += abs(arr[i][j] - ans1[i][j]);

        ll Ans2 = 0;
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                Ans2 += abs(arr[i][j] - ans2[i][j]);

        cout << min(Ans1, Ans2) << endl;
    }
}