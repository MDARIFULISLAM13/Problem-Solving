/**
 * Author : Md.Ariful Islam
 * Problem Name : Minimum Gap Value After Segment Doubling & Reversal
 **/
#include <bits/stdc++.h>
using namespace std;

static const int INF = 1e9;

bool check(int X, int n, const vector<int>& a) {
    // 1. Check 0 operations (original array)
    bool ok_orig = true;
    for (int i = 0; i < n - 1; ++i) {
        if (abs(a[i] - a[i + 1]) > X) {
            ok_orig = false;
            break;
        }
    }
    if (ok_orig) return true;

    // 2. Check l = 1, r = n (full reversal & doubling)
    bool ok_full = true;
    for (int i = 0; i < n - 1; ++i) {
        if (2 * abs(a[i] - a[i + 1]) > X) {
            ok_full = false;
            break;
        }
    }
    if (ok_full) return true;

    // Prefix validity for original elements: pref_ok[i] = true if all gaps in a[0..i] are <= X
    vector<bool> pref_ok(n, true);
    for (int i = 1; i < n; ++i) {
        pref_ok[i] = pref_ok[i - 1] && (abs(a[i] - a[i - 1]) <= X);
    }

    // Suffix validity for original elements: suff_ok[i] = true if all gaps in a[i..n-1] are <= X
    vector<bool> suff_ok(n, true);
    for (int i = n - 2; i >= 0; --i) {
        suff_ok[i] = suff_ok[i + 1] && (abs(a[i] - a[i + 1]) <= X);
    }

    // Doubled gap validity: doubled_ok[i] = true if 2 * |a[i] - a[i+1]| <= X
    vector<bool> doubled_ok(n - 1, false);
    for (int i = 0; i < n - 1; ++i) {
        doubled_ok[i] = (2 * abs(a[i] - a[i + 1]) <= X);
    }

    // 3. Prefix operations: l = 1, 1 <= r < n
    // Array becomes: 2*a[r], 2*a[r-1], ..., 2*a[0], a[r+1], ..., a[n-1]
    bool current_doubled_valid = true;
    for (int r = 0; r < n - 1; ++r) {
        if (r > 0 && !doubled_ok[r - 1]) {
            current_doubled_valid = false;
        }
        if (!current_doubled_valid) break;

        // Check right boundary at r: |2*a[0] - a[r+1]| <= X and suff_ok[r+1]
        if (suff_ok[r + 1] && abs(2 * a[0] - a[r + 1]) <= X) {
            return true;
        }
    }

    // 4. Suffix operations: 1 <= l < n, r = n - 1
    // Array becomes: a[0], ..., a[l-1], 2*a[n-1], ..., 2*a[l]
    current_doubled_valid = true;
    for (int l = n - 1; l > 0; --l) {
        if (l < n - 1 && !doubled_ok[l]) {
            current_doubled_valid = false;
        }
        if (!current_doubled_valid) break;

        // Check left boundary at l: |a[l-1] - 2*a[n-1]| <= X and pref_ok[l-1]
        if (pref_ok[l - 1] && abs(a[l - 1] - 2 * a[n - 1]) <= X) {
            return true;
        }
    }

    // 5. Internal operations: 1 < l <= r < n - 1
    // We maintain range of valid l values for a given r
    // For a fixed r, valid l must satisfy:
    // a) l-1 <= max_valid_pref_idx
    // b) l >= min_valid_doubled_idx
    // c) |a[l-1] - 2*a[r]| <= X  =>  2*a[r] - X <= a[l-1] <= 2*a[r] + X
    // d) |2*a[l] - a[r+1]| <= X  =>  a[r+1] - X <= 2*a[l] <= a[r+1] + X

    int max_l_doubled = 0; // Smallest l such that doubled_ok[l..r-1] are all true
    
    // We can collect candidate l values and check using two pointers or min/max tracking
    // Since we need to match condition for (l-1) and (l) simultaneously:
    for (int r = 1; r < n - 1; ++r) {
        if (!suff_ok[r + 1]) continue;

        // Update max_l_doubled for current r
        // If doubled_ok[r-1] is false, all l <= r-1 become invalid for this and future r
        if (!doubled_ok[r - 1]) {
            max_l_doubled = r;
        }

        // l can range from max(1, max_l_doubled) to r
        for (int l = max(1, max_l_doubled); l <= r; ++l) {
            if (!pref_ok[l - 1]) continue;

            if (abs(a[l - 1] - 2 * a[r]) <= X && abs(2 * a[l] - a[r + 1]) <= X) {
                return true;
            }
        }
    }

    return false;
}

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int low = 0, high = 2e6, ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, n, a)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}