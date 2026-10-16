/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-23
 * Time : 19:08:07
 * Problem Name : C_AND_OR_Sort
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
    if (s[0] == '1')
    {
        ll cnt = 0;
        for (auto i : s)
            if (i == '0')
                ++cnt;

        cout << cnt << endl;
        return;
    }

    ll cnt0 = 0, cnt1 = 0;
    ll ex = 0;
    for (auto i : s)
    {
        if (i == '0')
            ++cnt0;
        else
            ++cnt1;

        if (cnt0 >= cnt1)
        {

            ex += cnt1;
            cnt1 = cnt0 = 0;
        }
    }

    cout << cnt0+ex << endl;
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