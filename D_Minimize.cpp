#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = (a + b) / 2;
        cout << (x - a) + (b - x) << endl;
    }

    return 0;
}