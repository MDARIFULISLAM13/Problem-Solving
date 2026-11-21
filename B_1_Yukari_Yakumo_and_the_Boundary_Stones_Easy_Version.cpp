/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-21
 * Time : 21:45:18
 * Problem Name : B_1_Yukari_Yakumo_and_the_Boundary_Stones_Easy_Version
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));


ll c;
string s;
ll dp[55][105][105];

ll rec(int idx, ll a, ll b)
{
    if (dp[idx][a][b] != -1)
        return dp[idx][a][b];

    ll oa = a, ob = b;
    ll mx = a + b;
    for (int i = idx; i < c; i++)
    {
        if (s[i] == '-')
        {
            if (b == 0 && a != 0)
            {
                --a;
            }
            else if (b > 1)
            {
                ++a;
                --b;
            }
            else if (b == 1 && a != 0)
            {
                ll op1 = rec(i + 1, a - 1, b);
                ll op2 = rec(i + 1, a + 1, b - 1);
                mx = max({mx, op1, op2});
                return dp[idx][oa][ob] = mx;
            }
            else if (b == 1)
            {
                --b;
                ++a;
            }
        }
        else
        {
            if (b != 0)
            {
                ++b;
            }
            else
            {
                --a;
                ++b;
            }
        }
        if (b == 0 && a == 0)
            break;

        mx = max(mx, (a + b));
    }

    return dp[idx][oa][ob] = mx;
}

void solve()
{
    ll a, b;
    cin >> a >> b >> c;
    cin >> s;
    mem(dp, -1);

    cout << rec(0, a, b) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}