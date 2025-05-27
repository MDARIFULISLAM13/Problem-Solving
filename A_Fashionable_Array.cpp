/**
 *
 * Author : Md.Ariful Islam
 * Date : 25-05-2025
 * time : 18:40:32
 * Problem Name : A_Fashionable_Array
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
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int cnt1 = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] % 2 == a[0] % 2)
            break;
        ++cnt1;
    }

    int cnt2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == a.back() % 2)
            break;

        ++cnt2;
    }
    cout << min(cnt1, cnt2) << endl;
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