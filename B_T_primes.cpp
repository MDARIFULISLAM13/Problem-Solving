/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-08-2024
 * time : 04:53:23
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
const int lm = 1e7 + 123;
bitset<lm> ip;
vector<int> p;
void arif(int n)
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
            for (int j = i + i; j <= n; j += i)
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arif(lm);
    int t;
    cin >> t;
    while (t--) {
        ll v;
        cin >> v;
        ll ck = sqrt(v);

        if (ck * ck == v) {
            if (ip[ck] == true) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}