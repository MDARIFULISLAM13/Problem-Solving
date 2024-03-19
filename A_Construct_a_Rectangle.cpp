#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b)
    {
        swap(a, b);
    }
    if (a < c)
    {
        swap(a, c);
    }
    if (a == b + c)
    {
        cout << "YES\n";
        return;
    }
    else if (a == b && c % 2 == 0 || a == c && b % 2 == 0 || b == c && a % 2 == 0)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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