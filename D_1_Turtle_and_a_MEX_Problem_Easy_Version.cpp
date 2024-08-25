#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

long long compute_sum_f(int m, int max_f) {
    if (m <= max_f) {
        // Sum from f(0) to f(m) where f(k) is max_f + 1
        return (m + 1) * (max_f + 1) - (m * (m + 1) / 2);
    }
    else {
        // Sum from f(0) to f(max_f) + sum of max_f + 1 for the rest
        long long sum_f_max_f = (max_f + 1) * (max_f + 1) - (max_f * (max_f + 1) / 2);
        return sum_f_max_f + (m - max_f) * (max_f + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        set<int> values;
        for (int i = 0; i < n; ++i) {
            int li;
            cin >> li;
            for (int j = 0; j < li; ++j) {
                int x;
                cin >> x;
                values.insert(x);
            }
        }

        vector<int> sorted_values(values.begin(), values.end());
        int max_f = 0;
        for (int i = 0; i <= m; ++i) {
            if (find(sorted_values.begin(), sorted_values.end(), i) == sorted_values.end()) {
                break;
            }
            max_f = i;
        }

        cout << compute_sum_f(m, max_f) << '\n';
    }

    return 0;
}
