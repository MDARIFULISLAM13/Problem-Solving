/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-05
 * Time : 21:08:21
 * Problem Name : D_MEX_Multiset
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

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;

    vec v(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v[i] = x;
        mp[x]++;
    }

    if (mp[0] == 0)
    {
        cout << "YES\n";

        for (int i = 0; i < n; i++)
        {
            cout << "A";
        }
        cout << endl;
        return;
    }

    ll a = -1, b = -1, c = -1;
    bool oka = true, okb = true, okc = true;
    for (int i = 0; i <= 1e9 + 123; i++)
    {

        if (mp[i] >= 3)
        {
            if (oka == true)
            {
                a = i;
            }
            if (okb == true)
            {
                b = i;
            }
            c = i;
        }
        else if (mp[i] == 2)
        {
            oka = false;
            if (okb == true)
            {
                b = i;
            }
            c = i;
        }
        else if (mp[i] == 1)
        {
            c = i;
            okb = false;
            break;
        }
        else
        {
            break;
        }
    }
    if (a == -1 && b == -1)
    {
        cout << "NO\n";
        return;
    }

    vector<char> vc(n, '!');
   
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