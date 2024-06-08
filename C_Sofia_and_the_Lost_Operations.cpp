#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int i;
        ll b[n], a[n];
        map<int, int> mp, cheak;

        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            mp[b[i]] = 0;
            cheak[b[i]] = 1;
        }
        ll m;
        cin >> m;
        ll d[m];

        for (i = 0; i < m; i++)
        {
            cin >> d[i];
            mp[d[i]]++;
        }
        int f = 1;
        // int usedtobe=d[m-1];
        for (i = 0; i < n; i++)
        {
            if (b[i] == a[i])continue;
            else if (mp[b[i]] > 0)
            {

                mp[b[i]]--;
            }
            else if (mp[b[i]] <= 0)
            {
                if (b[i] != a[i])
                {
                    f = 0;
                    break;
                }
            }
        }
        //cout<<usedtobe<<endl;
        if (f == 1)
        {
            if (cheak[d[m - 1]] != 1)f = 0;
        }
        if (f == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}