#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    int n;
    cin >> n;
    vec v(n + 3);
    vec V(n + 3);
    v[0] = -1;
    v[n + 1] = -1;
    V[0] = -1;
    V[n + 1] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        V[i] = v[i];
    }

    for (int i = i; i <= (n + 1) / 2; i++)
    {
        int j = n - i + 1;
        int cr = 0;
        if (v[i] == v[i + 1])
        {
            ++cr;
        }
        if (v[i] == v[i - 1])
        {
            ++cr;
        }
        if (v[j] == v[j + 1])
        {
            ++cr;
        }
        if (v[j] == v[j - 1])
        {
            ++cr;
        }

        swap(v[i], v[j]);
        int nxt = 0;
        if (v[i] == v[i + 1])
        {
            ++nxt;
        }
        if (v[i] == v[i - 1])
        {
            ++nxt;
        }
        if (v[j] == v[j + 1])
        {
            ++nxt;
        }
        if (v[j] == v[j - 1])
        {
            ++nxt;
        }
        if (cr < nxt)
        {
            swap(v[i], v[j]);
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == v[i + 1])
            ++ans;
    }


    for (int i = (n + 1) / 2; i > 0; i--)
    {
        int j = n - i + 1;
        int cr = 0;
        if (V[i] == V[i + 1])
        {
            ++cr;
        }
        if (V[i] == V[i - 1])
        {
            ++cr;
        }
        if (V[j] == V[j + 1])
        {
            ++cr;
        }
        if (V[j] == V[j - 1])
        {
            ++cr;
        }

        swap(V[i], V[j]);
        int nxt = 0;
        if (V[i] == V[i + 1])
        {
            ++nxt;
        }
        if (V[i] == V[i - 1])
        {
            ++nxt;
        }
        if (V[j] == V[j + 1])
        {
            ++nxt;
        }
        if (V[j] == V[j - 1])
        {
            ++nxt;
        }
        if (cr < nxt)
        {
            swap(V[i], V[j]);
        }
    }
    ll ANS = 0;
    for (int i = 1; i <= n; i++)
    {
        if (V[i] == V[i + 1])
            ++ANS;
    }

    cout << min( ans,ANS) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
