#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> tree;
vector<int> sz;
vector<vector<int>> dp;

// DFS function to fill dp
void dfs(int u)
{
    if (tree[u].empty())
    {                 // leaf
        dp[u][0] = 0; // using 0 zeros, LCS length 0
        dp[u][1] = 1; // using 1 zero (if we place zero here), LCS length 1
        return;
    }

    dp[u][0] = 0;
    for (int child : tree[u])
    {
        dfs(child);
    }

    // Temporary dp for merging children
    vector<int> tmp(k + 1, 0);
    tmp[0] = 0;

    for (int child : tree[u])
    {
        vector<int> new_tmp(k + 1, 0);
        for (int i = 0; i <= k; i++)
        {
            if (tmp[i] == -1)
                continue;
            for (int j = 0; j <= k - i; j++)
            {
                if (dp[child][j] == -1)
                    continue;
                new_tmp[i + j] = max(new_tmp[i + j], tmp[i] + dp[child][j]);
            }
        }
        tmp = new_tmp;
    }

    // Now decide label of u
    for (int i = k; i >= 0; i--)
    {
        int best = -1;
        if (i >= 1)
            best = max(best, 1 + tmp[i - 1]); // place zero here
        best = max(best, tmp[i]);             // place one here
        dp[u][i] = best;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        tree.assign(n + 1, vector<int>());
        sz.assign(n + 1, 0);
        dp.assign(n + 1, vector<int>(k + 1, -1));

        for (int i = 2; i <= n; i++)
        {
            int p;
            cin >> p;
            tree[p].push_back(i);
        }

        dfs(1);
        cout << dp[1][k] << "\n";
    }
    return 0;
}
