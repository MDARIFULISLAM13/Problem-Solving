/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-05-2025
 * time : 21:11:53
 * Problem Name : B_Not_Quite_a_Palindromic_String
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (auto i : s)
    {
        if (i == '0')
            cnt0++;
        else
            cnt1++;
    }

    int cntk = 0;
    while (1)
    {
        if (cnt0 < 2 && cnt1 < 2)
        {
            break;
        }
        if (cntk >= k)
        {
            break;
        }

        if (cnt0 > cnt1)
        {
            cnt0 -= 2;
        }
        else
        {
            cnt1 -= 2;
        }
        ++cntk;
    }

    int mx = min(cnt0, cnt1);
    cnt0 -= mx;
    cnt1 -= mx;
    mx = max(cnt0, cnt1);

    if (mx > 1 || cntk != k)
        cout << "NO\n";
    else
        cout << "YES\n";
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