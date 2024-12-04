/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-11-2024
 * time : 01:06:54
 * Problem Name : B_Omkar_and_Last_Class_of_Math
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
    for (int i = 3; i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            p.push_back(i);
        }
    }
}
void solve(ll n) {
    for (auto i : p) {
        if (n % i == 0) {
            cout << i << " " << n - i << endl;
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
    while (t--) {
        ll n;
        cin >> n;
        solve(n);
    }

    return 0;
}