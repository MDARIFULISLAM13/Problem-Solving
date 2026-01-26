/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-12-19
 * Time : 21:05:00
 * Problem Name : C_XOR_factorization
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

pair<ll, ll> val(ll n)
{
    bitset<60> bt(n);
    ll a = 0, b = 0;
    bool ok = false;

    for (ll i = 59; i >= 0; i--)
    {
        if (bt[i])
        {
            if (a <= b)
                a |= (1LL << i);
            else
                b |= (1LL << i);
            ok = true;
        }
        else if (ok)
        {
            if (a + (1LL << i) <= n && b + (1LL << i) <= n)
            {
                a |= (1LL << i);
                b |= (1LL << i);
            }
        }
    }
    return {a, b};
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k % 2 != 0)
    {
        for (ll i = 0; i < k; i++)
        {
            cout << n << " ";
        }
        cout << endl;
        return;
    }

    for (ll i = 1; i < k - 1; i++)
    {
        cout << n << " ";
    }

    int mx = -1;
    int A = 0, B = 0;

    for (int a = 0; a <= n; a++)
    {
        for (int b = 0; b <= n; b++)
        {
            if ((a ^ b) == n)
            {
                if (a + b > mx)
                {
                    mx = a + b;
                    A = a;
                    B = b;
                }
            }
        }
    }

    if (mx != -1)
        cout << A << " " << B << " " << mx << endl;


return;
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