#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int median(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[(n - 1) / 2];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> indices;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) {
                indices.push_back(i);
            }
        }

        for (int i = 0; i < min(k, (int)indices.size()); i++) {
            a[indices[i]]++;
        }

        int maxScore = 0;
        for (int i = 0; i < n; i++) {
            vector<int> ci = a;
            ci.erase(ci.begin() + i);
            int currentScore = a[i] + median(ci);
            maxScore = max(maxScore, currentScore);
        }

        cout << maxScore << endl;
    }
    return 0;
}
