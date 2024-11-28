/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-11-2024
 * time : 21:28:52
 * Problem Name : C_Product_of_Three_Numbers
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
void solve(int n) {
    int cnt = 0;
    int cn = 0;
    vector<int>v;
    map<int, int>a;
    for (int i : p) {
        if (i * i > n) {
            break;
        }
        if (n % i == 0) {
            cnt++;
            v.push_back(i);
            while (n % i == 0) {
                n /= i;
                a[i]++;
                cn++;
            }
        }
    }
    if (n > 1) {
        cnt++;
        v.push_back(n);
        a[n]++;

        cn++;
    }
    if (cnt >= 3) {
        cout << "YES\n";
        int x = a[v[0]];
        int val = v[0];
        val = pow(val, x);
        cout << val << " ";
        x = a[v[1]];
        val = v[1];
        val = pow(val, x);
        cout << val << " ";
        x = a[v[2]];
        val = v[2];
        val = pow(val, x);
        for (int i = 3;i < v.size();i++) {
            x = a[v[i]];
            int vall = v[i];
            vall = pow(vall, x);
            val *= vall;

        }
        cout << val << endl;
        return;

    }

    if (cnt == 2) {
        if (cn < 4) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        cout << v[0] << " " << v[1] << " ";
        int val = 1;
        for (int i = 0;i < v.size();i++) {
            if (a[v[i]] != 1) {
                int x = a[v[i]] - 1;
                val *= pow(v[i], x);
            }
        }
        cout << val << endl;
        return;
    }
    if (cnt == 1) {
        if (cn < 6) {
            cout << "NO" << endl;
            return;
        }
        cout << "YES\n";
        cout << v[0] << " " << v[0] * v[0] << " ";
        int x = a[v[0]];
        int val = 1;
        for (int i = 4;i <= x;i++) {
            val *= v[0];
        }
        cout << val << endl;

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
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}