/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-10-17
 * Time : 20:37:45
 * Problem Name : A_Hey_It_s_Me_Souvlakity
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
    ll si = 0, ei = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            si = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ei = i;
            break;
        }
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ++cnt;
    }
    if (cnt == 2)
    {
        cout << 1 << endl;
        return;
    }

    cout << ei - si << endl;
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