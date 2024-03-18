#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, d;
    cin >> n >> d;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    if (a[n - 1] <= d)
    {
        cout << "YES\n";
        return;
    }
    if (a[0] + a[1] <= d)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
    return;
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