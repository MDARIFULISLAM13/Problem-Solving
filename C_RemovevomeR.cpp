/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-30
 * Time : 21:36:34
 * Problem Name : C_RemovevomeR
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
    string s;
    cin >> s;

    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            ++cnt;

        // cout << s[i] << " " << s[i - 1] << endl;
    }
  

    if (cnt == 2){
        cout << 2 << endl;
    }
    else
        cout << 1 << endl;
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