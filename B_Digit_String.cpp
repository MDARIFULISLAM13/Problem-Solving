/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-18
 * Time : 20:45:04
 * Problem Name : B_Digit_String
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
    string s;
    cin >> s;

    ll cnt = 0;
    for (auto i : s)
        if (i == '4')
            ++cnt;

    ll cnt13 = 0;
    bool ok = false;
    for (auto i : s)
    {
        if (i == '1' || i == '3')
            ok = true;

        if (ok == true && i == '2')
            ++cnt13;
    }
    rev(s);
    ll cnt2 = 0;
    bool ok = false;

    for (auto i : s)
    {
        if (i == '2')
            ok = true;

        if (ok == true && (i == '1' || i == '3'))
            ++cnt2;
    }

    rev(s);

  

    cnt += min(cnt2, cnt13);

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