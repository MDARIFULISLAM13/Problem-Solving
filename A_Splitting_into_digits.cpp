#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 2; i <= 9; i++)
    {
        if (n % i == 0 && i != n)
        {
            ans = max(ans, i);
        }
    }
    ans = max(ans, 1);
    int v = n / ans;
    cout << v << endl;
    for (int i = 1; i <= v; i++)
    {
        cout << ans << " ";
    }
}