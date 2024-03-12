#include <bits/stdc++.h>
using namespace std;
void arif()
{
    long long int x, y;
    cin >> x >> y;
    if (x > y + 1)
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