#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int count = 0;
    int s = 0, st = 0, r = 0, c = 0;
    string a;
    for (int i = 1; i <= 8; i++)
    {
        cin >> a;
        for (int j = 0; j < 8; j++)
        {
            if (a[j] == '#')
            {
                count++;
                if (st == 0)
                {
                    c = j + 1;
                }
            }
        }
        if (count == 2)
        {
            s = 1;
        }
        if ((s == 1 && st == 0) && count == 1)
        {
            r = i;
            st = 1;
        }
        count = 0;
    }
    cout << r << " " << c << endl;
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