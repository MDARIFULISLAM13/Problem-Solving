#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    // value -> positions
    map<int, vector<int>> pos;
    for (int i = 0; i < n; i++)
        pos[a[i]].push_back(i);

    vector<tuple<int, int, int>> seg;

    // map এ থাকা value গুলোর জন্য block তৈরি
    for (auto &[value, indices] : pos)
    {
        int c = indices.size();
        for (int t = value; t <= c; t++)
        { // only possible blocks
            int start = indices[t - value];
            int end = indices[t - 1];
            seg.push_back({end, start, value}); // end, start, weight
        }
    }

    if (seg.empty())
    {
        cout << 0 << "\n";
        return;
    }

    sort(seg.begin(), seg.end()); // end অনুযায়ী sort

    vector<int> dp(seg.size() + 1, 0);
    vector<int> ends(seg.size());
    for (int i = 0; i < seg.size(); i++)
        ends[i] = get<0>(seg[i]);

    for (int i = 1; i <= seg.size(); i++)
    {
        int start = get<1>(seg[i - 1]);
        int weight = get<2>(seg[i - 1]);
        int j = lower_bound(ends.begin(), ends.end(), start) - ends.begin();
        dp[i] = max(dp[i - 1], dp[j] + weight);
    }

    cout << dp.back() << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
