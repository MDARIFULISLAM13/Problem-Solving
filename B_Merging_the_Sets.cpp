/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-21
 * Time : 20:57:23
 * Problem Name : B_Merging_the_Sets
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> sets(n);
    vector<vector<int>> ind(m + 1);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sets[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> sets[i][j];
            ind[sets[i][j]].push_back(i);
        }
    }

    vector<int> ck(n, 0);
    bool ok = true;
    for (int i = 1; i <= m; i++) {
        if (ind[i].empty()) {
            ok = false;
            break;
        }
        if (ind[i].size() == 1) {
            ck[ind[i][0]] = 1;
        }
    }

    if (!ok) {
        cout << "NO\n";
        return;
    }


    int cnt = n - accumulate(ck.begin(), ck.end(), 0);

    if (cnt >= 2) cout << "YES\n";
    else cout << "NO\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}