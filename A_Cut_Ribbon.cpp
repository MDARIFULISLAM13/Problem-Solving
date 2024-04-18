#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int maxRibbonPieces(int n, int a, int b, int c)
{
    vector<int> dp(n + 1, -1000000);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (i >= a)

            dp[i] = max(dp[i], dp[i - a] + 1);
        if (i >= b)
            dp[i] = max(dp[i], dp[i - b] + 1);
        if (i >= c)
            dp[i] = max(dp[i], dp[i - c] + 1);
    }

    return dp[n];
}

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << maxRibbonPieces(n, a, b, c) << endl;

    return 0;
}
