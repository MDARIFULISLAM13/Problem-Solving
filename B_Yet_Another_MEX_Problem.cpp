#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void solve()
{
    int n, k;
    if (!(cin >> n >> k))
        return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> freq(n + 2, 0);
    for (int i = 0; i < k; ++i)
    {
        if (a[i] <= n)
            freq[a[i]]++;
    }

    int current_mex = 0;
    while (freq[current_mex] > 0)
        current_mex++;

    vector<int> mex_values;
    mex_values.push_back(current_mex);

    for (int i = k; i < n; ++i)
    {
        int to_remove = a[i - k];
        int to_add = a[i];

        if (to_remove <= n)
        {
            freq[to_remove]--;
            if (freq[to_remove] == 0 && to_remove < current_mex)
            {
                current_mex = to_remove;
            }
        }
        if (to_add <= n)
        {
            freq[to_add]++;
            if (to_add == current_mex)
            {
                while (freq[current_mex] > 0)
                    current_mex++;
            }
        }
        mex_values.push_back(current_mex);
    }

    int max_mex = 0;
    for (int m : mex_values)
        if (m > max_mex)
            max_mex = m;

    int max_count = 0;
    vector<bool> exists_in_S(max_mex + 1, false);
    for (int m : mex_values)
    {
        if (m == max_mex)
            max_count++;
        exists_in_S[m] = true;
    }

    if (max_count == 1)
    {
        cout << max_mex << "\n";
    }
    else
    {
        int ans = max_mex - 1;
        for (int v = max_mex - 1; v >= 0; --v)
        {
            if (!exists_in_S[v])
            {
                ans = v;
                break;
            }
        }
        cout << ans << "\n";
    }
}

int main()
{
    // Faster I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}