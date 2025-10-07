/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-10-07
 * Time : 20:35:35
 * Problem Name : B_Deck_of_Cards
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans += "+";
    }
    ll cnt1 = 0, cnt0 = 0, cntq = 0;

    for (auto i : s)
    {
        if (i == '1')
            cnt1++;
        else if (i == '0')
            cnt0++;
        else
            cntq++;
    }
    ll x = cnt1 + cnt0 + (cntq * 2);

    for (int i = 0; i < cnt0; i++)
    {
        ans[i] = '-';
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        if (cnt1 == 0)
            break;
        ans[i] = '-';
        cnt1--;
    }

    if (n <= x)
    {

        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == '+')
                ans[i] = '?';
        }
    }
    else
    {
        ll cnt1q = cntq;
        for (int i = 0; i < ans.size(); i++)
        {
            if (cnt1q == 0)
                break;
            if (ans[i] == '+')
            {
                ans[i] = '?';
                cnt1q--;
            }
        }
        cnt1q = cntq;

        for (int i = ans.size() - 1; i >= 0; i--)
        {
            if (cnt1q == 0)
                break;
            if (ans[i] == '+')
            {
                ans[i] = '?';
                cnt1q--;
            }
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