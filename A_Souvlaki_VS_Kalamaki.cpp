/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-11
 * Time : 09:30:45
 * Problem Name : A_Souvlaki_VS_Kalamaki
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
    {
        cin >> v[i];
    }
    sort(v);
    for (int i = 1; i < n; i += 2)
    {
        if (i + 1 != n)
        {
            if(v[i]!=v[i+1]){
                no return;
            }
        }
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