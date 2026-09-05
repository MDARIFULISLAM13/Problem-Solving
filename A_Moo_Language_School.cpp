/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-05
 * Time : 20:47:19
 * Problem Name : A_Moo_Language_School
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
    string s;
    cin >> s;

    ll ans = 0;
    for (int i = 0; i < n; i += k)
    {
        bool ok = false;
        for (int j = i; j < i + k; j++)
        {
            if (s[j] == '0')
            {
                ok = true;
                break;
            }
        }
        if (ok == false)
        {
            ++ans;
        }
    }
    cout << ans << endl;
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