/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-12
 * Time : 17:22:43
 * Problem Name : B_ABAB_Construction
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
    ll n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1 && s[0] == 'b')
    {
        no return;
    }
    rev(s);

    
    ll a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {

       
        if (s[i] == 'a')
            ++a;
        if (s[i] == 'b')
            ++b;

        if (s[i] == '?')
        {
            if (a > b)
                ++b;
            else if (b > a)
                ++a;

            else
            {
                if (i + 1 != n && s[i + 1] == 'a')
                {
                    
                    ++b;
                }

                else
                    ++a;
            }
        }
        
        if (abs(a - b) > 1)
        {
            no return;
        }
    }

    if (b > a)
    {

        no return;
    }

    yes
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