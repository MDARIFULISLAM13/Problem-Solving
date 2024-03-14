
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll a, b, aa, bb;
    cin >> a >> b;
    aa = (a + b) / 3;
    int ans = min(min(a, b), aa);
    cout << ans << endl;
}
int main()
{

#ifndef _offline
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}