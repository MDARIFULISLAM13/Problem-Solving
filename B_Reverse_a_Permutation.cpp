/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-26
 * Time : 19:54:40
 * Problem Name : B_Reverse_a_Permutation
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
    vec v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll x = n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            --x;
        }
        else
        {
            ll lst = i;
            for (int j = i; j < n; j++)
            {
                if (v[j] == x)
                {
                    lst = j;
                    break;
                }
            }

            reverse(v.begin() + i, v.begin() + lst + 1);
            break;
        }
    }
    for (auto i : v)
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