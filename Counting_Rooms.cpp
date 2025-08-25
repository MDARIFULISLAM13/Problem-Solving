/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-08-2025
 * time : 03:46:38
 * Problem Name : Counting_Rooms
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int n, m;
char c[1001][1001];
bool vis[1001][1001];
ll ans = 0;

int di[4] = {1, -1, 0, 0};
int dj[4] = {0, 0, -1, 1};

bool ok(int i, int j)
{
    return (i >= 1 && i <= n && j >= 1 && j <= m && c[i][j] == '.');
}

void dfs(int i, int j)
{
    vis[i][j] = true;

    for (int l = 0; l < 4; l++)
    {
        int dx = i + di[l];
        int dy = j + dj[l];

        if (ok(dx, dy) && !vis[dx][dy])
        {
            dfs(dx, dy);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> c[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (c[i][j] == '.' && !vis[i][j])
            {
                ++ans;
                dfs(i, j);
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
