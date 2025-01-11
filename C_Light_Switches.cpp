/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-08-2024
 * time : 22:09:27
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
    int n, k;
    cin >> n >> k;
    vec a;
    ll mx = 0;
    ll mn = INT_MAX, mmx = INT_MAX;

    map<int, bool>mp;
    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        mx = max(mx, v);

        ll vv = v % (k * 2);

        if (mp[vv] == 0) {
            mp[vv] = 1;
            a.push_back(vv);
            mn = min(mn, vv);
            mmx = max(mx, vv);

        }




    }
    int ans = -1;
    if (abs(mn - mmx) < k) {
        cout << mx << endl;
        return;
    }
    for (int i = mx; i < mx + k; ++i)
    {
        bool on = true;
        for (auto j : a)
        {
            if ((i - j) % (2 * k) >= k)
            {
                on = false;
                break;
            }
        }
        if (on)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}