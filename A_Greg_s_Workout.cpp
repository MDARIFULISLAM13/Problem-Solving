#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0, b = 0, bi = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        if (i % 3 == 0)
        {
            b += v;
        }
        else if (i % 3 == 2)
        {
            bi += v;
        }
        else
            c += v;
    }
    if (b > c && b > bi)
    {
        cout << "back\n";
        return 0;
    }
    else if (bi > c && bi > b)
    {
        cout << "biceps\n";
        return 0;
    }
    cout << "chest\n";
    return 0;
}
