#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> wealth(n);
        long long total_wealth = 0;
        long long max_wealth = 0;

        for (int i = 0; i < n; ++i) {
            cin >> wealth[i];
            total_wealth += wealth[i];
            if (wealth[i] > max_wealth) {
                max_wealth = wealth[i];
            }
        }

        // Calculate half of the total population
        int unhappy_threshold = (n + 1) / 2; // This is the minimum number of unhappy people required
        long long min_x = -1;

        // Calculate how many people are unhappy currently
        long long unhappy_count = 0;

        for (int i = 0; i < n; ++i) {
            if (wealth[i] < (total_wealth / n) / 2) {
                unhappy_count++;
            }
        }

        if (unhappy_count > unhappy_threshold) {
            min_x = 0; // Already too many unhappy people
        }
        else {
            // We need to increase the max wealth until enough people are unhappy
            // The new average is (total_wealth + x) / n
            for (int i = 0; i < n; ++i) {
                if (wealth[i] >= (total_wealth + 1) / n) {
                    // Check if this person's wealth is okay
                    continue;
                }

                // Calculate how much we need to add to `max_wealth` to make this person unhappy
                long long target_average = (wealth[i] * 2) + 1;
                long long required_x = target_average * n - total_wealth;

                if (required_x > 0) {
                    if (min_x == -1 || required_x < min_x) {
                        min_x = required_x;
                    }
                }
            }
        }

        cout << min_x << endl;
    }
    return 0;
}
