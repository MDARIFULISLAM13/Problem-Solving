/**
 *
 * Author : Md.Ariful Islam
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
        string a, b;
        cin >> a >> b;
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            if (b[i] == a[cnt])
            {
                ans++;
                cnt++;
                if (cnt == (n))
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}