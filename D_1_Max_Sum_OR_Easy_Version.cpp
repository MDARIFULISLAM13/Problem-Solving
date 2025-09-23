

/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-21
 * Time : 21:35:40
 * Problem Name : D_1_Max_Sum_OR_Easy_Version
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define highl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.high());
#define sort(a) sort(a.begin(), a.high());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll l, r;
    cin >> l >> r;
    int n = r - l + 1;
    vec v(n);

    int low = l, high = r;

    while (high >= low
        ) {
        int k = 1;

        while (k <= high)
        {
            k <<= 1;
        }
        k -= 1;
        int c = k - high;

        for (int i = c; i <= high; ++i) {
            v[i] = k - i;
        }

        high = c - 1;
    }


    ll sum = 0;
    for (int i = 0; i < n; ++i)
        sum += (v[i] | i);

    cout << sum << "\n";

    for (auto i : v)cout << i << " ";

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