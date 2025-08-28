/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-08-2025
 * time : 21:01:06
 * Problem Name : B_Like_the_Bitset
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

    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0, mx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            ++cnt;
            mx = max(cnt, mx);
        }
        else
        {
            cnt = 0;
            mx = max(cnt, mx);
        }
    }
    if (mx >= k)
    {
        cout << "NO\n";
        return;
    }

    vec v(n);
    cnt = 1;
    mx = n;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            v[i] = mx;
            --mx;
        }
        else
        {
            v[i] = cnt;
            ++cnt;
        }
    }
    cout << "YES\n";
    for (auto i : v)
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