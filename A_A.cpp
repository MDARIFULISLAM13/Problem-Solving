/**
 *
 * Author : Md.Ariful Islam
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
int h, w;
int cnt = 0;
vector<string>v;
int dp[50][50];
int mv[8][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1} };

int dfs(int i, int j) {
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    int ml = 1;
    for (int l = 0;l < 8;l++) {
        int x = i + mv[l][0];
        int y = j + mv[l][1];
        if (x >= 0 && x < h && y >= 0 && y < w && v[x][y] == v[i][j] + 1) {
            ml = max(ml, 1 + (dfs(x, y)));
        }


    }
    return dp[i][j] = ml;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (1) {
        cin >> h >> w;
        if (h == 0 && w == 0) {
            break;
        }
        cnt++;
        int ans = 0;
        v.resize(h);
        for (int i = 0;i < h;i++) {
            cin >> v[i];
        }
        memset(dp, -1, sizeof(dp));
        for (int i = 0;i < h;++i) {
            for (int j = 0;j < w;++j) {

                if (v[i][j] == 'A') {
                    ans = max(ans, dfs(i, j));
                }
            }
        }


        cout << "Case " << cnt << ": " << ans << endl;
    }


    return 0;
}