#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_VAL = 2000000; // Using 2e6 as a constant value

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Vectors to store pair and triple counts
        vector<int> pair_count1(MAX_VAL * MAX_VAL, 0);
        vector<int> pair_count2(MAX_VAL * MAX_VAL, 0);
        vector<int> pair_count3(MAX_VAL * MAX_VAL, 0);
        vector<int> triple_count(MAX_VAL * MAX_VAL * MAX_VAL, 0);

        // Calculate pairs and triples
        for (int i = 0; i < n - 2; ++i) {
            pair_count1[a[i] * MAX_VAL + a[i + 1]]++;
            pair_count2[a[i] * MAX_VAL + a[i + 2]]++;
            pair_count3[a[i + 1] * MAX_VAL + a[i + 2]]++;
            triple_count[a[i] * MAX_VAL * MAX_VAL + a[i + 1] * MAX_VAL + a[i + 2]]++;
        }

        int result = 0;

        // Calculate the number of good pairs from pair_count1, pair_count2, and pair_count3
        for (int i = 0; i < MAX_VAL * MAX_VAL; ++i) {
            result += pair_count1[i] * (pair_count1[i] - 1) / 2;
            result += pair_count2[i] * (pair_count2[i] - 1) / 2;
            result += pair_count3[i] * (pair_count3[i] - 1) / 2;
        }
        // Subtract the overcounted triples
        for (int i = 0; i < MAX_VAL * MAX_VAL * MAX_VAL; ++i) {
            result -= 3 * triple_count[i] * (triple_count[i] - 1) / 2;
        }

        cout << result << '\n';
    }

    return 0;
}
