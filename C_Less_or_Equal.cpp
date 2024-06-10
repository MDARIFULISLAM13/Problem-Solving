/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-06-2024
 * time : 13:00:25
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vec v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    if (k == 0) {
        if (v[0] == 1) {
            cout << "-1\n";
            return 0;
        }
        else {
            cout << 1 << endl;
            return 0;
        }
    }
    if (v[k] == v[k - 1]) {
        cout << "-1\n";
    }
    else {
        cout << v[k - 1] << endl;
    }

    return 0;
}