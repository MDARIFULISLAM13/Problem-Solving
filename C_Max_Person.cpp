/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-23
 * Time : 13:48:26
 * Problem Name : C_Max_Person
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

    ll n, k;
    cin >> n >> k;

    ll mxp = 0;
    while (1)
    {
        if (pow(2, mxp + 1) > n)
        {
            break;
        }
        ++mxp;
    }

    vec v;

    while (n > 0)
    {
        ll x = pow(2, mxp);
        if (x > n)
        {
            --mxp;
        }
        else
        {
            v.push_back(x);
            n -= x;
        }
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