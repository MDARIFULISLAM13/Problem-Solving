
/**
 *
 * Author : Md.Ariful Islam
 * Date : 15-03-2025
 * time : 22:12:14
 * Problem Name : A_Binary_mtx
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

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> mtx(n);
        int odd = 0, od = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> mtx[i];
            int count = 0;
            for (char c : mtx[i])
            {
                if (c == '1')
                    count++;
            }
            if (count % 2 == 1)
                odd++;
        }
        for (int j = 0; j < m; j++)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (mtx[i][j] == '1')
                    count++;
            }
            if (count % 2 == 1)
                od++;
        }

        cout << max(odd, od) << endl;
    }

    return 0;
}