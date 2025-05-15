#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = n * n;
    vector<vector<int>> mat(n, vector<int>(n, 0));

    int x = n / 2, y = n / 2; // Start from the center
    if (n % 2 == 0) {
        x = n / 2 - 1;
        y = n / 2;
    }

    int dx[] = {0, 1, 0, -1}; // Right, Down, Left, Up
    int dy[] = {1, 0, -1, 0};
    int dir = 0, steps = 1, val = 0;

    mat[x][y] = val++;
    while (val < total) {
        for (int i = 0; i < 2; ++i) {
            for (int s = 0; s < steps; ++s) {
                x += dx[dir];
                y += dy[dir];
                if (x >= 0 && x < n && y >= 0 && y < n)
                    mat[x][y] = val++;
                if (val >= total) break;
            }
            dir = (dir + 1) % 4;
        }
        steps++;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << mat[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
