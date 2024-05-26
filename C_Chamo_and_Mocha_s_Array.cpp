#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i, a[n];

        for (i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for (i = 0;i < n - 1;i++)
        {
            int temp = 0;
            if (a[i] > a[i + 1])
            {
                temp = a[i + 1];
            }
            else temp = a[i];
            if (temp > ans)ans = temp;
            // cout<<ans<<endl;
        }
        for (i = 0;i < n - 2;i++)
        {
            int b[3];
            b[0] = a[i];
            b[1] = a[i + 1];
            b[2] = a[i + 2];
            sort(b, b + 3);
            if (b[1] > ans)ans = b[1];
            //cout<<ans<<endl;
        }
        cout << ans << endl;

    }
}
