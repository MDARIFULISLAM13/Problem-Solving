/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-06-2025
 * time : 14:18:02
 * Problem Name : E_Sponsor_of_Your_Problems
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
    ll l, r;
    cin >> l >> r;
    string s = to_string(l);
    string S = to_string(r);
    reverse(s.begin(), s.end());
    reverse(S.begin(), S.end());

    ll ans = 0;
    while (!s.empty())
    {
        if (s.back() == S.back())
        {
            ans += 2;
            s.pop_back();
            S.pop_back();
        }
        else
        {
            break;
        }
    }
    reverse(s.begin(), s.end());
    reverse(S.begin(), S.end());

  
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        char C = S[i];

        if (i == 0 && ++c == C)
        {
            ++ans;
        }
        else if (S[i] == '0' && s[i] == '9')
        {
            ++ans;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
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