#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Fenwick Tree (BIT)
struct BIT
{
    int n;
    vector<int> tree;

    BIT(int n)
    {
        this->n = n;
        tree.assign(n + 1, 0);
    }

    void update(int i, int val)
    {
        for (; i <= n; i += i & -i)
            tree[i] += val;
    }

    int query(int i)
    {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += tree[i];
        return s;
    }

    int range(int l, int r)
    {
        return query(r) - query(l - 1);
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> p(n);
    vector<int> all; // for compression

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        all.push_back(p[i]);
    }

    vector<tuple<char, int, int>> queries;

    for (int i = 0; i < q; i++)
    {
        char type;
        int a, b;
        cin >> type >> a >> b;
        queries.push_back({type, a, b});

        if (type == '!')
        {
            all.push_back(b);
        }
        else
        {
            all.push_back(a);
            all.push_back(b);
        }
    }

    // coordinate compression
    sort(all.begin(), all.end());
    all.erase(unique(all.begin(), all.end()), all.end());

    auto get = [&](int x)
    {
        return lower_bound(all.begin(), all.end(), x) - all.begin() + 1;
    };

    BIT bit(all.size());

    // initial insert
    for (int i = 0; i < n; i++)
    {
        bit.update(get(p[i]), 1);
    }

    // process queries
    for (auto [type, a, b] : queries)
    {
        if (type == '!')
        {
            int k = a - 1;
            bit.update(get(p[k]), -1); // remove old
            p[k] = b;
            bit.update(get(p[k]), 1); // add new
        }
        else
        {
            int l = lower_bound(all.begin(), all.end(), a) - all.begin() + 1;
            int r = upper_bound(all.begin(), all.end(), b) - all.begin();
            cout << bit.range(l, r) << "\n";
        }
    }
}