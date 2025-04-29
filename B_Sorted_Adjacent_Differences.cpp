/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-04-2025
 * time : 09:34:21
 * Problem Name : B_Sorted_Adjacent_Differences
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

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    vector<ll> res;
    int mid = (n - 1) / 2;
    res.push_back(a[mid--]);
    int right = mid + 2;

    while (mid >= 0 || right < n)
    {
        if (right < n)
            res.push_back(a[right++]);
        if (mid >= 0)
            res.push_back(a[mid--]);
    }

    for (auto x : res)
        cout << x << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 int t;
    cin >> t;
    while (t--) {
        solve();
    }


    return 0;
}


