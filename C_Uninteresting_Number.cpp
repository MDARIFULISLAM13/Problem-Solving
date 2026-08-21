/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-21
 * Time : 11:21:24
 * Problem Name : C_Uninteresting_Number
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
    string s;
    cin >> s;
    int cnt2 = 0, cnt3 = 0;
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
        if (s[i] == '2')
            cnt2++;
        if (s[i] == '3')
            cnt3++;
    }

    sum += (cnt2 * 2);
    sum += (cnt3 * 6);

    vector<bool> dp(200, false);
    dp[0] = true;

    for (int i = 1; i <= min(30, cnt2); i++)
    {
        for (int j = 199; j >= 2; j--)
        {
            if (dp[j - 2])
            {
                dp[j] = true;
            }
        }
    }

    for (int i = 1; i <= min(30, cnt3); i++)
    {
        for (int j = 199; j >= 6; j--)
        {
            if (dp[j - 6])
            {
                dp[j] = true;
            }
        }
    }

   
    for (int i = 0; i <= 200; i++)
    {
        if (dp[i] == true)
        {
            if ((sum - i) % 9== 0)
            {
                yes return;
            }
        }
    }
    no
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