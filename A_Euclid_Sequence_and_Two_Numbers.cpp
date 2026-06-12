/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-07
 * Time : 20:58:49
 * Problem Name : A_Euclid_Sequence_and_Two_Numbers
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
    rev(v);
    if (v.size() == 2)
    {
        cout << v[0] << " " << v[1] << endl;
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (v[i - 2] % v[i - 1] != v[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << v[0] << " " << v[1] << "\n";
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