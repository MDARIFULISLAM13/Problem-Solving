#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n, vector<int>(n));
        vector<int> degree(n, 0);

        // Input the adjacency matrix and calculate the degree of each vertex
        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            for (int j = 0; j < n; j++) {
                adj[i][j] = row[j] - '0';
                if (adj[i][j] == 1) {
                    degree[i]++;
                }
            }
        }

        // Pair degree with vertex index
        vector<pair<int, int>> nodes;
        for (int i = 0; i < n; i++) {
            nodes.emplace_back(degree[i], i + 1);
        }

        // Sort nodes by degree
        sort(nodes.begin(), nodes.end());

        // Output the reconstructed permutation
        for (auto& node : nodes) {
            cout << node.second << " ";
        }
        cout << endl;
    }

    return 0;
}
