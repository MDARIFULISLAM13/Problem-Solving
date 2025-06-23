#include <bits/stdc++.h>

using namespace std;

int main()
{

    cin.tie(0)->sync_with_stdio(0);

    int t;

    cin >> t;

    while (t-- > 0)
    {

        int n;

        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; cin >> a[i++])
            ;

        for (int i = 0; i < n; cin >> b[i++])
            ;
        vector<int> c(2 * n + 1);

        int ans = 0;

        for (int i = 0, j = 0; i < n; i++)
        {

            if (a[i] == b[i])
            {

                ans++;
            }

            while (j < i && a[j] == a[i])
            {

                c[a[j]]--;

                j++;
            }

            c[a[i]]++;

            while (j < i && b[j] == a[i])
            {

                c[b[j]]--;

                j++;
            }

            c[b[i]]++;

            ans = max(ans, c[a[i]]);

            ans = max(ans, c[b[i]]);
        }

        cout << ans << '\n';
    }
}