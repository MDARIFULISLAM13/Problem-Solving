#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int g1 = 0, l1 = 0, v0 = 0, mt = 0, v;
    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        if (v == 0)
        {
            v0 = 1;
        }
        else if (v < 0)
        {
            l1++;
        }
    }
    if ((l1 > 0 && l1 % 2 != 0) || v0 == 1)
    {
        cout << "0\n";
        return;
    }
    else
    {
        cout << "1\n1 0\n";
    }
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
