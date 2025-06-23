/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2025
 * time : 21:17:03
 * Problem Name : B_Square_or_Not
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int x = sqrt(n);
    if (x * x != n)
    {
        cout << "No\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < x || (i + 1) > (n - x))
        {

            if (s[i] != '1')
            {
                cout << "No\n";
                return;
            }
        }
        else
        {

            if (i % x == 0 || (i + 1) % x == 0)
            {
                if (s[i] != '1')
                {
                    cout << "No\n";
                    return;
                }
            }
            else{
                if (s[i] == '1')
                {
                    cout << "No\n";
                    return;
                }
            }
        }
    }
    cout << "Yes\n";
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