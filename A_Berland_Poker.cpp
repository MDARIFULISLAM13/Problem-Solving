#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, m, k;
    cin >> n >> m >> k;
    int mcard = n / k;
    int mjoker = min(mcard, m);
    m -= mjoker;
    k -= 1;
    int x = m / k;
    if (m % k != 0)
    {
        x += 1;
    }
    cout << max(0, (mjoker - x)) << endl;
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