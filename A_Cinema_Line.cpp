#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int n;
    cin >> n;
    ll s25 = 0;
    ll s50 = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        if (v == 25)
        {
            s25 += 25;
        }
        else if (v == 50)
        {
            s25 -= 25;
            s50 += 50;
        }
        else
        {
            if (s50 > 0)
            {
                s50 -= 50;
                s25 -= 25;
            }
            else
            {
                s25 -= 75;
            }
        }

        if (s25 < 0)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}