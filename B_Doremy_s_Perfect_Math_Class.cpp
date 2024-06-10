/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-06-2024
 * time : 12:42:33
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

    int t;
    cin >> t;
    while (t--) {
        ll a;
        cin >> a;
        vec v(a);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        ll mn = INT_MAX;
        for (int i = 1; i < a;i++) {
            mn = min(mn, (v[i] - v[i - 1]));
        }
        cout << max(a, (v[a - 1] / mn)) << endl;

    }

    return 0;
}