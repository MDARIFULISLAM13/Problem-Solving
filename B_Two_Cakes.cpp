/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-04-2025
 * time : 10:55:47
 * Problem Name : B_Two_Cakes
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

    int n, a, b;
    cin >> n >> a >> b;

    int x = a + b;
    x /= n;
    int mn = min(a, b);
    if (x > mn)
    {
        cout << mn << endl;
        return 0;
    }

    int ans = 1;
    int k = 1;
    while (1)
    {
        int man = 0;
        man += (a / k);
        man += (b / k);
        if (man >= n)
        {
            ans = k;
            ++k;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}