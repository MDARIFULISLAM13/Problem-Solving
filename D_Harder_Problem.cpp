/**
 *
 * Author : Md.Ariful Islam
 * Date : 15-12-2024
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vec b;
        map<int, bool> f;

        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            if (f[v] == 0) {  // Fix here
                b.push_back(v);
                f[v] = 1;
            }
        }

        int x = 1;
        while (b.size() != n) {
            if (f[x] == 0) {
                f[x] = 1;
                b.push_back(x);
            }
            x++;
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
