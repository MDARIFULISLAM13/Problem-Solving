/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2025
 * time : 20:26:27
 * Problem Name : D_Remove_One_Element
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vec a(t);
    for (int i = 0; i < t; i++)
        cin >> a[i];

    vec left(t, 0);
    left[0] = 1;

    for (int i = 1; i < t; i++)
    {
        if (a[i] > a[i - 1])
        {
            left[i] = left[i - 1] + 1;
        }
        else
        {
            left[i] = 1;
        }
    }

    if (left[t - 1] == t)
    {

        cout << t << endl;
        return 0;
    }

    vec right(t, 0);

    right[t - 1] = 1;
    for (int i = t - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            right[i] = right[i + 1] + 1;
        }
        else
        {
            right[i] = 1;
        }
    }

    if (t == 2)
    {
        cout << 1 << endl;
        return 0;
    }

    ll ans = 0;

    for (int i = 0; i < t; i++)
    {
        ans = max(ans, max(left[i], right[i]));
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] < a[i + 2] && (i + 2 < t))
        {
            ll cnt = left[i] + right[i + 2];
            ans = max(cnt, ans);
        }
    }

    cout << ans << endl;
    return 0;
}