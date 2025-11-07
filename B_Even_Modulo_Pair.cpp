/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-07
 * Time : 01:04:13
 * Problem Name : B_Even_Modulo_Pair
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
    vec even;
    vec odd;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even.push_back(x);

            odd.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }

    if (even.size() >= 2)
    {
        cout << even[0] << " " << even.back() << endl;
        return;
    }

    for (auto i = 0; i < odd.size(); i++)
    {
        for (auto j = i + 1; j < odd.size(); j++)
        {
            ll ck = odd[j] % odd[i];

            if (ck % 2 == 0)
            {
                cout << odd[i] << " " << odd[j] << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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