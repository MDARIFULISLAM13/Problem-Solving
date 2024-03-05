#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int lb = 0, c;
    int mc = 0;
    int in;
    for (int i = 1; i <= n; i++)
    {
        cin >> in;
        c = in / m;
        if (in % m == 0)
        {
            c -= 1;
        }
        if (c >= mc)
        {
            lb = i;
            mc = c;
        }
    }
    if (lb == 0)
    {
        cout << n << endl;
    }
    else
        cout << lb << endl;
}