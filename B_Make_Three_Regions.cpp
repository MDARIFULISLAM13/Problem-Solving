
/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-07-2024
 * time : 21:38:58
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>

int n;
vector<string> grid;
vector<vector<bool>> visited;

void dfs(int x, int y) {
    if (x < 0 || x >= 2 || y < 0 || y >= n || grid[x][y] == 'x' || visited[x][y]) {
        return;
    }
    visited[x][y] = true;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

bool formsThreeRegions(int x, int y) {
    grid[x][y] = 'x';
    visited.assign(2, vector<bool>(n, false));
    int regions = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                ++regions;
                if (regions > 3) break;
            }
        }
        if (regions > 3) break;
    }
    grid[x][y] = '.';
    return regions == 3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        grid.resize(2);
        cin >> grid[0] >> grid[1];

        visited.assign(2, vector<bool>(n, false));
        int initialRegions = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '.' && !visited[i][j]) {
                    dfs(i, j);
                    ++initialRegions;
                }
            }
        }

        if (initialRegions != 1) {
            cout << 0 << endl;
            continue;
        }

        int result = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '.' && formsThreeRegions(i, j)) {
                    ++result;
                }
            }
        }

        cout << result << endl;
    }


    return 0;
}
