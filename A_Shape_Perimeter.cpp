#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        set<pair<int, int>> coloredCells;

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;

            for (int dx = 0; dx < m; ++dx) {
                for (int dy = 0; dy < m; ++dy) {
                    coloredCells.insert({ x + dx, y + dy });
                }
            }
        }

        int perimeter = 0;

        // Calculate perimeter based on adjacent cells
        for (const auto& cell : coloredCells) {
            int x = cell.first;
            int y = cell.second;

            if (!coloredCells.count({ x - 1, y })) ++perimeter;
            if (!coloredCells.count({ x + 1, y })) ++perimeter;
            if (!coloredCells.count({ x, y - 1 })) ++perimeter;
            if (!coloredCells.count({ x, y + 1 })) ++perimeter;
        }

        cout << perimeter << endl;
    }

    return 0;
}
