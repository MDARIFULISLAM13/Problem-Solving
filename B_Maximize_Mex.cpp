/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-10-2024
 * time : 19:53:02
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
void arif() {

    ll n, x;
    cin >> n >> x;
    map<ll, ll>m;
    for (int i = 1;i <= n;i++) {
        ll v;
        cin >> v;
        m[v]++;
    }

    for (ll i = 0;i <= 1e18;i++) {


        if (m[i] > 1) {
            int add = m[i] - 1;

            m[i + x] += add;
        }
        if (m[i] == 0) {
            cout << i << endl;
            return;
        }

    }
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