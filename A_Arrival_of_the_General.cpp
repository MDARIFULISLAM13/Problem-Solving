#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = 0, mn = 1000, mxi = 0, mni = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > mx)
        {
            mx = a;
            mxi = i;
        }
        if (a <= mn)
        {
            mn = a;
            mni = i;
        }
    }

    int ans = (mxi - 1) + (n - mni);
    if (mxi > mni)
    {
        ans -= 1;
    }
    cout << ans;
}