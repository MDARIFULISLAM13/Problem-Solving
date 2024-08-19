/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-08-2024
 * time : 22:10:01
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
    int n, q;
    cin >> n >> q;
    vec a(n, -1);
    for (int i = 1;i < n;i++) {
        cin >> a[i];
        a[i]--;
    }
    vec b{ n };
    for (int i : b) {
        cin >> i;
        i--;
    }
    vec pos(n);
    for (int i = 0;i < n;i++) {
        pos[b[i]] = i;
    }
    int good = 0;
    vector<set<int>>s(n);
    vector<int>f(n);
    vector<vector<int>>adj(n);
    for (int i = n - 1;i >= 0;i--) {
        if (i > 0) {
            adj[a[i]].emplace_back(i);
        }
        for (int j : adj[i]) {
            f[i] += f[j];
        }
        f[i]++;
    }
    int bad = 0;
    auto calc = [&](int i) {
        if(s[i])
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