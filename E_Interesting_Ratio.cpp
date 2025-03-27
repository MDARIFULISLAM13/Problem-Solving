/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-03-2025
 * time : 19:56:52
 * Problem Name : E_Interesting_Ratio
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
int pre[lm] = {0};
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

    for (int i = 3; i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            p.push_back(i);
        }
    }
}

void solve()
{
    for (auto i = 1; i <= lm; i++)
    {
        for (auto j : p)
        {
            if (i * j > lm)
            {
                break;
            }
            else
            {
                pre[i * j]++;
            }
        }
    }
    for (int i = 2; i <= lm; i++)
    {
        pre[i] = pre[i - 1] + pre[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Sieve_of_Eratosthenes(lm);
    solve();
    int t;
    cin >> t;
    while (t--)
    {
        int v;
        cin >> v;
        cout << pre[v] << endl;
    }

    return 0;
}
