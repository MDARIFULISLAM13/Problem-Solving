#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int sum = 0, e = 0, o = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        sum += v;
        if (v % 2 == 0)
        {
            e = 1;
        }
        else
        {
            o = 1;
        }
    }
    if (sum % 2 != 0 || (e == 1 && o == 1))
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
    return;
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