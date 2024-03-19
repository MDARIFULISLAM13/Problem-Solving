#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll a, b, c;
    cin >> a >> b >> c;
    int x = 3 - (b % 3);
    if (b % 3 != 0 && x > c)
    {
        cout << "-1\n";
        return;
    }
    ll ans = a;
    ans += (b + c) / 3;
    if ((b + c) % 3 != 0)
    {
        ans += 1;
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