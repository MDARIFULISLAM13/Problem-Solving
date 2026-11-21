/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-21
 * Time : 21:52:16
 * Problem Name : C_Reimu_Hakurei_and_the_Youkai
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
    ll n, k;
    cin >> n >> k;
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v);
    v.pop_back();
    ll cnt = 0;
    ll mn = k;
    for (int i = 0; i < n - 1; i++)
    {

        
        if (v[i] <= mn)
        {
            mn += k;
        }
        else
        {
            while (v[i] > mn)
            {
                ++cnt;
                mn += k;
            }
            mn += k;
        }
       
    }

    cout << cnt << endl;
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