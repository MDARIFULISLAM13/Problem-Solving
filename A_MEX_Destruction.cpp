/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-12-2024
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

int mex(const vector<int>& b) {
    set<int> s(b.begin(), b.end());
    int m = 0;
    while (s.find(m) != s.end()) {
        m++;
    }
    return m;
}

int solve(vector<int>& a) {
    set<int> distinct_elements(a.begin(), a.end());
    if (distinct_elements.size() == 1 && *distinct_elements.begin() == 0) {
        return 0;  // Already all zeros
    }

    return 1 + (distinct_elements.size() > 1 ? 1 : 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << solve(a) << endl;
    }

    return 0;
}
