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
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll ans = 1e20;
        ans = 0;
        int n;
        cin >> n;
        for (int i = 1; i <= n / 2; i++)
        {
            ans += i * 1ll * i;
        }
        cout << ans * 8 << endl;
    }

    return 0;
}