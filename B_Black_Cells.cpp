/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-08
 * Time : 21:26:24
 * Problem Name : B_Black_Cells
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

bool ck(ll x, vec v)
{
    bool l1 = true;

    if(v.size()%2==0){
        l1 = false;
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) > x)
        {
            if (l1 == true)
            {
                l1 = false;
            }

            else
            {
                return false;
            }
        }
        else
        {
            i += 1;
        }
    }
    return true;
}
void solve()
{

    ll n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll l = 1, h = 1e18;
    ll ans = 1e18;

    while (l <= h)
    {
        ll mid = (l + h) / 2;

        if (ck(mid, v) == true)
        {
            ans = min(mid, ans);
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
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
        solve();

    return 0;
}