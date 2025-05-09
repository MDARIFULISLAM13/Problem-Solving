#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #include <utility>
#define ll long long
#define endl "\n"
using namespace std;
// struct cmp { bool operator()(const ll &a, const ll &b) const { return a < b; }};
// #define ordered_set tree<ll, null_type,cmp,rb_tree_tag, tree_order_statistics_node_update>
//  st.find_by_order(index) gives the k-th smallest element (0-based index)
//  st.order_of_key(x) gives the number of elements strictly less than x
#define sp(x) fixed << setprecision(x)
// int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
//  auto it = mp.find(x);if (it != mp.end())
// priority_queue<pair<ll, ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
// sort(vec.begin(), vec.end(),greater<int>());
// vector<bool> isPrime(limit + 1, true);
#define memo(a, b) memset(a, b, sizeof(a))

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, q;
    cin >> n >> q;
    ll arr[n + 1];
    map<ll, ll> val;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        val[arr[i]]++;
    }

    vector<ll> vp;
    map<ll, ll> mp;
    ll x = 0;
    for (auto [v, a] : val)
        if (a >= v)
        {
            vp.push_back(v);
            mp[v] = x;
            x++;
        }

    // x can be max root n so no problem
    int pre[n][x];
    for (ll j = 0; j < x; j++)
        pre[0][j] = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j < x; j++)
            pre[i][j] = pre[i - 1][j];
        if (val[arr[i]] >= arr[i])
            pre[i][mp[arr[i]]]++;
    }

    for (ll i = 0; i < q; i++)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        for (ll j = 0; j < x; j++)
        {
            ll v = vp[j];
            if (pre[b][j] - pre[a - 1][j] == v)
                ans++;
        }
        cout << ans << endl;
    }
}