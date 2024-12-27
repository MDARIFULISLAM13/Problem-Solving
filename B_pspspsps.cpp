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

bool isValidPermutation(int n, const string& s) {
    vector<int> p(n, 0);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'p') {
            for (int j = 0; j <= i; j++) {
                if (p[j] != 0) return false;  // The first i elements must form a permutation
                p[j] = j + 1;
            }
        }
        else if (s[i] == 's') {
            for (int j = i; j < n; j++) {
                if (p[j] != 0) return false;  // The remaining n-i elements must form a permutation
                p[j] = j + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (p[i] == 0) return false;  // All positions must be filled in a valid permutation
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (isValidPermutation(n, s)) {
            yes
        }
        else {
            no
        }
    }

    return 0;
}
