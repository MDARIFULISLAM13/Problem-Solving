#include <bits/stdc++.h>
using namespace std;

// Memoization map
unordered_map<long long, int> dp;

// Function to compute score for a single number under optimal play
int poby_score(long long x)
{
    if (x == 1)
        return 0;
    if (dp.count(x))
        return dp[x];

    // Poby move: halve
    int move1 = 1 + poby_score(x / 2);

    // Rekkles move: +1
    int move2 = 1 + poby_score(x + 1);

    // Optimal play: Poby wants minimum score, Rekkles wants maximum
    int res = max(move1, move2); // because Rekkles maximizes
    dp[x] = res;
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    cout << n << endl;

    return 0;
}
