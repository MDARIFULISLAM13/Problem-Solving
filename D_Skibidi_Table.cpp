#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define endl "\n"

map<ll, pair<int, int>> position; // value -> (row, col)
map<pair<int, int>, ll> rev;      // (row, col) -> value

// Function to recursively fill the table
void fill(int size, int r, int c, ll start)
{
    if (size == 2)
    {
        position[start] = {r + 1, c + 1};
        rev[{r + 1, c + 1}] = start;

        position[start + 1] = {r + 2, c + 2};
        rev[{r + 2, c + 2}] = start + 1;

        position[start + 2] = {r + 2, c + 1};
        rev[{r + 2, c + 1}] = start + 2;

        position[start + 3] = {r + 1, c + 2};
        rev[{r + 1, c + 2}] = start + 3;
        return;
    }

    int half = size / 2;
    ll blockSize = 1LL << (2 * (int)log2(size / 2));

    // Fill the 4 blocks recursively
    fill(half, r, c, start);
    fill(half, r + half, c + half, start + blockSize);
    fill(half, r + half, c, start + 2 * blockSize);
    fill(half, r, c + half, start + 3 * blockSize);
}

void solve()
{
    int n, q;
    cin >> n;
    int sz = 1 << n; // Size of grid = 2^n

    // Clear previous test case data
    position.clear();
    rev.clear();

    // Fill the table positions
    fill(sz, 0, 0, 1);

    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "->")
        {
            // Query: find the value at (x, y)
            int x, y;
            cin >> x >> y;
            cout << rev[{x, y}] << endl;
        }
        else if (s == "<-")
        {
            // Query: find the position of value d
            int d;
            cin >> d;
            cout << position[d].first << " " << position[d].second << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
