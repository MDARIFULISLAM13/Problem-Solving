#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int l, r, k;
    cin >> l >> r >> k;
    vector<int> a;
    vector<int> b;
    int v;
    for (int i = 0; i < l; i++)
    {
        cin >> v;
        if (v <= k)
        {
            a.push_back(v);
        }
    }
    for (int j = 0; j < r; j++)
    {
        cin >> v;
        if (v <= k)
        {
            b.push_back(v);
        }
    }
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] + b[j] <= k)
            {
                ans++;
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}