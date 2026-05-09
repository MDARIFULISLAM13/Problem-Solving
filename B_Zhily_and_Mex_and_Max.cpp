/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-09
 * Time : 08:34:30
 * Problem Name : B_Zhily_and_Mex_and_Max
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

    ll n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v);
    if (v[n - 1] == 0)
    {
        cout << n << endl;
        return;
    }

    // for (auto i : v)
    //     cout << i << " ";
    ll sum = v[n - 1];

    sum *= n;

    bool ok = true;

    map<int, bool> mp;

    for (int i = 0; i < n - 1; i++)
        mp[v[i]] = true;

    ll pre = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ok)
        {
            if (mp[i] == true)
            {
                pre = i + 1;
                if (i +1== v[n - 1])
                {
                    ++pre;
                }
            }

            else
            {
                ok = false;
            }
        }
        sum += pre;
    }

    cout << sum << endl;
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