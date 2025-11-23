/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-22
 * Time : 20:33:01
 * Problem Name : E_Toggle_the_Streetlights
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

    if (k > 11)
    {

        if (k % 2 == 0)
        {
            k = 10;
        }
        else
            k = 11;
    }

    for (int j = 1; j <= k; j++)
    {
        string ss = s;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == '1' && (i + 1 != n && s[i + 1] == '1'))
            {
                if (s[i] == '1')
                    ss[i] = '0';

                else
                    ss[i] = '1';
            }
        }
        s = ss;
    }

    cout << s << endl;
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