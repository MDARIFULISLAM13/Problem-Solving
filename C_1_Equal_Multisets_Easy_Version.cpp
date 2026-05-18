/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-10
 * Time : 06:03:58
 * Problem Name : C_1_Equal_Multisets_Easy_Version
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
    ll n, k;
    cin >> n >> k;
    vec v(n), vv(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> vv[i];

    map<int, bool> mp;
    for (int i = 0; i < n; i++)
    {

        if (vv[i] != -1)
        {
            if (mp[vv[i]])
            {
                no return;
            }
            mp[vv[i]] = true;

            if (v[i] == vv[i])
                continue;

            // if (abs(i - 0)+1 > k || abs(i - n) > k)
            // {
            no return;
            // }
        }
        // cout << i << " " << abs(i - 0) << " " << abs(i - n) << endl;
    }
    yes
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