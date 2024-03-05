#include <bits/stdc++.h>
using namespace std;

void arif()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (k--)
    {
        int l, r, val;
        int sum = 0;
        scanf("%d %d %d", &l, &r, &val);
        for (int i = 1; i < l; i++)
        {
            sum += a[i];
        }
        for (int i = r + 1; i <= n; i++)
        {
            sum += a[i];
        }
        int ans = (r - l + 1) * k;
        sum += ans;
        if (sum % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);

    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        arif();
    }
    return 0;
}
