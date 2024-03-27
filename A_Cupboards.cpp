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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    for (int i = 1; i <= n; i++)
    {
        int v, vv;
        cin >> v >> vv;
        if (v == 0)
        {
            l0++;
        }
        else
        {
            l1++;
        }
        if (vv == 0)
        {
            r0++;
        }
        else
        {
            r1++;
        }
    }
    ll ans = min(l0, l1) + min(r0, r1);
    cout << ans << endl;

    return 0;
}
