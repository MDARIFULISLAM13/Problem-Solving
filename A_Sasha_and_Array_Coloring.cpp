#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v;
        vector<int> a;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            a.push_back(v);
        }
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            ans += a[n - 1 - i] - a[i];
        }
        cout << ans << endl;
    }
}