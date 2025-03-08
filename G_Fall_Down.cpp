/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-03-2025
 * time : 21:26:44
 * Problem Name : G_Fall_Down
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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int k = 0; k < m; k++)
    {
        vector<char> c;
        for (int i = 0; i < n; i++)
        {

            for (int j = k; j <= k; j++)
            {
                c.push_back(a[i][j]);
            }
        }

        reverse(c.begin(), c.end());

        for (int ind = 0; ind < c.size(); ind++)
        {
            if (c[ind] == '*')
            {
                int o = ind - 1;
                int mn = ind;
                while (c[o] == '.' && o >= 0)
                {
                    swap(c[o], c[mn]);
                    o--;
                    mn--;
                }
            }
        }
        reverse(c.begin(), c.end());
        for (int i = 0; i < n; i++)
        {

            for (int j = k; j <= k; j++)
            {
                a[i][j] = c[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
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
    while (t--)
        arif();

    return 0;
}