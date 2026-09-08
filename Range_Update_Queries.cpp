/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-07
 * Time : 19:06:56
 * Problem Name : Range_Update_Queries
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

int n;
vector<long long> bit;

void update(int idx, long long val)
{
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & -idx;
    }
}

long long query(int idx)
{
    long long sum = 0;

    while (idx > 0)
    {
        sum += bit[idx];
        idx -= idx & -idx;
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    bit.resize(n + 1, 0);
    ll q;
    cin >> q;
    vec a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 2)
        {
            ll ind;
            cin >> ind;
            cout << a[ind] + query(ind) << endl;
        }
        else
        {
            ll l, r, u;
            cin >> l >> r >> u;
            update(l, u);
            if (r + 1 <= n)
                update(r+1, -u);
        }
    }
    return 0;
}