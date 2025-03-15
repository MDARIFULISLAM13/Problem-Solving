/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-03-2025
 * time : 16:01:38
 * Problem Name : C_Breach_of_Faith
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    int n;
    cin >> n;
    n += n;
    vec a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    vec ans;
    ans.push_back(a.back());
    a.pop_back();
    ll v = a.back();
    a.pop_back();
    for (int i = 0; i < a.size(); i++)
    {
        ll x = a[i];
        ll y = a.back();
        a.pop_back();
        sum += (y - x);
        ans.push_back(x);
        ans.push_back(y);
    }

    ll z = ans[0] + v + sum;
    ans.push_back(z);
    ans.push_back(v);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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