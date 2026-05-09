/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-30
 * Time : 20:53:52
 * Problem Name : D_Palindromex
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
    ll x = n + n;
    vec v(x + 1);
    bool ok = false;
    int o1 = 1e9, o2 = 1e9;
    for (int i = 1; i <= x; i++)
    {
        cin >> v[i];
        if (v[i] == 0 && ok == false)
        {
            ok = true;
            o1 = i;
        }
        else if (v[i] == 0 and ok == true)
        {
            o2 = i;
        }
    }

    // cout << o1 << " " << o2 << endl;

    vec vvv;
    vvv.push_back(0);

    ll y1 = abs(x - o1);
    ll y2 = abs(1 - o1);
    ll y = min(y1, y2);
    ll cnt = 1;
    while (y--)
    {

        if (v[o1 - cnt] == v[o1 + cnt])
        {
            vvv.push_back(v[o1 - cnt]);
        }
        else
        {
            break;
        }
        ++cnt;
    }

    y1 = abs(x - o2);
    y2 = abs(1 - o2);
    y = min(y1, y2);
    cnt = 1;
    vec vvvv;
    vvvv.push_back(0);

    while (y--)
    {

        if (v[o2 - cnt] == v[o2 + cnt])
        {
            vvvv.push_back(v[o2 - cnt]);
        }
        else
        {
            break;
        }
        ++cnt;
    }

    vec vv;

    for (int i = n; i >= 1; i--)
    {
        if (v[i] == v[n + n - i + 1])
        {
            vv.push_back(v[i]);
        }
        else
        {
            break;
        }

        // cout << v[i] << " " << v[n + n - i + 1] << endl;
    }

    ll ans1 = 0;

    sort(vv);
    bool found = false;

    for (int i = 0; i < vv.size(); i++)
    {
        if (i != vv[i])
        {
            ans1 = i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        ans1 = vv.size();
    }

 
    ll ans2 = 0;
    sort(vvv);
    bool found1 = false;
    for (int i = 0; i < vvv.size(); i++)
    {
        if (i != vvv[i])
        {
            ans2 = i;
            found1 = true;
            break;
        }
    }
    if (!found1)
    {
        ans2 = vvv.size();
    }

    ll ans3 = 0;
    sort(vvvv);
    bool found2 = false;

    for (int i = 0; i < vvvv.size(); i++)
    {
        if (i != vvvv[i])
        {
            ans3 = i;
            found2 = true;
            break;
        }
    }
    if (!found2)
    {
        ans3 = vvvv.size();
    }

    cout << max(ans1, max(ans2, ans3)) << endl;
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