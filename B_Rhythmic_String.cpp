/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-06
 * Time : 01:57:41
 * Problem Name : B_Rhythmic_String
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
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v);
    vec ans(n, 1);

    for (int i = 0; i < n; i++)
    {
        ll x = v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] % x == 0)
            {
                ans[i]++;
            }
        }
    }

    ll ck = 0;
    for (int i = 0; i < n; i++)
    {
        ck = max(ck, ans[i]);
    }

    cout<<n-ck<<endl;
    
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