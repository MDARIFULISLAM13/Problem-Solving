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

void arif() {
    int n, k;
    cin >> n >> k;
    vec a(n);
    vec b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vec c(a.begin(), a.end());
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());

    unordered_map<ll, vector<int>> indexMap;
    for (int i = 0; i < n; i++) {
        indexMap[c[i]].push_back(i);
    }

    vec result(n);
    for (int i = 0; i < n; i++) {
        int j = indexMap[a[i]].back();
        indexMap[a[i]].pop_back();
        result[i] = b[j];
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
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
