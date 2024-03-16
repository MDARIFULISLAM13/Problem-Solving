#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int t = n;
    while (t > 0)
    {
        int x = t % 10;
        ans += x;
        t /= 10;
    }
    if (ans % 4 == 0)
    {
        cout << n << endl;
        return 0;
    }

    for (int i = n; i < (n + 100); i++)
    {
        ans = 0;
        t = i;
        while (t > 0)
        {
            int x = t % 10;
            ans += x;
            t /= 10;
        }
        if (ans % 4 == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
}