/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-14
 * Time : 16:49:48
 * Problem Name : C_1_Seating_Arrangement_Easy_Version
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, t, s;
    cin >> n >> t >> s;
    s -= 1;
    ll ans = 0;
    ll a = 0, ex = 0;
    string ss;
    cin >> ss;
    for (auto i : ss)
    {

        if (i == 'I')
        {
            if (t > 0)
            {
                ++ans;
                --t;
                ex += s;
            }
        }
        else if (i == 'E')
        {
            if (ex > 0)
            {
                --ex;
                ++ans;
            }
            else
            {
                if (t > 0 && a > 0)
                {
                    --t;
                    --a;
                    ++ans;
                    ex += s;
                }
            }
        }
        else if (i == 'A')
        {
            if (ex > 0)
            {
                --ex;
                ++a;
                ++ans;
            }
            else if (t > 0)
            {
                --t;
                ++ans;
                ex += s;
            }
        }
    }

    cout << ans << endl;
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