#include <bits/stdc++.h>
using namespace std;

const int N = 100000 + 5;

vector<int> g[N];

int disc[N], low[N], comp[N];
bool inStack[N];
stack<int> st;

int timer = 0;
int scc_count = 0;

void dfs(int u)
{
    disc[u] = low[u] = ++timer;
    st.push(u);
    inStack[u] = true;

    for (int v : g[u])
    {
        if (disc[v] == 0)
        {
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        else if (inStack[v])
        {
            low[u] = min(low[u], disc[v]);
        }
    }

    // root of SCC
    if (disc[u] == low[u])
    {
        scc_count++;

        while (true)
        {
            int v = st.top();
            st.pop();
            inStack[v] = false;

            comp[v] = scc_count; // assign component id

            if (v == u)
                break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    for (int i = 1; i <= n; i++)
    {
        if (disc[i] == 0)
        {
            dfs(i);
        }
    }

    // 🔥 Total SCC count
    cout << "Total SCC = " << scc_count << "\n";

    // 🔥 Each node's component
    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " -> SCC " << comp[i] << "\n";
    }

    return 0;
}