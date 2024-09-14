/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-09-2024
 * time : 21:05:00
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
    ll n, m, q;
    cin >> n >> m >> q;

    vec b;
    for (int i = 1;i <= m;i++) {
        int v;
        cin >> v;
        b.push_back(v);

    }
    sort(b.begin(), b.end());
    while (q--) {
        int v;
        cin >> v;
        if (v < *b.begin()) {
            cout << *b.begin() - 1 << endl;
            continue;
        }
        if (v > b[b.size() - 1]) {
            cout << n - b[b.size() - 1] << endl;
            continue;
        }



        auto it = lower_bound(b.begin(), b.end(), v);
        int low = *(it - 1);
        int up = *it;
        cout << abs(low - up) / 2 << endl;
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