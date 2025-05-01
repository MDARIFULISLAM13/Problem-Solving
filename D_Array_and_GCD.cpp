/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-04-2025
 * time : 21:09:11
 * Problem Name : D_Array_and_GCD
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
vec pre;
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
    pre.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            p.push_back(i);
            pre.push_back(pre.back() + i);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vec a(n);
    ll sum = 0;
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
    }
    if (sum >= pre[n - 1])
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        if (sum >= pre[n - 2 - i])
        {
            cout << i + 1 << endl;
            return;
        }
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