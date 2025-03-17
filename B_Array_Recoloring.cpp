#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numColors, numElements;
        cin >> numColors >> numElements;

        vector<int> frequency(numColors + 1, 0);
        vector<int> colors(numElements);

        for (int i = 0; i < numElements; i++) {
            cin >> colors[i];
            frequency[colors[i]]++;
        }

        vector<int> cumCount(numColors + 2, 0);
        for (int i = numColors; i >= 1; i--) {
            cumCount[i] = frequency[i] + cumCount[i + 1];
        }

        long long answer = 0;
        for (int splitIndex = 1; splitIndex < numColors; splitIndex++) {
            int leftCount = cumCount[splitIndex];
            int rightCount = cumCount[numColors - splitIndex];
            int commonCount = cumCount[max(splitIndex, numColors - splitIndex)];
            answer += static_cast<long long>(leftCount) * rightCount - commonCount;
        }

        cout << answer << "\n";
    }

    return 0;
}