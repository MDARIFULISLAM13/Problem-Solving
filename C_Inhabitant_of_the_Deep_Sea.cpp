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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    ll total = 0;
    for (int i = 1; i <= n; i++)
    {
        ll vel;
        cin >> vel;
        total += vel;
        v.push_back(vel);
    }
    if (total <= k)
    {
        cout << n << endl;
        return;
    }
    ll count = 0;
    while (k > 0)
    {
        if (v.size() > 1)
        {
            ll mn = min(v[0], v[v.size() - 1]);
            if (mn == v[0])
            {
                k -= mn;
                k -= mn;
                v.erase(v.begin());
                count++;
                v[v.size() - 1] -= mn;
                if (v[v.size() - 1] == 0)
                {
                    v.erase(v.begin() + (v.size() - 1));
                    if (k >= 0)
                    {
                        count++;
                    }
                }
            }
            else
            {
                k -= mn;
                k -= mn;
                if (k >= 0)
                {
                    count++;
                    v.erase(v.begin() + (v.size() - 1));
                }
                v[0] -= mn;
            }
        }
        else
        {
            if (v[0] != 0)
            {
                if (v[0] <= k)
                {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}