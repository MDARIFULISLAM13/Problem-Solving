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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vec ans;
    for (auto i : s)
    {
        if (i == '2')
            ans.push_back(2);

        else if (i == '3')
            ans.push_back(3);
        else if (i == '4')
            ans.insert(ans.end(), {3, 2, 2});
        else if (i == '5')
            ans.push_back(5);
        else if (i == '6')
            ans.insert(ans.end(), {3, 5});
        else if (i == '7')
            ans.push_back(7);
        else if (i == '8')
            ans.insert(ans.end(), {7, 2, 2, 2});
        else if (i == '9')
            ans.insert(ans.end(), {7, 3, 3, 2});
    }
    sort(ans.rbegin(), ans.rend());
    for (auto i : ans)
        cout << i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--)
    solve();

    return 0;
}