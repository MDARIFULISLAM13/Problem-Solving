/**
 *
 * Author : Md.Ariful Islam
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
    for (int j = 1;j <= t;j++) {
        vector<int>a(20000);
        int n;
        cin >> n;
        for (int i = 1;i <= n;i++) {
            int u, v;
            cin >> u >> v;

            a[u]++;
            a[v]++;
        }
        a.erase(remove(a.begin(), a.end(), 0), a.end());
        int ans = 0;
        for (int i = 0;i < a.size();i++) {
            if (a[i] == 1) {
                ans++;
            }
        }
        cout << "Case " << j << ": " << ans << endl;

    }

    return 0;
}