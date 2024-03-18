#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int imn = 0, imx = 0;
    int mn = INT_MAX;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        if (v < mn)
        {
            mn = v;
            imn = i;
        }
        if (v > mx)
        {
            mx = v;
            imx = i;
        }
    }
    int ans1 = max(imx, imn);
    int ans2 = n - min(imn, imx) + 1;
    int ans3 = min(imn, imx) + (n - max(imn, imx) + 1);
    cout << min(ans1, min(ans2, ans3)) << endl;
    ;
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