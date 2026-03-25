#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, p, m;
        cin >> n >> k >> p >> m;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int ans = 0;

        deque<int> dq;

        for (int i = 0; i < n; i++)
            dq.push_back(i);

        while (m > 0)
        {
            int best = -1;

            for (int i = 0; i < min(k, (int)dq.size()); i++)
            {
                if (dq[i] == p - 1)
                {
                    best = i;
                    break;
                }
            }

            if (best == -1)
            {
                int id = 0;
                for (int i = 1; i < k; i++)
                    if (a[dq[i]] < a[dq[id]])
                        id = i;

                best = id;
            }

            int card = dq[best];

            if (m < a[card])
                break;

            m -= a[card];

            if (card == p - 1)
                ans++;

            dq.erase(dq.begin() + best);
            dq.push_back(card);
        }

        cout << ans << "\n";
    }
}