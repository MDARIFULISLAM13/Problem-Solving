#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void arif()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    int distance = (y - x);
    int h = a + b;
    if (distance % h != 0)
    {
        cout << "-1\n";
        return;
    }
    cout << distance / h << "\n";
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