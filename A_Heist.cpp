#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int ans = a[n - 1] - a[0];
    ans = ans - n + 1;
    cout << ans << endl;
}