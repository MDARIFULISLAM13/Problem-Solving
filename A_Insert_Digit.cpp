#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        string b;
        cin >> b;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            char c = a + 48;
            if (b[i] < c && s == 0)
            {
                cout << c << b[i];
                s = 1;
            }
            else
            {
                cout << b[i];
            };
            if (i == (n - 1) && s == 0)
            {
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}
