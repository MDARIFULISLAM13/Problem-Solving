#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    int v;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        a.push_back(v);
        sum += v;
    }
    ll ans = sum / n;
    if (sum % n != 0)
    {
        ans += 1;
    }
    cout << ans << endl;
    return;
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