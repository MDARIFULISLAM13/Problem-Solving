/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-11
 * Time : 03:18:03
 * Problem Name : A_Fraction_and_Six
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll a, b;
    cin >> a >> b;
    string s, ss;
    cin >> s >> ss;
    vec as(26, 0);
    vec bs(26, 0);
    for (auto i : s)
    {

        as[i - 'a']++;
    }
    for (auto i : ss)
    {
        bs[i - 'a']++;
    }

    string ans = "";
    for (int i = 0; i <= 25; i++)
    {
        ll df = as[i] - bs[i];

        if (df == 1)
        {
            char c = 'a' + i;

            if (i == 's' - 'a' || i == 'i' - 'a' || i == 'x' - 'a')
            {
                ans += c;
            }
            else
            {
                no return;
            }
        }
        else if (df != 0)
        {
            no return;
        }
    }

    if (ans.size() != 3) no else yes
       
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