/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-04-2025
 * time : 21:03:06
 * Problem Name : C_Simple_Repetition
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
const int lm = 1e7 + 123;
bitset<lm> ip;
vector<int> p;
void Sieve_of_Eratosthenes(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i * i; j <= n; j += i * 2)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;
}

bool ok(ll y)
{
    if (y <= lm)
    {
        return ip[y];
    }

    for (ll i = 2; i * i <= y; ++i)
    {
        if (y % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    ll x;
    cin >> x;
    int k;
    cin >> k;
    if (k == 1)
    {
        cout << (ok(x) ? "YES" : "NO") << endl;
    }
    else
    {
        cout << ((x == 1 && k == 2) ? "YES" : "NO") << endl;
    }
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Sieve_of_Eratosthenes(lm);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}