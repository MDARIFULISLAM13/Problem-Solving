/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-03-2025
 * time : 02:52:54
 * Problem Name : B_Team_Training
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
void arif()
{
    int n, x;
    cin >> n >> x;
    vec a;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (v >= x)
        {
            ++cnt;
        }
        else
        {
            a.push_back(v);
        }
    }
    int m = 0;
    sort(a.rbegin(), a.rend());
    for (auto i : a)
    {
        ++m;

        if (m * i >= x)
        {

            ++cnt;
           
            m = 0;
        }
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}