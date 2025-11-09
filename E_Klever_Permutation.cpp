/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-08
 * Time : 19:29:19
 * Problem Name : E_Klever_Permutation
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

void solve()
{
    int n, k;
    cin >> n >> k;
    int l = 1, r = n;

    vec ans(n);
    for (int i = 0; i < k; ++i)
    {
        for (int j = i; j < n; j += k)
        {
            if (i % 2 == 0)
            {
                ans[j] = l;
                l++;
            }
            else
            {
                ans[j] = r;
                r--;
            }
        }
    }
    for (auto i : ans)
        cout << i << " ";
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
