/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-03-2025
 * time : 02:41:26
 * Problem Name : A_Olympiad_Date
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
    vector<char> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s = "00012235";
    int mx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        bool f = true;
        for (int j = 0; j < n; j++)
        {
            if (s[i] == a[j])
            {
                mx = max(mx, j + 1);
                a[j] = '?';
                f = false;
                break;
            }
        }
        if (f == true)
        {
            cout << 0 << endl;
            return;
        }
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
    {
        solve();
    }

    return 0;
}