/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-21
 * Time : 20:39:01
 * Problem Name : A_Equal_Occurrences
 *
 **/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
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


    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mp[x]++;
    }

    int mx = 0;

    for (int i = 1; i <= n; ++i) {
        int cr = 0;
        for (auto p : mp) {
            int f = p.second;
            if (f >= i) {

                cr += i;
            }
        }

        mx = max(mx, cr);
    }

    cout << mx << endl;
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