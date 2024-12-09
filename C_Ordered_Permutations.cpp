#include <bits/stdc++.h>
using namespace std;

const int MAX_POW = 40;
const long long INF = 1e12;

// Function to compute powers of 2 up to \( 2^{40} \)
vector<long long> compute_powers_of_two() {
    vector<long long> pow2(MAX_POW + 1, 1);
    for (int i = 1; i <= MAX_POW; ++i) {
        pow2[i] = pow2[i - 1] * 2;
        if (pow2[i] > INF) pow2[i] = INF; // Cap values at INF
    }
    return pow2;
}

// Function to compute the count of permutations for a given length
long long count_permutations(long long length, const vector<long long>& pow2) {
    if (length <= 1) return 1;
    if (length - 1 <= MAX_POW) return pow2[length - 1];
    return INF;
}

// Main solve function
void solve() {
    int t;
    cin >> t;

    vector<long long> pow2 = compute_powers_of_two();
    string output;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long total_permutations = count_permutations(n, pow2);
        if (k > total_permutations) {
            output += "-1\n";
            continue;
        }

        vector<int> result;
        long long l = 1, r = n;

        while (l <= r) {
            long long length = r - l + 1;
            long long half = count_permutations(length - 1, pow2);

            if (k <= half) {
                result.push_back(l);
                ++l;
            }
            else {
                for (int i = r; i >= l; --i) {
                    result.push_back(i);
                }
                break;
            }
        }

        for (int num : result) {
            output += to_string(num) + " ";
        }
        output += "\n";
    }

    cout << output;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
