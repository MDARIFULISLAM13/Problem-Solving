/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-03-2025
 * time : 21:59:31
 * Problem Name : B_Serval_and_Final_MEX
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
    vector<int> a(n);
    bool f0 = false;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            f0 = true;
            ++cnt;
        }
    }
    if (f0 == false)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }
    if (a[0] != 0)
    {
        cout << 2 << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    int k = 1;
    if (a[1] == 0)
    {
        k = 2;
    }
    if (cnt > k)
    {
        cout << 3 << endl;
        cout << 3 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }
    cout << 2 << endl;
    cout << 1 << " " << 2 << endl;
    cout << 1 << " " << n - 1 << endl;
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
        solve();
    }

    return 0;
}