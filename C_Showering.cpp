#include <iostream>
#include <vector>

using namespace std;

bool canShower(int n, int s, int m, const vector<pair<int, int>>& tasks) {
    // Check the interval before the first task
    if (tasks[0].first >= s) return true;

    // Check the intervals between tasks
    for (int i = 1; i < n; ++i) {
        if (tasks[i].first - tasks[i - 1].second >= s) return true;
    }

    // Check the interval after the last task
    if (m - tasks[n - 1].second >= s) return true;

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> tasks(n);

        for (int i = 0; i < n; ++i) {
            cin >> tasks[i].first >> tasks[i].second;
        }

        if (canShower(n, s, m, tasks)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
