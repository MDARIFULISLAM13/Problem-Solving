#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canCraftArtifact(int n, vector<int>& a, vector<int>& b) {
    long long total_a = 0, total_b = 0;
    for (int i = 0; i < n; ++i) {
        total_a += a[i];
        total_b += b[i];
    }
    if (total_a < total_b) return false;

    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        if (canCraftArtifact(n, a, b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
