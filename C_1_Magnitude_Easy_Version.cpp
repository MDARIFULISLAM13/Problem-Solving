/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-06-2024
 * time : 22:11:45
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
const int MOD = 998244353;

void arif() {
    ll n;
    cin >> n;
    vec v(n + 1), c1(n + 1), c2(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];

        c2[i] = c2[i - 1] + v[i];
        c1[i] = max(c1[i - 1] + v[i], abs(c2[i - 1] + v[i]));
    }
    cout << c1[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
