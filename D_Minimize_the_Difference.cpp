#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total_sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }

        // Compute the minimum difference
        // If total_sum % n == 0, difference is 0; otherwise, it is 1.
        if (total_sum % n == 0) {
            cout << 0 << '\n';
        }
        else {
            cout << 1 << '\n';
        }
    }

    return 0;
}
