/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-11-2024
 * time : 01:15:35
 * Problem Name : D_Buying_Shovels
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
}vector<int> findDivisors(const vector<int>& primes, int limit) {
    vector<int> divisors = { 1 };
    // Iterate through each prime
    for (int prime : primes) {
        vector<int> newDivisors;

        // Multiply existing divisors by all powers of the current prime
        for (int divisor : divisors) {
            int newDivisor = divisor * prime;

            // Only add if the new divisor is less than the limit
            if (newDivisor < limit) {
                newDivisors.push_back(newDivisor);
            }
        }

        // Add new divisors to the list
        for (int newDivisor : newDivisors) {
            divisors.push_back(newDivisor);
        }
    }

    // Sort and remove duplicates
    sort(divisors.begin(), divisors.end());
    divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());

    return divisors;
}

void arif() {
    ll n, k;
    cin >> n >> k;
    ll v = n;
    if (n <= k) {
        cout << 1 << endl;
        return;
    }

    map<int, int>m;
    int mn = 0;

    for (auto i : p) {
        if (1ll * i * i >= n) {
            break;
        }
        if (n % i == 0) {
            while (n % i == 0) {
                m[i]++;
                n /= i;
            }
        }
    }
    if (n > 1) {
        m[n]++;
    }
    if (mn != 0) {

        vector<int> divisors = findDivisors(m, mn);
        for (auto i : divisors) {
            cout << i << " ";
        }
        cout << mn << endl;
        return;
    }
    cout << n << endl;
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
        arif();
    }
    return 0;
}