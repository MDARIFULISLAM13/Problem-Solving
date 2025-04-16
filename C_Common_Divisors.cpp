
/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-04-2025
 * time : 22:16:49
 * Problem Name : C_Common_Divisors
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define endl "\n";
#define vec vector<ll>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vec a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = 1;
    map<ll, bool> mp;
    mp[1] = 1;

    for (int i = 2; i <= a[0]; i++)
    {
        bool ck = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                if (!mp[j] || !mp[i / j])
                {
                    ck = false;
                    break;
                }
            }
        }
        if (!ck)
            continue;

        mp[i] = true;
        for (ll j : a)
        {
            if (j % i != 0)
            {
                mp[i] = false;
                break;
            }
        }
        if (mp[i])
            ++ans;
    }

    cout << ans << endl;

    return 0;
}
