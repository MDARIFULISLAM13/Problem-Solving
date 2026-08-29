/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-24
 * Time : 19:29:36
 * Problem Name : D_Number_into_Sequence
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
const int lm = 1e5;
bitset<lm> ip;
vector<int> p;
void arif(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i + i; j <= n; j += i)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;
    for (int i = 3; i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            p.push_back(i);
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll m = n;

    map<ll, ll> mp;
    for (ll pr : p)
    {
        if (pr * pr > n)
            break;

        while (n % pr == 0)
        {
            mp[pr]++;
            n /= pr;
        }
    }

    if (n > 1)
        mp[n]++;

    ll ind = 0, cnt = 0;
    for (auto i : mp)
    {

        if (i.second > cnt)
        {
            ind = i.first;
            cnt = i.second;
        }
    }

    cout << cnt << endl;
    ll x = 1;
    for (int i = 1; i < cnt; i++)
    {
        cout << ind << " ";
        x *= ind;
    }

    if (x != 0)
        cout << m / x << endl;
    else
        cout << m << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arif(lm);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}