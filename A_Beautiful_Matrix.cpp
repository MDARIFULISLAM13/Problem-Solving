#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 0, col = 0;
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                row = r;
                col = c;
            }
        }
    }
    int ans = abs(3 - row) + abs(3 - col);
    cout << ans << endl;
}