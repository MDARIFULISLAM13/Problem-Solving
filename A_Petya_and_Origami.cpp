#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    ans += (2 * n) / k;
    if ((2 * n) % k != 0)
    {
        ans += 1;
    }
    ans += (5 * n) / k;
    if ((5 * n) % k != 0)
    {
        ans += 1;
    }
    ans += (8 * n) / k;
    if ((8 * n) % k != 0)
    {
        ans += 1;
    }
    cout << ans;
}