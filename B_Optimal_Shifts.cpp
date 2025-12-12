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
    string s;
    cin >> s;
    s += s;

    ll cr = 0, mx = 0;
    for (auto i : s)
    {
        if (i == '0')
        {
            cr++;
        }
        else
        {
            mx = max(cr, mx);
            cr = 0;
        }
        mx = max(cr, mx);
    }

    cout << mx << endl;
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