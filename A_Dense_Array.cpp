#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        float mx = max(a[i], a[i + 1]);
        float mn = min(a[i], a[i + 1]);
        if (mx / mn > 2)
        {
            while (mx / mn > 2)
            {
                mn *= 2;

                ans++;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}