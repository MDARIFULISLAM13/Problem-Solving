#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        set<int> elements;
        for (int i = 0; i < n; i++) {
            elements.insert(a[i]);
        }

        int unique_count = elements.size();
        int min_cost = 1;

        if (unique_count >= k / 2) {
            min_cost = 1;
        }
        else {
            min_cost = (k / 2 - unique_count) + 1;
        }

        cout << min_cost << endl;
    }
    return 0;
}
