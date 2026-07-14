/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-19
 * Time : 19:02:55
 * Problem Name : C_Self_Citation
 *
 **/
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;

    ll avg = n / k;
    vec v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];

    vec a(k);
    ll ex = n % k;
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        if (v[i] < avg)
        {
            ex += abs(avg - v[i]);
            a[i] = v[i];
        }
        else
        {
            a[i] = avg;
            if (v[i] > a[i])
                q.push(i);
        }
    }
    while (ex > 0 && !q.empty())
    {
        int y = q.front();
        q.pop();

        ++a[y];
        --ex;

        if (a[y] < v[y])
            q.push(y);
    }

    for (auto x : a)
        cout << x << " ";
    cout << endl;
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