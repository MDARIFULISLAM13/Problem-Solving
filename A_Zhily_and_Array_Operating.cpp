/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-09
 * Time : 08:24:57
 * Problem Name : A_Zhily_and_Array_Operating
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

    for (int i = n-2; i >=0; i--)
    {
        if (v[i+1] > 0)
            v[i] += v[i+1];

    }

    ll cnt = 0;
    for(auto i : v)if(i>0)
            ++cnt;

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