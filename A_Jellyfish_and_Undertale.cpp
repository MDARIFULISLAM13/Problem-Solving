#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll sum = 0;
    sum += b;
    int v;
    for (ll i = 0; i < c; i++)
    {
        cin >> v;
        sum += min((a - 1), v);
    }

    cout << sum << "\n";
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