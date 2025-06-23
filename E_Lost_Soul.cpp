#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> freq_a(n + 1, 0), freq_b(n + 1, 0);
        int initial_matches = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                initial_matches++;
            }
            freq_a[a[i]]++;
            freq_b[b[i]]++;
        }

        int max_freq_match = 0;
        for (int i = 1; i <= n; i++)
        {
            max_freq_match = max(max_freq_match, min(freq_a[i], freq_b[i]));
        }

        int ans = max(initial_matches, max_freq_match);
        cout << ans << '\n';
    }
    return 0;
}