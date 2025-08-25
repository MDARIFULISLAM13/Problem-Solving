/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-07-2025
 * time : 21:35:21
 * Problem Name : C_Count_Good_Numbers
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
ll remove(ll n)
{
    return n / 2 + n / 3 + n / 5 + n / 7 - n / (2 * 3) - n / (2 * 5) - n / (2 * 7) - n / (3 * 5) - n / (3 * 7) - n / (5 * 7) + n / (2 * 3 * 5) + n / (2 * 3 * 7) + n / (2 * 5 * 7) + n / (3 * 5 * 7) - n / (2 * 3 * 5 * 7);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        ll total = r - l + 1;
        ll dl = remove(r) - remove(l - 1);
        ll good = total - dl;

        cout << good << '\n';
    }

    return 0;
}

