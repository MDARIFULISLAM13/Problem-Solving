#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int b[a];
        for (int i = 0; i < a; i++)
        {
            cin >> b[i];
        }
        sort(b, b + a);
        if (b[0] < 0)
        {
            cout << b[0] << "\n";
        }
        else
        {
            cout << b[a - 1] << endl;
        }
    }
}