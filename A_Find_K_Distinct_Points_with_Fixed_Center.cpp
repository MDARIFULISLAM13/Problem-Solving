#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        vector<pair<int, int>> points;
        long long sum_x = 0, sum_y = 0;


        for (int i = 0; i < k - 1; ++i) {
            int x = xc + i;
            int y = yc;
            points.push_back({ x, y });
            sum_x += x;
            sum_y += y;
        }


        int final_x = xc * k - sum_x;
        int final_y = yc * k - sum_y;
        points.push_back({ final_x, final_y });


        for (auto& point : points) {
            cout << point.first << " " << point.second << endl;
        }
    }

    return 0;
}
