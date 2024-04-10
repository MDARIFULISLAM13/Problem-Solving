/**
 *
 * Author : Md.Ariful Islam
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
void arif()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> v;
    for (int i = 0; i < n * n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    ll mv = v[0];
    vector<ll> fv;
    for (int i = 0; i < n; i++)
    {
        fv.push_back(mv);
        ll last = mv;

        for (int j = 1; j < n; j++)
        {
            fv.push_back(last + a);

            last += a;
        }

        mv += b;
    }
    sort(fv.begin(), fv.end());
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i] != fv[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}
