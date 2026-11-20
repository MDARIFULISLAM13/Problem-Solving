/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-20
 * Time : 14:15:10
 * Problem Name : D_Letters_Down
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
    string s;
    cin >> s;
    map<char, bool> mp;
    ll cnt = 0;
    ll l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {

            char mn = min(s[l], s[r]);
            char mx = max(s[l], s[r]);

            while (mx != mn)
            {
                if (mp[mx] == true)
                {
                    --mx;
                }
                else
                {
                    mp[mx] = true;
                    ++cnt;
                    --mx;
                }
            }
        }
        l++, r--;
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