/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-21
 * Time : 20:42:12
 * Problem Name : A_Youmu_Konpaku_and_the_Duel
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

void solve()
{
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    ll cnt = 0;
    ll x = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += i;
        x = i;
        if (cnt >= n)
            break;
    }

    ll op = (x - 1) * 2;
    ++op;
    ll y = 1;


    
    while (cnt - y >= n)
    {
        cnt -= y;
        ++y;
        --op;
    }

    for (int i = x + 1; i <= n; i++)
    {
        cnt += (i);
        ll xop = op + 2;
        while (cnt - y >= n)
        {
            cnt -= y;
            ++y;
            --xop;
        }
        if (xop < op)
            op = xop;
    }

   

    cout << op << endl;
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