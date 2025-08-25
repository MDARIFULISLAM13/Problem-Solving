/**
 *
 * Author : Md.Ariful Islam
 * Date : 31-07-2025
 * time : 20:41:58
 * Problem Name : A_Submission_is_All_You_Need
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{

    ll n;
    cin >> n;
    ll sum = 0;
    int cnt0 = 0;
  while(n--)
    {
        int x;
        cin >> x;
        sum += x;
        if (x == 0)
            cnt0++;
    }

    cout << sum + cnt0 << endl;
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