/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-04-2025
 * time : 06:13:40
 * Problem Name : A_Wonderful_Sticks
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
    string s;
    cin >> s;

    int m = 1, mx = n;
    vec a;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            a.push_back(m);
            m++;
        }
        else
        {
            a.push_back(mx);

            mx--;
        }
    }
    a.push_back(mx);
    reverse(a.begin(), a.end());
    for (int i : a)
    {
        cout << i << " ";
    }
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