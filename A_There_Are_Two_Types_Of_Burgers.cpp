#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    int amount = 0;
    if (h >= c)
    {
        int x = min(p, (b / 2));
        b -= (x * 2);
        amount += (x * h);
        if (b > 1)
        {
            int y = min(f, (b / 2));
            amount += (y * c);
        }
        cout << amount << endl;
        return;
    }
    else
    {
        int x = min(f, (b / 2));
        b -= (x * 2);
        amount += (x * c);
        if (b > 1)
        {
            int y = min(p, (b / 2));
            amount += (y * h);
        }
        cout << amount << endl;
        return;
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