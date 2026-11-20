/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-10
 * Time : 20:26:24
 * Problem Name : C_Big_XOR
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
    map<ll, ll> mp;
    vec v;
    ll cnt = 1;
    ll bt = 0;
    ll val = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == cnt)
        {
            v.push_back(cnt);
            cnt *= 2;
            ++bt;
        }
        else
        {
            mp[i] = false;
            val = val ^ i;
        }
    }

    cnt = v.back();
    mp[cnt] = 1;
    v.pop_back();
   
    while (bt > 0 && !v.empty())
    {
        --bt;
        bool y = ((val >> bt) & 1);
        ll x = (1LL << bt);

       
        if (y == 0 && (v.back() * 2 == x))
        {
            mp[v.back()] = 1;
            v.pop_back();
        }
        else if (y == 1 && v.back() == x)
        {
            
            mp[v.back()] = 0;
            v.pop_back();

            if (!v.empty())
            {
                mp[v.back()] = 1;

                v.pop_back();
            }
        }
        else if(y == 0 && v.back() == x)
        {
            v.pop_back();
            
        }
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
         cout << mp[i] << " ";
       
    }
    
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