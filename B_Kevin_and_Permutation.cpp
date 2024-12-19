/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-12-2024
 * time : 21:05:24
 * Problem Name : B_Kevin_and_Permutation
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
void solve() {
    int n, k;
    cin >> n >> k;
    vec ans(n, -1);
    int c = 1;
    int in = k - 1;

    while (in <= n - 1)
    {
        ans[in] = c;
        c++;
        in += k;
    }

    in = 0;
    while (in < n)
    {
        if (ans[in] == -1)
        {
            ans[in] = c;
            c++;
        }

        in++;
    }

    for (int i = 0;i < n;i++)
    {
        cout << ans[i] << " ";
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
    while (t--) {
        solve();
    }

    return 0;
}