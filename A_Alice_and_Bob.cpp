/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-14
 * Time : 20:37:32
 * Problem Name : A_Alice_and_Bob
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
    ll n, a;
    cin >> n >> a;
    vec v(n);

    for (auto &i : v)
        cin >> i;
    sort(v);

    ll sum1 = 0, sum2 = 0;
    for (auto i : v)
    {
        if (i < a)
        {
            sum1 += 1;
        }
        else if (i > a)
        {
            sum2 += 1;
        }
    }
    if (sum1 > sum2)
    {

        cout << a - 1 << endl;
        return;
    }
    else
    {
        cout << a + 1 << endl;
    }
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