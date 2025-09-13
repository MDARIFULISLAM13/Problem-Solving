#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long x, y;
        cin >> n >> m >> x >> y;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        // The minimum crossings
        int minCross = 0;

        // Horizontal: check how many horizontal lasers we must cross
        if (!a.empty())
        {
            // Either cross 0 (go below first laser)
            // or cross all above the first laser
            minCross += 1;
        }

        // Vertical: check how many vertical lasers we must cross
        if (!b.empty())
        {
            minCross += 1;
        }

        // Special case: if both first horizontal and first vertical laser intersect at same point
        // This happens if a[0] and b[0] both exist and are "crossed together"
        // But the problem wants continuous path: just sum crossings
        cout << minCross << "\n";
    }

    return 0;
}
