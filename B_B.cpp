#include <bits/stdc++.h>
using namespace std;

const int MAX = 20005;
vector<int> adj[MAX];
int color[MAX];

int bfs(int src) {
    queue<int> q;
    q.push(src);
    color[src] = 1; // Start coloring src with 1

    int count[2] = { 0 }; // count[0] for color 0, count[1] for color 1
    count[1]++; // We colored src with 1

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (color[v] == -1) { // If not colored
                color[v] = 1 - color[u]; // Color with opposite color
                count[color[v]]++;
                q.push(v);
            }
            else if (color[v] == color[u]) {
                // This means the graph is not bipartite, but given the problem constraints,
                // it should always be possible to color it in 2 colors.
                return 0;
            }
        }
    }
    return max(count[0], count[1]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int n;
        cin >> n;

        for (int i = 0; i < MAX; ++i) {
            adj[i].clear();
        }
        memset(color, -1, sizeof(color));

        for (int i = 0; i < n; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int max_members = 0;
        for (int i = 1; i < MAX; ++i) {
            if (adj[i].size() > 0 && color[i] == -1) {
                max_members += bfs(i);
            }
        }

        cout << "Case " << t << ": " << max_members << endl;
    }

    return 0;
}
