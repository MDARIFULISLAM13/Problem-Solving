#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    ll sum = 0;

    for (int i = 1; i <= n; i++)
    {
        ll ans = 0;
        ans = pow(2, i);

        sum += ans;
    }
    cout << sum;
    return 0;
}